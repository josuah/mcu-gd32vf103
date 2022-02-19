#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define PMU ((struct zmcu_pmu *)0x40007000)

struct zmcu_pmu {

	/* 0x00: Control register */
	uint32_t volatile CTL;

	/* 0x04: Control and status register */
	uint32_t volatile CS;

};