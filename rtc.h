#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define RTC ((struct zmcu_rtc *)0x40002800)

struct zmcu_rtc {

	/* 0x00: RTC interrupt enable register(RTC_INTEN) */
	uint32_t volatile INTEN;

	/* 0x04: RTC control register(RTC_CTL) */
	uint32_t volatile CTL;

	/* 0x08: RTC prescaler high register */
	uint32_t volatile PSCH;

	/* 0x0C: RTC prescaler low register */
	uint32_t volatile PSCL;

	/* 0x10: RTC divider high register */
	uint32_t volatile DIVH;

	/* 0x14: RTC divider low register */
	uint32_t volatile DIVL;

	/* 0x18: RTC counter high register */
	uint32_t volatile CNTH;

	/* 0x1C: RTC counter low register */
	uint32_t volatile CNTL;

	/* 0x20: RTC alarm high register */
	uint32_t volatile ALRMH;

	/* 0x24: RTC alarm low register */
	uint32_t volatile ALRML;

};


