#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define TIMER0 ((struct sdk_timer *)0x40012C00)
#define TIMER1 ((struct sdk_timer *)0x40000000)
#define TIMER2 ((struct sdk_timer *)0x40000400)
#define TIMER3 ((struct sdk_timer *)0x40000800)
#define TIMER4 ((struct sdk_timer *)0x40000C00)
#define TIMER5 ((struct sdk_timer *)0x40001000) /* up to CAR */
#define TIMER6 ((struct sdk_timer *)0x40001400) /* up to CAR */

struct sdk_timer {

	/* 0x00: Control register 0 */
	uint32_t volatile CTL0;

	/* 0x04: Control register 1 */
	uint32_t volatile CTL1;

	/* 0x08: Slave mode configuration register */
	uint32_t volatile SMCFG;

	/* 0x0C: DMA and interrupt enable register */
	uint32_t volatile DMAINTEN;

	/* 0x10: Interrupt flag register */
	uint32_t volatile INTF;

	/* 0x14: Software event generation register */
	uint32_t volatile SWEVG;

	/* 0x18: Channel control register 0 */
	uint32_t volatile CHCTL0;

	/* 0x1C: Channel control register 1 */
	uint32_t volatile CHCTL1;

	/* 0x20: Channel control register 2 */
	uint32_t volatile CHCTL2;

	/* 0x24: Counter register */
	uint32_t volatile CNT;

	/* 0x28: Prescaler register */
	uint32_t volatile PSC;

	/* 0x2C: Counter auto reload register */
	uint32_t volatile CAR;

	/* 0x30: Counter repetition register */
	uint32_t volatile CREP;

	/* 0x34: Channel 0 capture/compare value register */
	uint32_t volatile CH0CV;

	/* 0x38: Channel 1 capture/compare value register */
	uint32_t volatile CH1CV;

	/* 0x3C: Channel 2 capture/compare value register */
	uint32_t volatile CH2CV;

	/* 0x40: Channel 3 capture/compare value register */
	uint32_t volatile CH3CV;

	/* 0x44: Complementary channel protection register */
	uint32_t volatile CCHP;

	/* 0x48: DMA configuration register */
	uint32_t volatile DMACFG;

	/* 0x4C: DMA transfer buffer register */
	uint32_t volatile DMATB;

};
