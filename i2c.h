#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define I2C0 ((struct zmcu_i2c *)0x40005400)
#define I2C1 ((struct zmcu_i2c *)0x40005800)

struct zmcu_i2c {

	/* 0x00: Control register */
	uint32_t volatile CTL[2];

	/* 0x08: Slave address register 0 */
	uint32_t volatile SADDR[2];

	/* 0x10: Transfer buffer register */
	uint32_t volatile DATA;

	/* 0x14: Transfer status register */
	uint32_t volatile STAT[2];

	/* 0x1C: Clock configure register */
	uint32_t volatile CKCFG;

	/* 0x20: Rise time register */
	uint32_t volatile RT;

	/* 0x24 */
	uint8_t volatile RESERVED0[0x90-0x24];

	/* 0x90: Fast mode plus configure register */
	uint32_t volatile FMPCFG;

};
