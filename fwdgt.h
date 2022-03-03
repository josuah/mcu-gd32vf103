#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define FWDGT ((struct sdk_fwdgt *)0x40003000)

struct sdk_fwdgt {

	/* 0x00: Control register */
	uint32_t volatile CTL;

	/* 0x04: Prescaler register */
	uint32_t volatile PSC;

	/* 0x08: Reload register */
	uint32_t volatile RLD;

	/* 0x0C: Status register */
	uint32_t volatile STAT;

};
