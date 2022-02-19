#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define DAC ((struct zmcu_dac *)0x40007400)

struct zmcu_dac {

	/* 0x00: Control register */
	uint32_t volatile CTL;

	/* 0x04: Software trigger register */
	uint32_t volatile SWT;

	/* 0x08: DAC0 12-bit right-aligned data holding register */
	uint32_t volatile DAC0_R12DH;

	/* 0x0C: DAC0 12-bit left-aligned data holding register */
	uint32_t volatile DAC0_L12DH;

	/* 0x10: DAC0 8-bit right-aligned data holding register */
	uint32_t volatile DAC0_R8DH;

	/* 0x14: DAC1 12-bit right-aligned data holding register */
	uint32_t volatile DAC1_R12DH;

	/* 0x18: DAC1 12-bit left-aligned data holding register */
	uint32_t volatile DAC1_L12DH;

	/* 0x1C: DAC1 8-bit right-aligned data holding register */
	uint32_t volatile DAC1_R8DH;

	/* 0x20: DAC concurrent mode 12-bit right-aligned data holding register */
	uint32_t volatile DACC_R12DH;

	/* 0x24: DAC concurrent mode 12-bit left-aligned data holding register */
	uint32_t volatile DACC_L12DH;

	/* 0x28: DAC concurrent mode 8-bit right-aligned data holding register */
	uint32_t volatile DACC_R8DH;

	/* 0x2C: DAC0 data output register */
	uint32_t volatile DAC0_DO;

	/* 0x30: DAC1 data output register */
	uint32_t volatile DAC1_DO;

};
