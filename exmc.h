#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define EXMC ((struct zmcu_exmc *)0xA0000000)

struct zmcu_exmc {

	/* 0x00: SRAM/NOR Flash control registers */
	uint32_t volatile SNCTLx;

	/* 0x04: SRAM/NOR Flash timing configuration registers */
	uint32_t volatile SNTCFGx;

};
