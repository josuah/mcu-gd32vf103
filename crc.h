#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define CRC ((struct zmcu_crc *)0x40023000)

struct zmcu_crc {

	/* 0x00: Data register */
	uint32_t volatile DATA;

	/* 0x04: Free data register */
	uint32_t volatile FDATA;

	/* 0x08: Control register */
	uint32_t volatile CTL;

};
