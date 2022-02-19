#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define DMA0 ((struct zmcu_dma *)0x40020000)
#define DMA1 ((struct zmcu_dma *)0x40020400)

struct zmcu_dma {

	/* 0x00: Interrupt flag register */
	uint32_t volatile INTF;

	/* 0x04: Interrupt flag clear register */
	uint32_t volatile INTC;

	/* 0x08: Channel x control register */
	uint32_t volatile CHxCTL;

	/* 0x0C: Channel x counter register */
	uint32_t volatile CHxCNT;

	/* 0x10: Channel x peripheral base address register */
	uint32_t volatile CHxPADDR;

	/* 0x14: Channel x memory base address register */
	uint32_t volatile CHxMADDR;

};
