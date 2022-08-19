#include "libgd32vf103.h"

extern int main(void);
extern char __data_start, __data_end, __data_load_start;
extern char __bss_start, __bss_end, __stack_top;

void
__reset_handler(void)
{
	volatile char *dst, *src = &__data_load_start;

	for (dst = &__data_start; dst < &__data_end; *dst++ = *src++);
	for (dst = &__bss_start; dst < &__bss_end; *dst++ = 0);
	main();
	for (int volatile i = 0 ;; i++);
}

/* so that the debugger can immediately see which fault was triggered */
void __null_handler(void)		{ for (int volatile i = 0;; i++); }
void __isr_clic_int_sft(void)		{ for (int volatile i = 0;; i++); }
void __isr_clic_int_bwei(void)		{ for (int volatile i = 0;; i++); }
void __isr_clic_int_pmovi(void)		{ for (int volatile i = 0;; i++); }

void (*__vectors[])(void) = {
	NULL,				/* 0x000 Assembly */
	NULL,				/* 0x004 Assembly */
	NULL,				/* 0x008 Assembly */
	__isr_clic_int_sft, 		/* 0x00C #3 CLIC_INT_SFT */
	__null_handler,			/* 0x010 #4 Reserved */
	__null_handler,			/* 0x014 #5 Reserved */
	__null_handler,			/* 0x018 #6 Reserved */
	__isr_clic_int_tmr, 		/* 0x01C #7 CLIC_INT_TMR */
	__null_handler, 		/* 0x020 #8 Reserved */
	__null_handler, 		/* 0x024 #9 Reserved */
	__null_handler, 		/* 0x028 #10 Reserved */
	__null_handler, 		/* 0x02C #11 Reserved */
	__null_handler, 		/* 0x030 #12 Reserved */
	__null_handler, 		/* 0x034 #13 Reserved */
	__null_handler, 		/* 0x038 #14 Reserved */
	__null_handler, 		/* 0x03C #15 Reserved */
	__null_handler, 		/* 0x040 #16 Reserved */
	__isr_clic_int_bwei, 		/* 0x044 #17 CLIC_INT_BWEI */
	__isr_clic_int_pmovi, 		/* 0x048 #18 CLIC_INT_PMOVI */
	__null_handler, 		/* 0x04C #19 WWDGT */
	__null_handler, 		/* 0x050 #20 LVD */
	__null_handler, 		/* 0x054 #21 TAMPER */
	__null_handler, 		/* 0x058 #22 RTC */
	__null_handler, 		/* 0x05C #23 FMC */
	__null_handler, 		/* 0x060 #24 RCU */
	__null_handler, 		/* 0x064 #25 EXTI_LINE0 */
	__null_handler, 		/* 0x068 #26 EXTI_LINE1 */
	__null_handler, 		/* 0x06C #27 EXTI_LINE2 */
	__null_handler, 		/* 0x070 #28 EXTI_LINE3 */
	__null_handler, 		/* 0x074 #29 EXTI_LINE4 */
	__null_handler, 		/* 0x078 #30 DMA0_CHAN0 */
	__null_handler, 		/* 0x07C #31 DMA0_CHAN1 */
	__null_handler, 		/* 0x080 #32 DMA0_CHAN2 */
	__null_handler, 		/* 0x084 #33 DMA0_CHAN3 */
	__null_handler, 		/* 0x088 #34 DMA0_CHAN4 */
	__null_handler, 		/* 0x08C #35 DMA0_CHAN5 */
	__null_handler, 		/* 0x090 #36 DMA0_CHAN6 */
	__null_handler, 		/* 0x094 #37 ADC0_CHAN1 */
	__null_handler, 		/* 0x098 #38 CAN0_TX */
	__null_handler, 		/* 0x09C #39 CAN0_RX0 */
	__null_handler, 		/* 0x0A0 #40 CAN0_RX1 */
	__null_handler, 		/* 0x0A4 #41 CAN0_EWMC */
	__null_handler, 		/* 0x0A8 #42 EXTI_LINE5TO9 */
	__null_handler, 		/* 0x0AC #43 TIMER0_BREAK */
	__null_handler, 		/* 0x0B0 #44 TIMER0_UPDATE */
	__null_handler, 		/* 0x0B4 #45 TIMER0_TRIGGER */
	__null_handler, 		/* 0x0B8 #46 TIMER0_CAPTURE */
	__null_handler, 		/* 0x0BC #47 TIMER1 */
	__null_handler, 		/* 0x0C0 #48 TIMER2 */
	__null_handler, 		/* 0x0C4 #49 TIMER3 */
	__null_handler, 		/* 0x0C8 #50 I2C0_EVENT */
	__null_handler, 		/* 0x0CC #51 I2C0_ERROR */
	__null_handler, 		/* 0x0D0 #52 I2C1_EVENT */
	__null_handler, 		/* 0x0D4 #53 I2C1_ERROR */
	__null_handler, 		/* 0x0D8 #54 SPI0 */
	__null_handler, 		/* 0x0DC #55 SPI1 */
	__null_handler, 		/* 0x0E0 #56 USART0 */
	__null_handler, 		/* 0x0E4 #57 USART1 */
	__null_handler, 		/* 0x0E8 #58 USART2 */
	__null_handler, 		/* 0x0EC #59 EXTI_LINE10TO15 */
	__null_handler, 		/* 0x0F0 #60 RTC_ALARM */
	__null_handler, 		/* 0x0F4 #61 USBFS_WAKEUP */
	NULL, 				/* 0x0F8 #62 Reserved */
	NULL, 				/* 0x0FC #63 Reserved */
	NULL, 				/* 0x100 #64 Reserved */
	NULL, 				/* 0x104 #65 Reserved */
	NULL, 				/* 0x108 #66 Reserved */
	NULL, 				/* 0x10C #67 Reserved */
	NULL, 				/* 0x110 #68 Reserved */
	__null_handler, 		/* 0x114 #69 TIMER4 */
	__null_handler, 		/* 0x118 #70 SPI2 */
	__null_handler, 		/* 0x11C #71 UART3 */
	__null_handler, 		/* 0x120 #72 UART4 */
	__null_handler, 		/* 0x124 #73 TIMER5 */
	__null_handler, 		/* 0x128 #74 TIMER6 */
	__null_handler, 		/* 0x12C #75 DMA1_CHAN0 */
	__null_handler, 		/* 0x130 #76 DMA1_CHAN1 */
	__null_handler, 		/* 0x134 #77 DMA1_CHAN2 */
	__null_handler, 		/* 0x138 #78 DMA1_CHAN3 */
	__null_handler, 		/* 0x13C #79 DMA1_CHAN4 */
	NULL, 				/* 0x140 #80 Reserved */
	NULL, 				/* 0x144 #81 Reserved */
	__null_handler, 		/* 0x148 #82 CAN1_TX */
	__null_handler, 		/* 0x14C #83 CAN1_RX0 */
	__null_handler, 		/* 0x150 #84 CAN1_RX1 */
	__null_handler, 		/* 0x154 #85 CAN1_EWMC */
	__null_handler, 		/* 0x158 #86 USBFS */
};
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
usart_set_baud_rate(struct mcu_usart *usart, uint32_t baud_rate)
{
	/* USART->BAUD = 16 * CK_USART0 / (16 * USART0_BAUD_RATE) */
	//usart->BAUD = CK_USART0 / USART0_BAUD_RATE;
	usart->BAUD = USART_BAUD_FRADIV(0x6) | USART_BAUD_INTDIV(0x1E);
}

