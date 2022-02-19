#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define EXTI ((struct zmcu_exti *)0x40010400)

struct zmcu_exti {

	/* 0x00: Interrupt enable register */
	uint32_t volatile INTEN;

	/* 0x04: Event enable register */
	uint32_t volatile EVEN;

	/* 0x08: Rising edge trigger enable register */
	uint32_t volatile RTEN;

	/* 0x0C: Falling edge trigger enable register */
	uint32_t volatile FTEN;

	/* 0x10: Software interrupt event register */
	uint32_t volatile SWIEV;

	/* 0x14: Pending register */
	uint32_t volatile PD;

};
