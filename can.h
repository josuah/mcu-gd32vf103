#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define CAN0 ((struct zmcu_can *)0x40006400)
#define CAN1 ((struct zmcu_can *)0x40006800)

struct zmcu_can {

	/* 0x00: Control register */
	uint32_t volatile CTL;

	/* 0x04: Status register */
	uint32_t volatile STAT;

	/* 0x08: Transmit status register */
	uint32_t volatile TSTAT;

	/* 0x0C: Receive message FIFO0 register */
	uint32_t volatile RFIFO0;

	/* 0x10: Receive message FIFO1 register */
	uint32_t volatile RFIFO1;

	/* 0x14: Interrupt enable register */
	uint32_t volatile INTEN;

	/* 0x18: Error register */
	uint32_t volatile ERR;

	/* 0x1C: Bit timing register */
	uint32_t volatile BT;

	/* 0x20 */
	uint32_t volatile RESERVED0[(0x180-0x20)/4];

	/* 0x180: */
	struct {
		/* 0x0: Transmit mailbox identifier register */
		uint32_t volatile TMI;

		/* 0x4: Transmit mailbox property register */
		uint32_t volatile TMP;

		/* 0x8: Transmit mailbox data0 register */
		uint32_t volatile TMDATA0;

		/* 0xC: Transmit mailbox data1 register */
		uint32_t volatile TMDATA1;

	} TX[3];

	/* 0x1A4 */
	uint32_t volatile RESERVED1[(0x1B0-0x1A4)/4];

	/* 0x1B0: */
	struct {

		/* 0x0: Receive FIFO mailbox identifier register */
		uint32_t volatile RFIFOMI;

		/* 0x4: Receive FIFO mailbox property register */
		uint32_t volatile RFIFOMP;

		/* 0x8: Receive FIFO mailbox data0 register */
		uint32_t volatile RFIFOMDATA0;

		/* 0xC: Receive FIFO mailbox data1 register */
		uint32_t volatile RFIFOMDATA1;

	} RX[3];

	/* 0x1D4 */
	uint32_t volatile RESERVED2[(0x200-0x1D4)/4];

	/* 0x200: Filter control register */
	uint32_t volatile FCTL;

	/* 0x204: Filter mode configuration register */
	uint32_t volatile FMCFG;

	/* 0x208 */
	uint32_t volatile RESERVED3;

	/* 0x20C: Filter scale configuration register */
	uint32_t volatile FSCFG;

	/* 0x214: Filter associated FIFO register */
	uint32_t volatile FAFIFO;

	/* 0x21C: Filter working register */
	uint32_t volatile FW;

	/* 0x220 */
	uint32_t volatile RESERVED4[(0x240-0x220)/4];

	/* 0x240: Filter registers */
	struct {

		/* 0x0: Filter data register */
		uint32_t volatile DATA[2];

	} FILTER[28];

};
