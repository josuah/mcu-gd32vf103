#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define FMC ((struct zmcu_fmc *)0x40022000)

struct zmcu_fmc {

	/* 0x00: Wait state register */
	uint32_t volatile WS;

	/* 0x04: Unlock key register */
	uint32_t volatile KEY;

	/* 0x08: Option byte unlock key register */
	uint32_t volatile OBKEY;

	/* 0x0C: Status register */
	uint32_t volatile STAT;

	/* 0x10: Control register */
	uint32_t volatile CTL;

	/* 0x14: Address register */
	uint32_t volatile ADDR;

	/* 0x1C: Option byte status register */
	uint32_t volatile OBSTAT;

	/* 0x20: Erase/Program Protection register */
	uint32_t volatile WP;

	/* 0x24 */
	uint32_t volatile RESERVED0[(0x100-0x24)/4];

	/* 0x100: Product ID register */
	uint32_t volatile PID;

};
