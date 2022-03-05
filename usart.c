#include "libc.h"
#include "registers.h"
#include "functions.h"

#define USART0_TX_PORT		GPIOA
#define USART0_TX_PIN		9u
#define USART0_RX_PORT		GPIOA
#define USART0_RX_PIN		10u

/* various clocks default values */
#define CK_USART0		CK_APB2
#define CK_APB2			CK_AHB
#define CK_AHB			CK_SYS
#define CK_SYS			CK_IRC8M
#define CK_IRC8M		(8*1000*1000)
#define USART0_BAUD_RATE	9600

void
usart_set_baud_rate(struct sdk_usart *usart, uint32_t baud_rate)
{
	/* USART->BAUD = 16 * CK_USART0 / (16 * USART0_BAUD_RATE) */
	//usart->BAUD = CK_USART0 / USART0_BAUD_RATE;
	usart->BAUD = USART_BAUD_FRADIV(0x6) | USART_BAUD_INTDIV(0x1E);
}

void
usart_set_word_length(struct sdk_usart *usart, uint8_t len)
{
	switch (len) {
	case 8: usart->CTL0 &= ~USART_CTL0_WL; break;
	case 9: usart->CTL0 |= USART_CTL0_WL; break;
	default: __stop_program();
	}
}

void
usart_set_stop_bits(struct sdk_usart *usart, uint8_t stop_bits)
{
	uint32_t reg = usart->CTL1 & ~USART_CTL1_STB_MASK;
	usart->CTL1 = reg | USART_CTL1_STB(stop_bits);
}

void
usart_mode_parity_odd(struct sdk_usart *usart)
{
	usart->CTL0 |= USART_CTL0_PM;
	usart->CTL0 |= USART_CTL0_PCEN;
}

void
usart_mode_parity_even(struct sdk_usart *usart)
{
	usart->CTL0 &= ~USART_CTL0_PM;
	usart->CTL0 |= USART_CTL0_PCEN;
}

void
usart_mode_parity_off(struct sdk_usart *usart)
{
	usart->CTL0 &= ~USART_CTL0_PCEN;
}

void
usart_clock_enable(void)
{
	RCU->APB2EN |= RCU_APB2EN_USART0EN;
}

void
usart_clock_disable(void)
{
	RCU->APB2EN &= ~RCU_APB2EN_USART0EN;
}

void
usart_enable(struct sdk_usart *usart)
{
	usart->CTL0 |= USART_CTL0_UEN;
}

void
usart_transmit_enable(struct sdk_usart *usart)
{
	usart->CTL0 |= USART_CTL0_TEN;
}

void
usart_receive_enable(struct sdk_usart *usart)
{
	usart->CTL0 |= USART_CTL0_REN;
}

int
usart_transmit_ready(struct sdk_usart *usart)
{
	return usart->STAT & USART_STAT_TBE;
}

int
usart_transmit_done(struct sdk_usart *usart)
{
	return usart->STAT & USART_STAT_TC;
}

void
usart_transmit_break(struct sdk_usart *usart)
{
	usart->CTL0 |= USART_CTL0_SBKCMD;
}

void
usart_transmit_byte(struct sdk_usart *usart, uint8_t byte)
{
	usart->DATA = byte;
}

void
usart_disable_hardware_flow_rts(struct sdk_usart *usart)
{
	usart->CTL2 &= ~USART_CTL2_RTSEN;
}

void
usart_disable_hardware_flow_cts(struct sdk_usart *usart)
{
	usart->CTL2 &= ~USART_CTL2_CTSEN;
}
