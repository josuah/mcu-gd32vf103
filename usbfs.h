#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define USBFS ((struct sdk_usbfs *)0x50000000)

struct sdk_usbfs {

	/* 0x000: Global OTG control and status register */ uint32_t volatile GOTGCS;
	/* 0x004: Global OTG interrupt flag register */
	uint32_t volatile GOTGINTF;

	/* 0x008: Global AHB control and status register */
	uint32_t volatile GAHBCS;

	/* 0x00C: Global USB control and status register */
	uint32_t volatile GUSBCS;

	/* 0x010: Global reset control register */
	uint32_t volatile GRSTCTL;

	/* 0x014: Global interrupt flag register */
	uint32_t volatile GINTF;

	/* 0x018: Global interrupt enable register */
	uint32_t volatile GINTEN;

	/* 0x01C */
	uint8_t volatile RESERVED0[0x0024-0x001C];

	/* 0x024: Global receive FIFO length register */
	uint32_t volatile GRFLEN;

	/* 0x028: Host non-periodic transmit FIFO length register 
	 * Device IN endpoint 0 transmit FIFO length */
	uint32_t volatile USBFS_HNPTFLEN_DIEP0TFLEN;

	/* 0x02C: Host non-periodic transmit FIFO/queue status register */
	uint32_t volatile HNPTFQSTAT;

	/* 0x030 */
	uint8_t volatile RESERVED1[0x0038-0x0030];

	/* 0x038: Global core configuration register */
	uint32_t volatile GCCFG;

	/* 0x03C: Core ID register */
	uint32_t volatile CID;

	/* 0x034 */
	uint8_t volatile RESERVED2[0x0100-0x0034];

	/* 0x100: Host periodic transmit FIFO length register */
	uint32_t volatile HPTFLEN;

	/* 0x104: Device IN endpoint transmit FIFO length register */
	uint32_t volatile DIEPTFLEN[3];

	/* 0x110 */
	uint8_t volatile RESERVED3[0x0400-0x0110];

	/* 0x400: Host control register */
	uint32_t volatile HCTL;

	/* 0x404: Host frame interval register */
	uint32_t volatile HFT;

	/* 0x408: Host frame information remaining register */
	uint32_t volatile HFINFR;

	/* 0x40C */
	uint8_t volatile RESERVED4[0x410-0x40C];

	/* 0x410: Host periodic transmit FIFO/queue status register */
	uint32_t volatile HPTFQSTAT;

	/* 0x414: Host all channels interrupt register */
	uint32_t volatile HACHINT;

	/* 0x418: Host all channels interrupt enable register */
	uint32_t volatile HACHINTEN;

	/* 0x41C */
	uint8_t volatile RESERVED5[0x440-0x41C];

	/* 0x440: Host port control and status register */
	uint32_t volatile HPCS;

	/* 0x444 */
	uint8_t volatile RESERVED6[0x500-0x444];

	/* 0x500: Host channel */
	struct {

		/* 0x00: Control register */
		uint32_t volatile CTL;

		/* 0x04 */
		uint8_t volatile RESERVED7[0x08-0x04];

		/* 0x08: Interrupt flag register */
		uint32_t volatile INTF;

		/* 0x0C: Interrupt enable register */
		uint32_t volatile INTEN;

		/* 0x10: Transfer length register */
		uint32_t volatile LEN;

		/* 0x14 */
		uint8_t volatile RESERVED8[0x20-0x14];

	} HCH[8];

	/* 0x600 */
	uint8_t volatile RESERVED9[0x800-0x600];

	/* 0x800: Device configuration register */
	uint32_t volatile DCFG;

	/* 0x804: Device control register */
	uint32_t volatile DCTL;

	/* 0x808: Device status register */
	uint32_t volatile DSTAT;

	/* 0x810: Device IN endpoint common interrupt enable register */
	uint32_t volatile DIEPINTEN;

	/* 0x814: Device OUT endpoint common interrupt enable register */
	uint32_t volatile DOEPINTEN;

	/* 0x818: Device all endpoints interrupt register */
	uint32_t volatile DAEPINT;

	/* 0x81C: Device all endpoints interrupt enable register */
	uint32_t volatile DAEPINTEN;

	/* 0x820 */
	uint8_t volatile RESERVED10[0x0828-0x0820];

	/* 0x828: Device VBUS discharge time register */
	uint32_t volatile DVBUSDT;

	/* 0x82C: Device VBUS pulsing time register */
	uint32_t volatile DVBUSPT;

	/* 0x830 */
	uint8_t volatile RESERVED11[0x834-0x830];

	/* 0x834: Device IN endpoint FIFO empty interrupt enable register */
	uint32_t volatile DIEPFEINTEN;

	/* 0x838 */
	uint8_t volatile RESERVED12[0x900-0x838];

	/* 0x900: Device IN endpoint registers */
	struct {

		/* 0x00: Control register */
		uint32_t volatile CTL;

		/* 0x04 */
		uint8_t volatile RESERVED13[0x08-0x04];

		/* 0x08: Interrupt flag register */
		uint32_t volatile INTF;

		/* 0x0C */
		uint8_t volatile RESERVED14[0x10-0x0C];

		/* 0x10: Transfer length register */
		uint32_t volatile LEN;

		/* 0x14 */
		uint8_t volatile RESERVED15[0x18-0x14];

		/* 0x18: Transmit FIFO status register */
		uint32_t volatile TFSTAT;

		/* 0x1C */
		uint8_t volatile RESERVED16[0x1C-0x18];

	} DIEP[4];

	/* 0x980 */
	uint8_t volatile RESERVED17[0xB00-0x980];

	/* 0xB00: Device OUT endpoint registers */
	struct {

		/* 0x00: Control register */
		uint32_t volatile CTL;

		/* 0x04 */
		uint8_t volatile RESERVED18[0x08-0x04];

		/* 0x08: Interrupt flag register */
		uint32_t volatile INTF;

		/* 0x0C */
		uint8_t volatile RESERVED19[0x10-0x0C];

		/* 0x10: Transfer length register */
		uint32_t volatile LEN;

		/* 0x14 */
		uint8_t volatile RESERVED20[0x20-0x14];

	} DOEP[4];

	/* 0xB80 */
	uint8_t volatile RESERVED21[0xE00-0xB80];

	/* 0xE00: Power and clock control register */
	uint32_t volatile PWRCLKCTL;

};
