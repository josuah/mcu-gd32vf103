#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define ADC0 ((struct sdk_adc *)0x40012400)
#define ADC1 ((struct sdk_adc *)0x40012800)

struct sdk_adc {

	/* 0x00: Status register */
	uint32_t volatile STAT;

	/* 0x04: Control register 0 */
	uint32_t volatile CTL0;

	/* 0x08: Control register 1 */
	uint32_t volatile CTL1;

	/* 0x0C: Sample time register 0 */
	uint32_t volatile SAMPT0;

	/* 0x10: Sample time register 1 */
	uint32_t volatile SAMPT1;

	/* 0x14: Inserted channel data offset register x */
	uint32_t volatile IOFF[4];

	/* 0x24: Watchdog high threshold register */
	uint32_t volatile WDHT;

	/* 0x28: Watchdog low threshold register */
	uint32_t volatile WDLT;

	/* 0x2C: Regular sequence register 0 */
	uint32_t volatile RSQ0;

	/* 0x30: Regular sequence register 1 */
	uint32_t volatile RSQ1;

	/* 0x34: Regular sequence register 2 */
	uint32_t volatile RSQ2;

	/* 0x38: Inserted sequence register */
	uint32_t volatile ISQ;

	/* 0x3C: Inserted data register x */
	uint32_t volatile IDATA[4];

	/* 0x4C: Regular data register */
	uint32_t volatile RDATA;

	/* 0x50 */
	uint8_t volatile RESERVED0[0x80-0x50];

	/* 0x80: Oversample control register */
	uint32_t volatile OVSAMPCTL;

};
