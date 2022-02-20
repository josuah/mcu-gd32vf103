#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define BKP ((struct zmcu_bkp *)0x40006C00)

struct zmcu_bkp {
	/* 0x00 */
	uint32_t volatile RESERVED0;

	/* 0x04: Backup data register x */
	uint32_t volatile DATAx;

	/* 0x08 */
	uint8_t volatile RESERVED1[0x2C-0x08];

	/* 0x2C: RTC signal output control register */
	uint32_t volatile OCTL;

	/* 0x30: Tamper pin control register */
	uint32_t volatile TPCTL;

	/* 0x34: Tamper control and status register */
	uint32_t volatile TPCS;

};