void
usart_set_word_length(struct mcu_usart *usart, uint8_t len)
{
	switch (len) {
	case 8: usart->CTL0 &= ~USART_CTL0_WL; break;
	case 9: usart->CTL0 |= USART_CTL0_WL; break;
	default: __stop_program();
	}
}

void
usart_set_stop_bits(struct mcu_usart *usart, uint8_t stop_bits)
{
	uint32_t reg = usart->CTL1 & ~USART_CTL1_STB_MASK;
	usart->CTL1 = reg | USART_CTL1_STB(stop_bits);
}

void
usart_mode_parity_odd(struct mcu_usart *usart)
{
	usart->CTL0 |= USART_CTL0_PM;
	usart->CTL0 |= USART_CTL0_PCEN;
}

void
usart_mode_parity_even(struct mcu_usart *usart)
{
	usart->CTL0 &= ~USART_CTL0_PM;
	usart->CTL0 |= USART_CTL0_PCEN;
}

void
usart_mode_parity_off(struct mcu_usart *usart)
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
usart_enable(struct mcu_usart *usart)
{
	usart->CTL0 |= USART_CTL0_UEN;
}

void
usart_transmit_enable(struct mcu_usart *usart)
{
	usart->CTL0 |= USART_CTL0_TEN;
}

void
usart_receive_enable(struct mcu_usart *usart)
{
	usart->CTL0 |= USART_CTL0_REN;
}

int
usart_transmit_ready(struct mcu_usart *usart)
{
	return usart->STAT & USART_STAT_TBE;
}

int
usart_transmit_done(struct mcu_usart *usart)
{
	return usart->STAT & USART_STAT_TC;
}

void
usart_transmit_break(struct mcu_usart *usart)
{
	usart->CTL0 |= USART_CTL0_SBKCMD;
}

void
usart_transmit_byte(struct mcu_usart *usart, uint8_t byte)
{
	usart->DATA = byte;
}

void
usart_disable_hardware_flow_rts(struct mcu_usart *usart)
{
	usart->CTL2 &= ~USART_CTL2_RTSEN;
}

void
usart_disable_hardware_flow_cts(struct mcu_usart *usart)
{
	usart->CTL2 &= ~USART_CTL2_CTSEN;
}
