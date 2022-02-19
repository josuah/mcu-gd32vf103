#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define DBG ((struct zmcu_dbg *)0xE0042000)

struct zmcu_dbg {

	/* 0x00 */
	uint32_t volatile RESERVED0;

	/* 0x04: Control register */
	uint32_t volatile CTL;

};
