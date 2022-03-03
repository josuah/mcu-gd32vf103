#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define SPI0 ((struct sdk_spi_i2s *)0x40013000)
#define SPI1 ((struct sdk_spi_i2s *)0x40003800)
#define I2S1 ((struct sdk_spi_i2s *)0x40003800)
#define SPI2 ((struct sdk_spi_i2s *)0x40003C00)
#define I2S2 ((struct sdk_spi_i2s *)0x40003C00)

struct sdk_spi_i2s {

	/* 0x00: Control register 0 */
	uint32_t volatile CTL0;

	/* 0x04: Control register 1 */
	uint32_t volatile CTL1;

	/* 0x08: Status register */
	uint32_t volatile STAT;

	/* 0x0C: Data register */
	uint32_t volatile DATA;

	/* 0x10: CRC polynomial register */
	uint32_t volatile CRCPOLY;

	/* 0x14: RX CRC register */
	uint32_t volatile RCRC;

	/* 0x18: TX CRC register */
	uint32_t volatile TCRC;

	/* 0x1C: I2S control register */
	uint32_t volatile I2SCTL;

	/* 0x20: I2S clock prescaler register */
	uint32_t volatile I2SPSC;

};
