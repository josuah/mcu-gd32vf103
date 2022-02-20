#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define USART0 ((struct zmcu_usart *)0x40013800)
#define USART1 ((struct zmcu_usart *)0x40004400)
#define USART2 ((struct zmcu_usart *)0x40004800)
#define UART3 ((struct zmcu_usart *)0x40004C00)
#define UART4 ((struct zmcu_usart *)0x40005000)

struct zmcu_usart {

	/* 0x00: Status register */
	uint32_t volatile STAT;
#define USART_STAT_PERR				(1u << 0)
#define USART_STAT_FERR				(1u << 1)
#define USART_STAT_NERR				(1u << 2)
#define USART_STAT_ORERR			(1u << 3)
#define USART_STAT_IDLEF			(1u << 4)
#define USART_STAT_RBNE				(1u << 5)
#define USART_STAT_TC				(1u << 6)
#define USART_STAT_TBE				(1u << 7)
#define USART_STAT_LBDF				(1u << 8)
#define USART_STAT_CTSF				(1u << 9)

	/* 0x04: Data register */
	uint32_t volatile DATA;

	/* 0x08: Baud rate register */
	uint32_t volatile BAUD;
#define USART_BAUD_INTDIV(x)			((x) << 4)
#define USART_BAUD_INTDIV_MASK			USART_BAUD_INTDIV(0xFFF)
#define USART_BAUD_FRADIV(x)			((x) << 0)
#define USART_BAUD_FRADIV_MASK			USART_BAUD_FRADIV(0xF)

	/* 0x0C: Control register 0 */
	uint32_t volatile CTL0;
#define USART_CTL0_SBKCMD			(1u << 0)
#define USART_CTL0_RWU				(1u << 1)
#define USART_CTL0_REN				(1u << 2)
#define USART_CTL0_TEN				(1u << 3)
#define USART_CTL0_IDLEIE			(1u << 4)
#define USART_CTL0_RBNEIE			(1u << 5)
#define USART_CTL0_TCIE				(1u << 6)
#define USART_CTL0_TBEIE			(1u << 7)
#define USART_CTL0_PERRIE			(1u << 8)
#define USART_CTL0_PM				(1u << 9)
#define USART_CTL0_PCEN				(1u << 10)
#define USART_CTL0_WM				(1u << 11)
#define USART_CTL0_WL				(1u << 12)
#define USART_CTL0_UEN				(1u << 13)

	/* 0x10: Control register 1 */
	uint32_t volatile CTL1;
#define USART_CTL1_ADDR(x)			((x) << 0)
#define USART_CTL1_LBLEN			(1u << 5)
#define USART_CTL1_LBDIE			(1u << 6)
#define USART_CTL1_CLEN				(1u << 8)
#define USART_CTL1_CPH				(1u << 9)
#define USART_CTL1_CPL				(1u << 10)
#define USART_CTL1_CKEN				(1u << 11)
#define USART_CTL1_STB(x)			((x) << 12)
#define USART_CTL1_STB_MASK			USART_CTL1_STB(B00000011)
#define USART_CTL1_STB_1			B00000000
#define USART_CTL1_STB_0_5			B00000001
#define USART_CTL1_STB_2			B00000010
#define USART_CTL1_STB_1_5			B00000011
#define USART_CTL1_LMEN				(1u << 14)

	/* 0x14: Control register 2 */
	uint32_t volatile CTL2;
#define USART_CTL2_ERRIE			(1u << 0)
#define USART_CTL2_IREN				(1u << 1)
#define USART_CTL2_IRLP				(1u << 2)
#define USART_CTL2_HDEN				(1u << 3)
#define USART_CTL2_NKEN				(1u << 4)
#define USART_CTL2_SCEN				(1u << 5)
#define USART_CTL2_DENR				(1u << 6)
#define USART_CTL2_DENT				(1u << 7)
#define USART_CTL2_RTSEN			(1u << 8)
#define USART_CTL2_CTSEN			(1u << 9)
#define USART_CTL2_CTSIE			(1u << 10)

	/* 0x18: Guard time and prescaler register */
	uint32_t volatile GP;
#define USART_GP_PSC(x)				((x) << 0)
#define USART_GP_GUAT(x)			((x) << 8)

};

/* set the baud rate to an accurate approximation of `baud_rate` */
void usart_set_baud_rate(struct zmcu_usart *usart, uint32_t baud_rate);

/* set the word length to `len` (8 or 9) */
void usart_set_word_length(struct zmcu_usart *usart, uint8_t len);

/* set the number of stop bits, 5 for 0.5, 10 for 1.0, 15 for 1.5... */
void usart_set_stop_bits(struct zmcu_usart *usart, uint8_t stop_bits);
#define USART_STOP_BITS_0_5			USART_CTL1_STB_0_5
#define USART_STOP_BITS_1_0			USART_CTL1_STB_1_0
#define USART_STOP_BITS_1_5			USART_CTL1_STB_1_5
#define USART_STOP_BITS_2_0			USART_CTL1_STB_2_0

/* enable parity checking with an odd parity mode */
void usart_mode_parity_odd(struct zmcu_usart *usart);

/* enable parity checking with an even parity mode */
void usart_mode_parity_even(struct zmcu_usart *usart);

/* disable parity checking */
void usart_mode_parity_off(struct zmcu_usart *usart);

/* enable the usart clock */
void usart_clock_enable(void);

/* disable the usart clock */
void usart_clock_disable(void);

/* enable the usart module */
void usart_enable(struct zmcu_usart *usart);

/* enable the transmit buffer */
void usart_transmit_enable(struct zmcu_usart *usart);

/* enable the receive buffer */
void usart_receive_enable(struct zmcu_usart *usart);

/* whether the transmit buffer is ready to be filled */
int usart_transmit_ready(struct zmcu_usart *usart);

/* whether the transmission is complete */
int usart_transmit_done(struct zmcu_usart *usart);

/* send a break frame */
void usart_transmit_break(struct zmcu_usart *usart);

/* enqueue a data frame */
void usart_transmit_byte(struct zmcu_usart *usart, uint8_t byte);

/* disable hardware flow control */
void usart_disable_hardware_flow_rts(struct zmcu_usart *usart);

/* disable hardware flow control */
void usart_disable_hardware_flow_cts(struct zmcu_usart *usart);
