#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define WWDGT ((struct sdk_wwdgt *)0x40002C00)

struct sdk_wwdgt {

	/* 0x00: Control register */ uint32_t volatile CTL;
	/* 0x04: Configuration register */
	uint32_t volatile CFG;

	/* 0x08: Status register */
	uint32_t volatile STAT;

};
