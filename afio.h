#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define AFIO ((struct zmcu_afio *)0x40010000)

struct zmcu_afio {

	/* 0x00: Event control register */
	uint32_t volatile EC;
#define AFIO_EC_PIN(x)				((x) << 0)
#define AFIO_EC_PORT(x)				((x) << 4)
#define AFIO_EC_EOE(x)				((x) << 7)

	/* 0x04: AFIO port configuration register 0 */
	uint32_t volatile PCF0;
#define AFIO_PCF0_SPI0_REMAP			(1u << 0)
#define AFIO_PCF0_I2C0_REMAP			(1u << 1)
#define AFIO_PCF0_USART0_REMAP			(1u << 2)
#define AFIO_PCF0_USART1_REMAP			(1u << 3)
#define AFIO_PCF0_USART2_REMAP			(1u << 4)
#define AFIO_PCF0_TIMER0_REMAP			(1u << 6)
#define AFIO_PCF0_TIMER1_REMAP			(1u << 8)
#define AFIO_PCF0_TIMER2_REMAP			(1u << 10)
#define AFIO_PCF0_TIMER3_REMAP			(1u << 12)
#define AFIO_PCF0_CAN0_REMAP(x)			((x) << 13)
#define AFIO_PCF0_CAN0_MASK			AFIO_PCF0_CAN0_REMAP(B00000011)
#define AFIO_PCF0_CAN0_NOREMAP			B00000000
#define AFIO_PCF0_CAN0_PA11PA12			B00000000
#define AFIO_PCF0_PD01_REMAP			(1u << 15)
#define AFIO_PCF0_TIMER4CH3_REMAP		(1u << 16)
#define AFIO_PCF0_CAN1_REMAP			(1u << 22)
#define AFIO_PCF0_SWJ_CFG(x)			((x) << 24)
#define AFIO_PCF0_SWJ_CFG_MASK			AFIO_PCF0_SWJ_CFG(B00000111)
#define AFIO_PCF0_SWJ_CFG_RESET			B00000000
#define AFIO_PCF0_SWJ_CFG_NONJT			B00000001
#define AFIO_PCF0_SWJ_CFG_OFF			B00000010
#define AFIO_PCF0_SPI2_REMAP			(1u << 28)
#define AFIO_PCF0_TIMER1ITI1_REMAP		(1u << 29)

	/* 0x08: EXTI sources selection register */
	uint32_t volatile EXTISS[4];
#define AFIO_EXTISS_EXTI(n, x)			((x) << ((n) * 4 % 32))
#define AFIO_EXTISS_PA				B00000000
#define AFIO_EXTISS_PB				B00000001
#define AFIO_EXTISS_PC				B00000010
#define AFIO_EXTISS_PD				B00000011
#define AFIO_EXTISS_PE				B00000100

	/* 0x18 */
	uint32_t volatile RESERVED0;

	/* 0x1C: AFIO port configuration register 1 */
	uint32_t volatile PCF1;
#define AFIO_PCF1_EXMC_NADV			(1u << 10)

};
