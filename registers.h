#ifndef REGISTERS_H
#define REGISTERS_H


#define ADC0 ((struct sdk_adc *)0x40012400)

struct sdk_adc {

	/* 0x00: status register */
	uint32_t volatile STAT;
	/* Start flag of regular channel group */
#define ADC_STAT_STRC						4u
	/* Start flag of inserted channel group */
#define ADC_STAT_STIC						3u
	/* End of inserted group conversion flag */
#define ADC_STAT_EOIC						2u
	/* End of group conversion flag */
#define ADC_STAT_EOC						1u
	/* Analog watchdog event flag */
#define ADC_STAT_WDE						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: control register 0 */
	uint32_t volatile CTL0;
	/* Regular channel analog watchdog  enable */
#define ADC_CTL0_RWDEN						23u
	/* Inserted channel analog watchdog */
#define ADC_CTL0_IWDEN						22u
	/* sync mode selection */
#define ADC_CTL0_SYNCM_msb					19u
#define ADC_CTL0_SYNCM_lsb					16u
	/* Number of conversions in */
#define ADC_CTL0_DISNUM_msb					15u
#define ADC_CTL0_DISNUM_lsb					13u
	/* Discontinuous mode on */
#define ADC_CTL0_DISIC						12u
	/* Discontinuous mode on regular */
#define ADC_CTL0_DISRC						11u
	/* Inserted channel group convert */
#define ADC_CTL0_ICA						10u
	/* When in scan mode, analog watchdog */
#define ADC_CTL0_WDSC						9u
	/* Scan mode */
#define ADC_CTL0_SM						8u
	/* Interrupt enable for EOIC */
#define ADC_CTL0_EOICIE					7u
	/* Interrupt enable for WDE */
#define ADC_CTL0_WDEIE						6u
	/* Interrupt enable for EOC */
#define ADC_CTL0_EOCIE						5u
	/* Analog watchdog channel select */
#define ADC_CTL0_WDCHSEL_msb					4u
#define ADC_CTL0_WDCHSEL_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: control register 1 */
	uint32_t volatile CTL1;
	/* Channel 16 and 17 enable of ADC0 */
#define ADC_CTL1_TSVREN					23u
	/* Start on regular channel */
#define ADC_CTL1_SWRCST					22u
	/* Start on inserted channel */
#define ADC_CTL1_SWICST					21u
	/* External trigger enable for regular channel */
#define ADC_CTL1_ETERC						20u
	/* External trigger select for regular channel */
#define ADC_CTL1_ETSRC_msb					19u
#define ADC_CTL1_ETSRC_lsb					17u
	/* External trigger select for inserted channel */
#define ADC_CTL1_ETEIC						15u
	/* External trigger select for inserted channel */
#define ADC_CTL1_ETSIC_msb					14u
#define ADC_CTL1_ETSIC_lsb					12u
	/* Data alignment */
#define ADC_CTL1_DAL						11u
	/* DMA request enable */
#define ADC_CTL1_DMA						8u
	/* Reset calibration */
#define ADC_CTL1_RSTCLB					3u
	/* ADC calibration */
#define ADC_CTL1_CLB						2u
	/* Continuous mode */
#define ADC_CTL1_CTN						1u
	/* ADC on */
#define ADC_CTL1_ADCON						0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Sample time register 0 */
	uint32_t volatile SAMPT0;
	/* Channel 10 sample time */
#define ADC_SAMPT0_SPT10_msb					2u
#define ADC_SAMPT0_SPT10_lsb					0u
	/* Channel 11 sample time */
#define ADC_SAMPT0_SPT11_msb					5u
#define ADC_SAMPT0_SPT11_lsb					3u
	/* Channel 12 sample time */
#define ADC_SAMPT0_SPT12_msb					8u
#define ADC_SAMPT0_SPT12_lsb					6u
	/* Channel 13 sample time */
#define ADC_SAMPT0_SPT13_msb					11u
#define ADC_SAMPT0_SPT13_lsb					9u
	/* Channel 14 sample time */
#define ADC_SAMPT0_SPT14_msb					14u
#define ADC_SAMPT0_SPT14_lsb					12u
	/* Channel 15 sample time */
#define ADC_SAMPT0_SPT15_msb					17u
#define ADC_SAMPT0_SPT15_lsb					15u
	/* Channel 16 sample time */
#define ADC_SAMPT0_SPT16_msb					20u
#define ADC_SAMPT0_SPT16_lsb					18u
	/* Channel 17 sample time */
#define ADC_SAMPT0_SPT17_msb					23u
#define ADC_SAMPT0_SPT17_lsb					21u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Sample time register 1 */
	uint32_t volatile SAMPT1;
	/* Channel 0 sample time */
#define ADC_SAMPT1_SPT0_msb					2u
#define ADC_SAMPT1_SPT0_lsb					0u
	/* Channel 1 sample time */
#define ADC_SAMPT1_SPT1_msb					5u
#define ADC_SAMPT1_SPT1_lsb					3u
	/* Channel 2 sample time */
#define ADC_SAMPT1_SPT2_msb					8u
#define ADC_SAMPT1_SPT2_lsb					6u
	/* Channel 3 sample time */
#define ADC_SAMPT1_SPT3_msb					11u
#define ADC_SAMPT1_SPT3_lsb					9u
	/* Channel 4 sample time */
#define ADC_SAMPT1_SPT4_msb					14u
#define ADC_SAMPT1_SPT4_lsb					12u
	/* Channel 5 sample time */
#define ADC_SAMPT1_SPT5_msb					17u
#define ADC_SAMPT1_SPT5_lsb					15u
	/* Channel 6 sample time */
#define ADC_SAMPT1_SPT6_msb					20u
#define ADC_SAMPT1_SPT6_lsb					18u
	/* Channel 7 sample time */
#define ADC_SAMPT1_SPT7_msb					23u
#define ADC_SAMPT1_SPT7_lsb					21u
	/* Channel 8 sample time */
#define ADC_SAMPT1_SPT8_msb					26u
#define ADC_SAMPT1_SPT8_lsb					24u
	/* Channel 9 sample time */
#define ADC_SAMPT1_SPT9_msb					29u
#define ADC_SAMPT1_SPT9_lsb					27u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Inserted channel data offset register */
	uint32_t volatile IOFF0;
	/* Data offset for inserted channel */
#define ADC_IOFF0_IOFF_msb					11u
#define ADC_IOFF0_IOFF_lsb					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Inserted channel data offset register */
	uint32_t volatile IOFF1;
	/* Data offset for inserted channel */
#define ADC_IOFF1_IOFF_msb					11u
#define ADC_IOFF1_IOFF_lsb					0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: Inserted channel data offset register */
	uint32_t volatile IOFF2;
	/* Data offset for inserted channel */
#define ADC_IOFF2_IOFF_msb					11u
#define ADC_IOFF2_IOFF_lsb					0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Inserted channel data offset register */
	uint32_t volatile IOFF3;
	/* Data offset for inserted channel */
#define ADC_IOFF3_IOFF_msb					11u
#define ADC_IOFF3_IOFF_lsb					0u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: watchdog higher threshold */
	uint32_t volatile WDHT;
	/* Analog watchdog higher */
#define ADC_WDHT_WDHT_msb					11u
#define ADC_WDHT_WDHT_lsb					0u

	/* 0x24 */
	uint8_t RESERVED9[0x28u-0x24u];

	/* 0x28: watchdog lower threshold */
	uint32_t volatile WDLT;
	/* Analog watchdog lower */
#define ADC_WDLT_WDLT_msb					11u
#define ADC_WDLT_WDLT_lsb					0u

	/* 0x28 */
	uint8_t RESERVED10[0x2Cu-0x28u];

	/* 0x2C: regular sequence register 0 */
	uint32_t volatile RSQ0;
	/* Regular channel group */
#define ADC_RSQ0_RL_msb					23u
#define ADC_RSQ0_RL_lsb					20u
	/* 16th conversion in regular */
#define ADC_RSQ0_RSQ15_msb					19u
#define ADC_RSQ0_RSQ15_lsb					15u
	/* 15th conversion in regular */
#define ADC_RSQ0_RSQ14_msb					14u
#define ADC_RSQ0_RSQ14_lsb					10u
	/* 14th conversion in regular */
#define ADC_RSQ0_RSQ13_msb					9u
#define ADC_RSQ0_RSQ13_lsb					5u
	/* 13th conversion in regular */
#define ADC_RSQ0_RSQ12_msb					4u
#define ADC_RSQ0_RSQ12_lsb					0u

	/* 0x2C */
	uint8_t RESERVED11[0x30u-0x2Cu];

	/* 0x30: regular sequence register 1 */
	uint32_t volatile RSQ1;
	/* 12th conversion in regular */
#define ADC_RSQ1_RSQ11_msb					29u
#define ADC_RSQ1_RSQ11_lsb					25u
	/* 11th conversion in regular */
#define ADC_RSQ1_RSQ10_msb					24u
#define ADC_RSQ1_RSQ10_lsb					20u
	/* 10th conversion in regular */
#define ADC_RSQ1_RSQ9_msb					19u
#define ADC_RSQ1_RSQ9_lsb					15u
	/* 9th conversion in regular */
#define ADC_RSQ1_RSQ8_msb					14u
#define ADC_RSQ1_RSQ8_lsb					10u
	/* 8th conversion in regular */
#define ADC_RSQ1_RSQ7_msb					9u
#define ADC_RSQ1_RSQ7_lsb					5u
	/* 7th conversion in regular */
#define ADC_RSQ1_RSQ6_msb					4u
#define ADC_RSQ1_RSQ6_lsb					0u

	/* 0x30 */
	uint8_t RESERVED12[0x34u-0x30u];

	/* 0x34: regular sequence register 2 */
	uint32_t volatile RSQ2;
	/* 6th conversion in regular */
#define ADC_RSQ2_RSQ5_msb					29u
#define ADC_RSQ2_RSQ5_lsb					25u
	/* 5th conversion in regular */
#define ADC_RSQ2_RSQ4_msb					24u
#define ADC_RSQ2_RSQ4_lsb					20u
	/* 4th conversion in regular */
#define ADC_RSQ2_RSQ3_msb					19u
#define ADC_RSQ2_RSQ3_lsb					15u
	/* 3rd conversion in regular */
#define ADC_RSQ2_RSQ2_msb					14u
#define ADC_RSQ2_RSQ2_lsb					10u
	/* 2nd conversion in regular */
#define ADC_RSQ2_RSQ1_msb					9u
#define ADC_RSQ2_RSQ1_lsb					5u
	/* 1st conversion in regular */
#define ADC_RSQ2_RSQ0_msb					4u
#define ADC_RSQ2_RSQ0_lsb					0u

	/* 0x34 */
	uint8_t RESERVED13[0x38u-0x34u];

	/* 0x38: Inserted sequence register */
	uint32_t volatile ISQ;
	/* Inserted channel group length */
#define ADC_ISQ_IL_msb						21u
#define ADC_ISQ_IL_lsb						20u
	/* 4th conversion in inserted */
#define ADC_ISQ_ISQ3_msb					19u
#define ADC_ISQ_ISQ3_lsb					15u
	/* 3rd conversion in inserted */
#define ADC_ISQ_ISQ2_msb					14u
#define ADC_ISQ_ISQ2_lsb					10u
	/* 2nd conversion in inserted */
#define ADC_ISQ_ISQ1_msb					9u
#define ADC_ISQ_ISQ1_lsb					5u
	/* 1st conversion in inserted */
#define ADC_ISQ_ISQ0_msb					4u
#define ADC_ISQ_ISQ0_lsb					0u

	/* 0x38 */
	uint8_t RESERVED14[0x3Cu-0x38u];

	/* 0x3C: Inserted data register 0 */
	uint32_t volatile IDATA0;
	/* Inserted number n conversion data */
#define ADC_IDATA0_IDATAN_msb					15u
#define ADC_IDATA0_IDATAN_lsb					0u

	/* 0x3C */
	uint8_t RESERVED15[0x40u-0x3Cu];

	/* 0x40: Inserted data register 1 */
	uint32_t volatile IDATA1;
	/* Inserted number n conversion data */
#define ADC_IDATA1_IDATAN_msb					15u
#define ADC_IDATA1_IDATAN_lsb					0u

	/* 0x40 */
	uint8_t RESERVED16[0x44u-0x40u];

	/* 0x44: Inserted data register 2 */
	uint32_t volatile IDATA2;
	/* Inserted number n conversion data */
#define ADC_IDATA2_IDATAN_msb					15u
#define ADC_IDATA2_IDATAN_lsb					0u

	/* 0x44 */
	uint8_t RESERVED17[0x48u-0x44u];

	/* 0x48: Inserted data register 3 */
	uint32_t volatile IDATA3;
	/* Inserted number n conversion data */
#define ADC_IDATA3_IDATAN_msb					15u
#define ADC_IDATA3_IDATAN_lsb					0u

	/* 0x48 */
	uint8_t RESERVED18[0x4Cu-0x48u];

	/* 0x4C: regular data register */
	uint32_t volatile RDATA;
	/* ADC regular channel data */
#define ADC_RDATA_ADC1RDTR_msb					31u
#define ADC_RDATA_ADC1RDTR_lsb					16u
	/* Regular channel data */
#define ADC_RDATA_RDATA_msb					15u
#define ADC_RDATA_RDATA_lsb					0u

	/* 0x4C */
	uint8_t RESERVED19[0x80u-0x4Cu];

	/* 0x80: Oversample control register */
	uint32_t volatile OVSAMPCTL;
	/* ADC resolution */
#define ADC_OVSAMPCTL_DRES_msb					13u
#define ADC_OVSAMPCTL_DRES_lsb					12u
	/* Triggered Oversampling */
#define ADC_OVSAMPCTL_TOVS					9u
	/* Oversampling shift */
#define ADC_OVSAMPCTL_OVSS_msb					8u
#define ADC_OVSAMPCTL_OVSS_lsb					5u
	/* Oversampling ratio */
#define ADC_OVSAMPCTL_OVSR_msb					4u
#define ADC_OVSAMPCTL_OVSR_lsb					2u
	/* Oversampler Enable */
#define ADC_OVSAMPCTL_OVSEN					0u

};


#define ADC1 ((struct sdk_adc1 *)0x40012800)

struct sdk_adc1 {

	/* 0x00: status register */
	uint32_t volatile STAT;
	/* Start flag of regular channel group */
#define ADC1_STAT_STRC						4u
	/* Start flag of inserted channel group */
#define ADC1_STAT_STIC						3u
	/* End of inserted group conversion flag */
#define ADC1_STAT_EOIC						2u
	/* End of group conversion flag */
#define ADC1_STAT_EOC						1u
	/* Analog watchdog event flag */
#define ADC1_STAT_WDE						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: control register 0 */
	uint32_t volatile CTL0;
	/* Regular channel analog watchdog */
#define ADC1_CTL0_RWDEN						23u
	/* Inserted channel analog watchdog */
#define ADC1_CTL0_IWDEN						22u
	/* Number of conversions in */
#define ADC1_CTL0_DISNUM_msb					15u
#define ADC1_CTL0_DISNUM_lsb					13u
	/* Discontinuous mode on */
#define ADC1_CTL0_DISIC						12u
	/* Discontinuous mode on regular */
#define ADC1_CTL0_DISRC						11u
	/* Inserted channel group convert */
#define ADC1_CTL0_ICA						10u
	/* When in scan mode, analog watchdog */
#define ADC1_CTL0_WDSC						9u
	/* Scan mode */
#define ADC1_CTL0_SM						8u
	/* Interrupt enable for EOIC */
#define ADC1_CTL0_EOICIE					7u
	/* Interrupt enable for WDE */
#define ADC1_CTL0_WDEIE						6u
	/* Interrupt enable for EOC */
#define ADC1_CTL0_EOCIE						5u
	/* Analog watchdog channel select */
#define ADC1_CTL0_WDCHSEL_msb					4u
#define ADC1_CTL0_WDCHSEL_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: control register 1 */
	uint32_t volatile CTL1;
	/* Start on regular channel */
#define ADC1_CTL1_SWRCST					22u
	/* Start on inserted channel */
#define ADC1_CTL1_SWICST					21u
	/* External trigger enable for regular channel */
#define ADC1_CTL1_ETERC						20u
	/* External trigger select for regular channel */
#define ADC1_CTL1_ETSRC_msb					19u
#define ADC1_CTL1_ETSRC_lsb					17u
	/* External trigger enable for inserted channel */
#define ADC1_CTL1_ETEIC						15u
	/* External trigger select for inserted channel */
#define ADC1_CTL1_ETSIC_msb					14u
#define ADC1_CTL1_ETSIC_lsb					12u
	/* Data alignment */
#define ADC1_CTL1_DAL						11u
	/* DMA request enable */
#define ADC1_CTL1_DMA						8u
	/* Reset calibration */
#define ADC1_CTL1_RSTCLB					3u
	/* ADC calibration */
#define ADC1_CTL1_CLB						2u
	/* Continuous mode */
#define ADC1_CTL1_CTN						1u
	/* ADC on */
#define ADC1_CTL1_ADCON						0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Sample time register 0 */
	uint32_t volatile SAMPT0;
	/* Channel 10 sample time */
#define ADC1_SAMPT0_SPT10_msb					2u
#define ADC1_SAMPT0_SPT10_lsb					0u
	/* Channel 11 sample time */
#define ADC1_SAMPT0_SPT11_msb					5u
#define ADC1_SAMPT0_SPT11_lsb					3u
	/* Channel 12 sample time */
#define ADC1_SAMPT0_SPT12_msb					8u
#define ADC1_SAMPT0_SPT12_lsb					6u
	/* Channel 13 sample time */
#define ADC1_SAMPT0_SPT13_msb					11u
#define ADC1_SAMPT0_SPT13_lsb					9u
	/* Channel 14 sample time */
#define ADC1_SAMPT0_SPT14_msb					14u
#define ADC1_SAMPT0_SPT14_lsb					12u
	/* Channel 15 sample time */
#define ADC1_SAMPT0_SPT15_msb					17u
#define ADC1_SAMPT0_SPT15_lsb					15u
	/* Channel 16 sample time */
#define ADC1_SAMPT0_SPT16_msb					20u
#define ADC1_SAMPT0_SPT16_lsb					18u
	/* Channel 17 sample time */
#define ADC1_SAMPT0_SPT17_msb					23u
#define ADC1_SAMPT0_SPT17_lsb					21u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Sample time register 1 */
	uint32_t volatile SAMPT1;
	/* Channel 0 sample time */
#define ADC1_SAMPT1_SPT0_msb					2u
#define ADC1_SAMPT1_SPT0_lsb					0u
	/* Channel 1 sample time */
#define ADC1_SAMPT1_SPT1_msb					5u
#define ADC1_SAMPT1_SPT1_lsb					3u
	/* Channel 2 sample time */
#define ADC1_SAMPT1_SPT2_msb					8u
#define ADC1_SAMPT1_SPT2_lsb					6u
	/* Channel 3 sample time */
#define ADC1_SAMPT1_SPT3_msb					11u
#define ADC1_SAMPT1_SPT3_lsb					9u
	/* Channel 4 sample time */
#define ADC1_SAMPT1_SPT4_msb					14u
#define ADC1_SAMPT1_SPT4_lsb					12u
	/* Channel 5 sample time */
#define ADC1_SAMPT1_SPT5_msb					17u
#define ADC1_SAMPT1_SPT5_lsb					15u
	/* Channel 6 sample time */
#define ADC1_SAMPT1_SPT6_msb					20u
#define ADC1_SAMPT1_SPT6_lsb					18u
	/* Channel 7 sample time */
#define ADC1_SAMPT1_SPT7_msb					23u
#define ADC1_SAMPT1_SPT7_lsb					21u
	/* Channel 8 sample time */
#define ADC1_SAMPT1_SPT8_msb					26u
#define ADC1_SAMPT1_SPT8_lsb					24u
	/* Channel 9 sample time */
#define ADC1_SAMPT1_SPT9_msb					29u
#define ADC1_SAMPT1_SPT9_lsb					27u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Inserted channel data offset register */
	uint32_t volatile IOFF0;
	/* Data offset for inserted channel */
#define ADC1_IOFF0_IOFF_msb					11u
#define ADC1_IOFF0_IOFF_lsb					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Inserted channel data offset register */
	uint32_t volatile IOFF1;
	/* Data offset for inserted channel */
#define ADC1_IOFF1_IOFF_msb					11u
#define ADC1_IOFF1_IOFF_lsb					0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: Inserted channel data offset register */
	uint32_t volatile IOFF2;
	/* Data offset for inserted channel */
#define ADC1_IOFF2_IOFF_msb					11u
#define ADC1_IOFF2_IOFF_lsb					0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Inserted channel data offset register */
	uint32_t volatile IOFF3;
	/* Data offset for inserted channel */
#define ADC1_IOFF3_IOFF_msb					11u
#define ADC1_IOFF3_IOFF_lsb					0u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: watchdog higher threshold */
	uint32_t volatile WDHT;
	/* Analog watchdog higher */
#define ADC1_WDHT_WDHT_msb					11u
#define ADC1_WDHT_WDHT_lsb					0u

	/* 0x24 */
	uint8_t RESERVED9[0x28u-0x24u];

	/* 0x28: watchdog lower threshold */
	uint32_t volatile WDLT;
	/* Analog watchdog lower */
#define ADC1_WDLT_WDLT_msb					11u
#define ADC1_WDLT_WDLT_lsb					0u

	/* 0x28 */
	uint8_t RESERVED10[0x2Cu-0x28u];

	/* 0x2C: regular sequence register 0 */
	uint32_t volatile RSQ0;
	/* Regular channel group */
#define ADC1_RSQ0_RL_msb					23u
#define ADC1_RSQ0_RL_lsb					20u
	/* 16th conversion in regular */
#define ADC1_RSQ0_RSQ15_msb					19u
#define ADC1_RSQ0_RSQ15_lsb					15u
	/* 15th conversion in regular */
#define ADC1_RSQ0_RSQ14_msb					14u
#define ADC1_RSQ0_RSQ14_lsb					10u
	/* 14th conversion in regular */
#define ADC1_RSQ0_RSQ13_msb					9u
#define ADC1_RSQ0_RSQ13_lsb					5u
	/* 13th conversion in regular */
#define ADC1_RSQ0_RSQ12_msb					4u
#define ADC1_RSQ0_RSQ12_lsb					0u

	/* 0x2C */
	uint8_t RESERVED11[0x30u-0x2Cu];

	/* 0x30: regular sequence register 1 */
	uint32_t volatile RSQ1;
	/* 12th conversion in regular */
#define ADC1_RSQ1_RSQ11_msb					29u
#define ADC1_RSQ1_RSQ11_lsb					25u
	/* 11th conversion in regular */
#define ADC1_RSQ1_RSQ10_msb					24u
#define ADC1_RSQ1_RSQ10_lsb					20u
	/* 10th conversion in regular */
#define ADC1_RSQ1_RSQ9_msb					19u
#define ADC1_RSQ1_RSQ9_lsb					15u
	/* 9th conversion in regular */
#define ADC1_RSQ1_RSQ8_msb					14u
#define ADC1_RSQ1_RSQ8_lsb					10u
	/* 8th conversion in regular */
#define ADC1_RSQ1_RSQ7_msb					9u
#define ADC1_RSQ1_RSQ7_lsb					5u
	/* 7th conversion in regular */
#define ADC1_RSQ1_RSQ6_msb					4u
#define ADC1_RSQ1_RSQ6_lsb					0u

	/* 0x30 */
	uint8_t RESERVED12[0x34u-0x30u];

	/* 0x34: regular sequence register 2 */
	uint32_t volatile RSQ2;
	/* 6th conversion in regular */
#define ADC1_RSQ2_RSQ5_msb					29u
#define ADC1_RSQ2_RSQ5_lsb					25u
	/* 5th conversion in regular */
#define ADC1_RSQ2_RSQ4_msb					24u
#define ADC1_RSQ2_RSQ4_lsb					20u
	/* 4th conversion in regular */
#define ADC1_RSQ2_RSQ3_msb					19u
#define ADC1_RSQ2_RSQ3_lsb					15u
	/* 3rd conversion in regular */
#define ADC1_RSQ2_RSQ2_msb					14u
#define ADC1_RSQ2_RSQ2_lsb					10u
	/* 2nd conversion in regular */
#define ADC1_RSQ2_RSQ1_msb					9u
#define ADC1_RSQ2_RSQ1_lsb					5u
	/* 1st conversion in regular */
#define ADC1_RSQ2_RSQ0_msb					4u
#define ADC1_RSQ2_RSQ0_lsb					0u

	/* 0x34 */
	uint8_t RESERVED13[0x38u-0x34u];

	/* 0x38: Inserted sequence register */
	uint32_t volatile ISQ;
	/* Inserted channel group length */
#define ADC1_ISQ_IL_msb						21u
#define ADC1_ISQ_IL_lsb						20u
	/* 4th conversion in inserted */
#define ADC1_ISQ_ISQ3_msb					19u
#define ADC1_ISQ_ISQ3_lsb					15u
	/* 3rd conversion in inserted */
#define ADC1_ISQ_ISQ2_msb					14u
#define ADC1_ISQ_ISQ2_lsb					10u
	/* 2nd conversion in inserted */
#define ADC1_ISQ_ISQ1_msb					9u
#define ADC1_ISQ_ISQ1_lsb					5u
	/* 1st conversion in inserted */
#define ADC1_ISQ_ISQ0_msb					4u
#define ADC1_ISQ_ISQ0_lsb					0u

	/* 0x38 */
	uint8_t RESERVED14[0x3Cu-0x38u];

	/* 0x3C: Inserted data register 0 */
	uint32_t volatile IDATA0;
	/* Inserted number n conversion data */
#define ADC1_IDATA0_IDATAN_msb					15u
#define ADC1_IDATA0_IDATAN_lsb					0u

	/* 0x3C */
	uint8_t RESERVED15[0x40u-0x3Cu];

	/* 0x40: Inserted data register 1 */
	uint32_t volatile IDATA1;
	/* Inserted number n conversion data */
#define ADC1_IDATA1_IDATAN_msb					15u
#define ADC1_IDATA1_IDATAN_lsb					0u

	/* 0x40 */
	uint8_t RESERVED16[0x44u-0x40u];

	/* 0x44: Inserted data register 2 */
	uint32_t volatile IDATA2;
	/* Inserted number n conversion data */
#define ADC1_IDATA2_IDATAN_msb					15u
#define ADC1_IDATA2_IDATAN_lsb					0u

	/* 0x44 */
	uint8_t RESERVED17[0x48u-0x44u];

	/* 0x48: Inserted data register 3 */
	uint32_t volatile IDATA3;
	/* Inserted number n conversion data */
#define ADC1_IDATA3_IDATAN_msb					15u
#define ADC1_IDATA3_IDATAN_lsb					0u

	/* 0x48 */
	uint8_t RESERVED18[0x4Cu-0x48u];

	/* 0x4C: regular data register */
	uint32_t volatile RDATA;
	/* Regular channel data */
#define ADC1_RDATA_RDATA_msb					15u
#define ADC1_RDATA_RDATA_lsb					0u

};


#define AFIO ((struct sdk_afio *)0x40010000)

struct sdk_afio {

	/* 0x00: Event control register */
	uint32_t volatile EC;
	/* Event output enable */
#define AFIO_EC_EOE						7u
	/* Event output port selection */
#define AFIO_EC_PORT_msb					6u
#define AFIO_EC_PORT_lsb					4u
	/* Event output pin selection */
#define AFIO_EC_PIN_msb						3u
#define AFIO_EC_PIN_lsb						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: AFIO port configuration register 0 */
	uint32_t volatile PCF0;
	/* TIMER1 internal trigger 1 remapping */
#define AFIO_PCF0_TIMER1ITI1_REMAP				29u
	/*  */
#define AFIO_PCF0_SPI2_REMAP					28u
	/* Serial wire JTAG configuration */
#define AFIO_PCF0_SWJ_CFG_msb					26u
#define AFIO_PCF0_SWJ_CFG_lsb					24u
	/* CAN1 I/O remapping */
#define AFIO_PCF0_CAN1_REMAP					22u
	/* TIMER4 channel3 internal remapping */
#define AFIO_PCF0_TIMER4CH3_IREMAP				16u
	/* Port D0/Port D1 mapping on OSC_IN/OSC_OUT */
#define AFIO_PCF0_PD01_REMAP					15u
	/* CAN0 alternate interface remapping */
#define AFIO_PCF0_CAN0_REMAP_msb				14u
#define AFIO_PCF0_CAN0_REMAP_lsb				13u
	/* TIMER3 remapping */
#define AFIO_PCF0_TIMER3_REMAP					12u
	/* TIMER2 remapping */
#define AFIO_PCF0_TIMER2_REMAP_msb				11u
#define AFIO_PCF0_TIMER2_REMAP_lsb				10u
	/* TIMER1 remapping */
#define AFIO_PCF0_TIMER1_REMAP_msb				9u
#define AFIO_PCF0_TIMER1_REMAP_lsb				8u
	/* TIMER0 remapping */
#define AFIO_PCF0_TIMER0_REMAP_msb				7u
#define AFIO_PCF0_TIMER0_REMAP_lsb				6u
	/* USART2 remapping */
#define AFIO_PCF0_USART2_REMAP_msb				5u
#define AFIO_PCF0_USART2_REMAP_lsb				4u
	/* USART1 remapping */
#define AFIO_PCF0_USART1_REMAP					3u
	/* USART0 remapping */
#define AFIO_PCF0_USART0_REMAP					2u
	/* I2C0 remapping */
#define AFIO_PCF0_I2C0_REMAP					1u
	/* SPI0 remapping */
#define AFIO_PCF0_SPI0_REMAP					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: EXTI sources selection register 0 */
	uint32_t volatile EXTISS0;
	/* EXTI 3 sources selection */
#define AFIO_EXTISS0_EXTI3_SS_msb				15u
#define AFIO_EXTISS0_EXTI3_SS_lsb				12u
	/* EXTI 2 sources selection */
#define AFIO_EXTISS0_EXTI2_SS_msb				11u
#define AFIO_EXTISS0_EXTI2_SS_lsb				8u
	/* EXTI 1 sources selection */
#define AFIO_EXTISS0_EXTI1_SS_msb				7u
#define AFIO_EXTISS0_EXTI1_SS_lsb				4u
	/* EXTI 0 sources selection */
#define AFIO_EXTISS0_EXTI0_SS_msb				3u
#define AFIO_EXTISS0_EXTI0_SS_lsb				0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: EXTI sources selection register 1 */
	uint32_t volatile EXTISS1;
	/* EXTI 7 sources selection */
#define AFIO_EXTISS1_EXTI7_SS_msb				15u
#define AFIO_EXTISS1_EXTI7_SS_lsb				12u
	/* EXTI 6 sources selection */
#define AFIO_EXTISS1_EXTI6_SS_msb				11u
#define AFIO_EXTISS1_EXTI6_SS_lsb				8u
	/* EXTI 5 sources selection */
#define AFIO_EXTISS1_EXTI5_SS_msb				7u
#define AFIO_EXTISS1_EXTI5_SS_lsb				4u
	/* EXTI 4 sources selection */
#define AFIO_EXTISS1_EXTI4_SS_msb				3u
#define AFIO_EXTISS1_EXTI4_SS_lsb				0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: EXTI sources selection register 2 */
	uint32_t volatile EXTISS2;
	/* EXTI 11 sources selection */
#define AFIO_EXTISS2_EXTI11_SS_msb				15u
#define AFIO_EXTISS2_EXTI11_SS_lsb				12u
	/* EXTI 10 sources selection */
#define AFIO_EXTISS2_EXTI10_SS_msb				11u
#define AFIO_EXTISS2_EXTI10_SS_lsb				8u
	/* EXTI 9 sources selection */
#define AFIO_EXTISS2_EXTI9_SS_msb				7u
#define AFIO_EXTISS2_EXTI9_SS_lsb				4u
	/* EXTI 8 sources selection */
#define AFIO_EXTISS2_EXTI8_SS_msb				3u
#define AFIO_EXTISS2_EXTI8_SS_lsb				0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: EXTI sources selection register 3 */
	uint32_t volatile EXTISS3;
	/* EXTI 15 sources selection */
#define AFIO_EXTISS3_EXTI15_SS_msb				15u
#define AFIO_EXTISS3_EXTI15_SS_lsb				12u
	/* EXTI 14 sources selection */
#define AFIO_EXTISS3_EXTI14_SS_msb				11u
#define AFIO_EXTISS3_EXTI14_SS_lsb				8u
	/* EXTI 13 sources selection */
#define AFIO_EXTISS3_EXTI13_SS_msb				7u
#define AFIO_EXTISS3_EXTI13_SS_lsb				4u
	/* EXTI 12 sources selection */
#define AFIO_EXTISS3_EXTI12_SS_msb				3u
#define AFIO_EXTISS3_EXTI12_SS_lsb				0u

	/* 0x14 */
	uint8_t RESERVED5[0x1Cu-0x14u];

	/* 0x1C: AFIO port configuration register 1 */
	uint32_t volatile PCF1;
	/* EXMC_NADV connect/disconnect */
#define AFIO_PCF1_EXMC_NADV					10u

};


#define BKP ((struct sdk_bkp *)0x40006C00)

struct sdk_bkp {

	/* 0x04: Backup data register 0 */
	uint32_t volatile DATA0;
	/* Backup data */
#define BKP_DATA0_DATA_msb					15u
#define BKP_DATA0_DATA_lsb					0u

	/* 0x04 */
	uint8_t RESERVED0[0x08u-0x04u];

	/* 0x08: Backup data register 1 */
	uint32_t volatile DATA1;
	/* Backup data */
#define BKP_DATA1_DATA_msb					15u
#define BKP_DATA1_DATA_lsb					0u

	/* 0x08 */
	uint8_t RESERVED1[0x0Cu-0x08u];

	/* 0x0C: Backup data register 2 */
	uint32_t volatile DATA2;
	/* Backup data */
#define BKP_DATA2_DATA_msb					15u
#define BKP_DATA2_DATA_lsb					0u

	/* 0x0C */
	uint8_t RESERVED2[0x10u-0x0Cu];

	/* 0x10: Backup data register 3 */
	uint32_t volatile DATA3;
	/* Backup data */
#define BKP_DATA3_DATA_msb					15u
#define BKP_DATA3_DATA_lsb					0u

	/* 0x10 */
	uint8_t RESERVED3[0x14u-0x10u];

	/* 0x14: Backup data register 4 */
	uint32_t volatile DATA4;
	/* Backup data */
#define BKP_DATA4_DATA_msb					15u
#define BKP_DATA4_DATA_lsb					0u

	/* 0x14 */
	uint8_t RESERVED4[0x18u-0x14u];

	/* 0x18: Backup data register 5 */
	uint32_t volatile DATA5;
	/* Backup data */
#define BKP_DATA5_DATA_msb					15u
#define BKP_DATA5_DATA_lsb					0u

	/* 0x18 */
	uint8_t RESERVED5[0x1Cu-0x18u];

	/* 0x1C: Backup data register 6 */
	uint32_t volatile DATA6;
	/* Backup data */
#define BKP_DATA6_DATA_msb					15u
#define BKP_DATA6_DATA_lsb					0u

	/* 0x1C */
	uint8_t RESERVED6[0x20u-0x1Cu];

	/* 0x20: Backup data register 7 */
	uint32_t volatile DATA7;
	/* Backup data */
#define BKP_DATA7_DATA_msb					15u
#define BKP_DATA7_DATA_lsb					0u

	/* 0x20 */
	uint8_t RESERVED7[0x24u-0x20u];

	/* 0x24: Backup data register 8 */
	uint32_t volatile DATA8;
	/* Backup data */
#define BKP_DATA8_DATA_msb					15u
#define BKP_DATA8_DATA_lsb					0u

	/* 0x24 */
	uint8_t RESERVED8[0x28u-0x24u];

	/* 0x28: Backup data register 9 */
	uint32_t volatile DATA9;
	/* Backup data */
#define BKP_DATA9_DATA_msb					15u
#define BKP_DATA9_DATA_lsb					0u

	/* 0x28 */
	uint8_t RESERVED9[0x40u-0x28u];

	/* 0x40: Backup data register 10 */
	uint32_t volatile DATA10;
	/* Backup data */
#define BKP_DATA10_DATA_msb					15u
#define BKP_DATA10_DATA_lsb					0u

	/* 0x40 */
	uint8_t RESERVED10[0x44u-0x40u];

	/* 0x44: Backup data register 11 */
	uint32_t volatile DATA11;
	/* Backup data */
#define BKP_DATA11_DATA_msb					15u
#define BKP_DATA11_DATA_lsb					0u

	/* 0x44 */
	uint8_t RESERVED11[0x48u-0x44u];

	/* 0x48: Backup data register 12 */
	uint32_t volatile DATA12;
	/* Backup data */
#define BKP_DATA12_DATA_msb					15u
#define BKP_DATA12_DATA_lsb					0u

	/* 0x48 */
	uint8_t RESERVED12[0x4Cu-0x48u];

	/* 0x4C: Backup data register 13 */
	uint32_t volatile DATA13;
	/* Backup data */
#define BKP_DATA13_DATA_msb					15u
#define BKP_DATA13_DATA_lsb					0u

	/* 0x4C */
	uint8_t RESERVED13[0x50u-0x4Cu];

	/* 0x50: Backup data register 14 */
	uint32_t volatile DATA14;
	/* Backup data */
#define BKP_DATA14_DATA_msb					15u
#define BKP_DATA14_DATA_lsb					0u

	/* 0x50 */
	uint8_t RESERVED14[0x54u-0x50u];

	/* 0x54: Backup data register 15 */
	uint32_t volatile DATA15;
	/* Backup data */
#define BKP_DATA15_DATA_msb					15u
#define BKP_DATA15_DATA_lsb					0u

	/* 0x54 */
	uint8_t RESERVED15[0x58u-0x54u];

	/* 0x58: Backup data register 16 */
	uint32_t volatile DATA16;
	/* Backup data */
#define BKP_DATA16_DATA_msb					15u
#define BKP_DATA16_DATA_lsb					0u

	/* 0x58 */
	uint8_t RESERVED16[0x5Cu-0x58u];

	/* 0x5C: Backup data register 17 */
	uint32_t volatile DATA17;
	/* Backup data */
#define BKP_DATA17_DATA_msb					15u
#define BKP_DATA17_DATA_lsb					0u

	/* 0x5C */
	uint8_t RESERVED17[0x60u-0x5Cu];

	/* 0x60: Backup data register 18 */
	uint32_t volatile DATA18;
	/* Backup data */
#define BKP_DATA18_DATA_msb					15u
#define BKP_DATA18_DATA_lsb					0u

	/* 0x60 */
	uint8_t RESERVED18[0x64u-0x60u];

	/* 0x64: Backup data register 19 */
	uint32_t volatile DATA19;
	/* Backup data */
#define BKP_DATA19_DATA_msb					15u
#define BKP_DATA19_DATA_lsb					0u

	/* 0x64 */
	uint8_t RESERVED19[0x68u-0x64u];

	/* 0x68: Backup data register 20 */
	uint32_t volatile DATA20;
	/* Backup data */
#define BKP_DATA20_DATA_msb					15u
#define BKP_DATA20_DATA_lsb					0u

	/* 0x68 */
	uint8_t RESERVED20[0x6Cu-0x68u];

	/* 0x6C: Backup data register 21 */
	uint32_t volatile DATA21;
	/* Backup data */
#define BKP_DATA21_DATA_msb					15u
#define BKP_DATA21_DATA_lsb					0u

	/* 0x6C */
	uint8_t RESERVED21[0x70u-0x6Cu];

	/* 0x70: Backup data register 22 */
	uint32_t volatile DATA22;
	/* Backup data */
#define BKP_DATA22_DATA_msb					15u
#define BKP_DATA22_DATA_lsb					0u

	/* 0x70 */
	uint8_t RESERVED22[0x74u-0x70u];

	/* 0x74: Backup data register 23 */
	uint32_t volatile DATA23;
	/* Backup data */
#define BKP_DATA23_DATA_msb					15u
#define BKP_DATA23_DATA_lsb					0u

	/* 0x74 */
	uint8_t RESERVED23[0x78u-0x74u];

	/* 0x78: Backup data register 24 */
	uint32_t volatile DATA24;
	/* Backup data */
#define BKP_DATA24_DATA_msb					15u
#define BKP_DATA24_DATA_lsb					0u

	/* 0x78 */
	uint8_t RESERVED24[0x7Cu-0x78u];

	/* 0x7C: Backup data register 25 */
	uint32_t volatile DATA25;
	/* Backup data */
#define BKP_DATA25_DATA_msb					15u
#define BKP_DATA25_DATA_lsb					0u

	/* 0x7C */
	uint8_t RESERVED25[0x80u-0x7Cu];

	/* 0x80: Backup data register 26 */
	uint32_t volatile DATA26;
	/* Backup data */
#define BKP_DATA26_DATA_msb					15u
#define BKP_DATA26_DATA_lsb					0u

	/* 0x80 */
	uint8_t RESERVED26[0x84u-0x80u];

	/* 0x84: Backup data register 27 */
	uint32_t volatile DATA27;
	/* Backup data */
#define BKP_DATA27_DATA_msb					15u
#define BKP_DATA27_DATA_lsb					0u

	/* 0x84 */
	uint8_t RESERVED27[0x88u-0x84u];

	/* 0x88: Backup data register 28 */
	uint32_t volatile DATA28;
	/* Backup data */
#define BKP_DATA28_DATA_msb					15u
#define BKP_DATA28_DATA_lsb					0u

	/* 0x88 */
	uint8_t RESERVED28[0x8Cu-0x88u];

	/* 0x8C: Backup data register 29 */
	uint32_t volatile DATA29;
	/* Backup data */
#define BKP_DATA29_DATA_msb					15u
#define BKP_DATA29_DATA_lsb					0u

	/* 0x8C */
	uint8_t RESERVED29[0x90u-0x8Cu];

	/* 0x90: Backup data register 30 */
	uint32_t volatile DATA30;
	/* Backup data */
#define BKP_DATA30_DATA_msb					15u
#define BKP_DATA30_DATA_lsb					0u

	/* 0x90 */
	uint8_t RESERVED30[0x94u-0x90u];

	/* 0x94: Backup data register 31 */
	uint32_t volatile DATA31;
	/* Backup data */
#define BKP_DATA31_DATA_msb					15u
#define BKP_DATA31_DATA_lsb					0u

	/* 0x94 */
	uint8_t RESERVED31[0x98u-0x94u];

	/* 0x98: Backup data register 32 */
	uint32_t volatile DATA32;
	/* Backup data */
#define BKP_DATA32_DATA_msb					15u
#define BKP_DATA32_DATA_lsb					0u

	/* 0x98 */
	uint8_t RESERVED32[0x9Cu-0x98u];

	/* 0x9C: Backup data register 33 */
	uint32_t volatile DATA33;
	/* Backup data */
#define BKP_DATA33_DATA_msb					15u
#define BKP_DATA33_DATA_lsb					0u

	/* 0x9C */
	uint8_t RESERVED33[0xA0u-0x9Cu];

	/* 0xA0: Backup data register 34 */
	uint32_t volatile DATA34;
	/* Backup data */
#define BKP_DATA34_DATA_msb					15u
#define BKP_DATA34_DATA_lsb					0u

	/* 0xA0 */
	uint8_t RESERVED34[0xA4u-0xA0u];

	/* 0xA4: Backup data register 35 */
	uint32_t volatile DATA35;
	/* Backup data */
#define BKP_DATA35_DATA_msb					15u
#define BKP_DATA35_DATA_lsb					0u

	/* 0xA4 */
	uint8_t RESERVED35[0xA8u-0xA4u];

	/* 0xA8: Backup data register 36 */
	uint32_t volatile DATA36;
	/* Backup data */
#define BKP_DATA36_DATA_msb					15u
#define BKP_DATA36_DATA_lsb					0u

	/* 0xA8 */
	uint8_t RESERVED36[0xACu-0xA8u];

	/* 0xAC: Backup data register 37 */
	uint32_t volatile DATA37;
	/* Backup data */
#define BKP_DATA37_DATA_msb					15u
#define BKP_DATA37_DATA_lsb					0u

	/* 0xAC */
	uint8_t RESERVED37[0xB0u-0xACu];

	/* 0xB0: Backup data register 38 */
	uint32_t volatile DATA38;
	/* Backup data */
#define BKP_DATA38_DATA_msb					15u
#define BKP_DATA38_DATA_lsb					0u

	/* 0xB0 */
	uint8_t RESERVED38[0xB4u-0xB0u];

	/* 0xB4: Backup data register 39 */
	uint32_t volatile DATA39;
	/* Backup data */
#define BKP_DATA39_DATA_msb					15u
#define BKP_DATA39_DATA_lsb					0u

	/* 0xB4 */
	uint8_t RESERVED39[0xB8u-0xB4u];

	/* 0xB8: Backup data register 40 */
	uint32_t volatile DATA40;
	/* Backup data */
#define BKP_DATA40_DATA_msb					15u
#define BKP_DATA40_DATA_lsb					0u

	/* 0xB8 */
	uint8_t RESERVED40[0xBCu-0xB8u];

	/* 0xBC: Backup data register 41 */
	uint32_t volatile DATA41;
	/* Backup data */
#define BKP_DATA41_DATA_msb					15u
#define BKP_DATA41_DATA_lsb					0u

	/* 0x2C: RTC signal output control register */
	uint32_t volatile OCTL;
	/* RTC output selection */
#define BKP_OCTL_ROSEL						9u
	/* RTC alarm or second signal output enable */
#define BKP_OCTL_ASOEN						8u
	/* RTC clock calibration output enable */
#define BKP_OCTL_COEN						7u
	/* RTC clock calibration value */
#define BKP_OCTL_RCCV_msb					6u
#define BKP_OCTL_RCCV_lsb					0u

	/* 0x2C */
	uint8_t RESERVED41[0x30u-0x2Cu];

	/* 0x30: Tamper pin control register */
	uint32_t volatile TPCTL;
	/* TAMPER pin active level */
#define BKP_TPCTL_TPAL						1u
	/* TAMPER detection enable */
#define BKP_TPCTL_TPEN						0u

	/* 0x30 */
	uint8_t RESERVED42[0x34u-0x30u];

	/* 0x34: Tamper control and status register */
	uint32_t volatile TPCS;
	/* Tamper interrupt flag */
#define BKP_TPCS_TIF						9u
	/* Tamper event flag */
#define BKP_TPCS_TEF						8u
	/* Tamper interrupt enable */
#define BKP_TPCS_TPIE						2u
	/* Tamper interrupt reset */
#define BKP_TPCS_TIR						1u
	/* Tamper event reset */
#define BKP_TPCS_TER						0u

};


#define CAN0 ((struct sdk_can *)0x40006400)
#define CAN1 ((struct sdk_can *)0x40006800)

struct sdk_can {

	/* 0x00: Control register */
	uint32_t volatile CTL;
	/* Debug freeze */
#define CAN_CTL_DFZ						16u
	/* Software reset */
#define CAN_CTL_SWRST						15u
	/* Time-triggered communication */
#define CAN_CTL_TTC						7u
	/* Automatic bus-off recovery */
#define CAN_CTL_ABOR						6u
	/* Automatic wakeup */
#define CAN_CTL_AWU						5u
	/* Automatic retransmission disable */
#define CAN_CTL_ARD						4u
	/* Receive FIFO overwrite disable */
#define CAN_CTL_RFOD						3u
	/* Transmit FIFO order */
#define CAN_CTL_TFO						2u
	/* Sleep working mode */
#define CAN_CTL_SLPWMOD					1u
	/* Initial working mode */
#define CAN_CTL_IWMOD						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Status register */
	uint32_t volatile STAT;
	/* RX level */
#define CAN_STAT_RXL						11u
	/* Last sample value of RX pin */
#define CAN_STAT_LASTRX					10u
	/* Receiving state */
#define CAN_STAT_RS						9u
	/* Transmitting state */
#define CAN_STAT_TS						8u
	/* Status change interrupt flag of sleep */
#define CAN_STAT_SLPIF						4u
	/* Status change interrupt flag of wakeup */
#define CAN_STAT_WUIF						3u
	/* Error interrupt flag */
#define CAN_STAT_ERRIF						2u
	/* Sleep working state */
#define CAN_STAT_SLPWS						1u
	/* Initial working state */
#define CAN_STAT_IWS						0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Transmit status register */
	uint32_t volatile TSTAT;
	/* Transmit mailbox 2 last sending */
#define CAN_TSTAT_TMLS2					31u
	/* Transmit mailbox 1 last sending */
#define CAN_TSTAT_TMLS1					30u
	/* Transmit mailbox 0 last sending */
#define CAN_TSTAT_TMLS0					29u
	/* Transmit mailbox 2 empty */
#define CAN_TSTAT_TME2						28u
	/* Transmit mailbox 1 empty */
#define CAN_TSTAT_TME1						27u
	/* Transmit mailbox 0 empty */
#define CAN_TSTAT_TME0						26u
	/* number of the transmit FIFO mailbox in */
#define CAN_TSTAT_NUM_msb					25u
#define CAN_TSTAT_NUM_lsb					24u
	/* Mailbox 2 stop transmitting */
#define CAN_TSTAT_MST2						23u
	/* Mailbox 2 transmit error */
#define CAN_TSTAT_MTE2						19u
	/* Mailbox 2 arbitration lost */
#define CAN_TSTAT_MAL2						18u
	/* Mailbox 2 transmit finished and no error */
#define CAN_TSTAT_MTFNERR2					17u
	/* Mailbox 2 transmit finished */
#define CAN_TSTAT_MTF2						16u
	/* Mailbox 1 stop transmitting */
#define CAN_TSTAT_MST1						15u
	/* Mailbox 1 transmit error */
#define CAN_TSTAT_MTE1						11u
	/* Mailbox 1 arbitration lost */
#define CAN_TSTAT_MAL1						10u
	/* Mailbox 1 transmit finished and no error */
#define CAN_TSTAT_MTFNERR1					9u
	/* Mailbox 1 transmit finished */
#define CAN_TSTAT_MTF1						8u
	/* Mailbox 0 stop transmitting */
#define CAN_TSTAT_MST0						7u
	/* Mailbox 0 transmit error */
#define CAN_TSTAT_MTE0						3u
	/* Mailbox 0 arbitration lost */
#define CAN_TSTAT_MAL0						2u
	/* Mailbox 0 transmit finished and no error */
#define CAN_TSTAT_MTFNERR0					1u
	/* Mailbox 0 transmit finished */
#define CAN_TSTAT_MTF0						0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Receive message FIFO0 register */
	uint32_t volatile RFIFO0;
	/* Receive FIFO0 dequeue */
#define CAN_RFIFO0_RFD0					5u
	/* Receive FIFO0 overfull */
#define CAN_RFIFO0_RFO0					4u
	/* Receive FIFO0 full */
#define CAN_RFIFO0_RFF0					3u
	/* Receive FIFO0 length */
#define CAN_RFIFO0_RFL0_msb					1u
#define CAN_RFIFO0_RFL0_lsb					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Receive message FIFO1 register */
	uint32_t volatile RFIFO1;
	/* Receive FIFO1 dequeue */
#define CAN_RFIFO1_RFD1					5u
	/* Receive FIFO1 overfull */
#define CAN_RFIFO1_RFO1					4u
	/* Receive FIFO1 full */
#define CAN_RFIFO1_RFF1					3u
	/* Receive FIFO1 length */
#define CAN_RFIFO1_RFL1_msb					1u
#define CAN_RFIFO1_RFL1_lsb					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Interrupt enable register */
	uint32_t volatile INTEN;
	/* Sleep working interrupt enable */
#define CAN_INTEN_SLPWIE					17u
	/* Wakeup interrupt enable */
#define CAN_INTEN_WIE						16u
	/* Error interrupt enable */
#define CAN_INTEN_ERRIE					15u
	/* Error number interrupt enable */
#define CAN_INTEN_ERRNIE					11u
	/* Bus-off interrupt enable */
#define CAN_INTEN_BOIE						10u
	/* Passive error interrupt enable */
#define CAN_INTEN_PERRIE					9u
	/* Warning error interrupt enable */
#define CAN_INTEN_WERRIE					8u
	/* Receive FIFO1 overfull interrupt enable */
#define CAN_INTEN_RFOIE1					6u
	/* Receive FIFO1 full interrupt enable */
#define CAN_INTEN_RFFIE1					5u
	/* Receive FIFO1 not empty interrupt enable */
#define CAN_INTEN_RFNEIE1					4u
	/* Receive FIFO0 overfull interrupt enable */
#define CAN_INTEN_RFOIE0					3u
	/* Receive FIFO0 full interrupt enable */
#define CAN_INTEN_RFFIE0					2u
	/* Receive FIFO0 not empty interrupt enable */
#define CAN_INTEN_RFNEIE0					1u
	/* Transmit mailbox empty interrupt enable */
#define CAN_INTEN_TMEIE					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Error register */
	uint32_t volatile ERR;
	/* Receive Error Count defined */
#define CAN_ERR_RECNT_msb					31u
#define CAN_ERR_RECNT_lsb					24u
	/* Transmit Error Count defined */
#define CAN_ERR_TECNT_msb					23u
#define CAN_ERR_TECNT_lsb					16u
	/* Error number */
#define CAN_ERR_ERRN_msb					6u
#define CAN_ERR_ERRN_lsb					4u
	/* Bus-off error */
#define CAN_ERR_BOERR						2u
	/* Passive error */
#define CAN_ERR_PERR						1u
	/* Warning error */
#define CAN_ERR_WERR						0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: Bit timing register */
	uint32_t volatile BT;
	/* Silent communication mode */
#define CAN_BT_SCMOD						31u
	/* Loopback communication mode */
#define CAN_BT_LCMOD						30u
	/* Resynchronization jump width */
#define CAN_BT_SJW_msb						25u
#define CAN_BT_SJW_lsb						24u
	/* Bit segment 2 */
#define CAN_BT_BS2_msb						22u
#define CAN_BT_BS2_lsb						20u
	/* Bit segment 1 */
#define CAN_BT_BS1_msb						19u
#define CAN_BT_BS1_lsb						16u
	/* Baud rate prescaler */
#define CAN_BT_BAUDPSC_msb					9u
#define CAN_BT_BAUDPSC_lsb					0u

	/* 0x1C */
	uint8_t RESERVED7[0x180u-0x1Cu];

	/* 0x180: Transmit mailbox identifier register 0 */
	uint32_t volatile TMI0;
	/* The frame identifier */
#define CAN_TMI0_SFID_EFID_msb					31u
#define CAN_TMI0_SFID_EFID_lsb					21u
	/* The frame identifier */
#define CAN_TMI0_EFID_msb					20u
#define CAN_TMI0_EFID_lsb					3u
	/* Frame format */
#define CAN_TMI0_FF						2u
	/* Frame type */
#define CAN_TMI0_FT						1u
	/* Transmit enable */
#define CAN_TMI0_TEN						0u

	/* 0x180 */
	uint8_t RESERVED8[0x184u-0x180u];

	/* 0x184: Transmit mailbox property register 0 */
	uint32_t volatile TMP0;
	/* Time stamp */
#define CAN_TMP0_TS_msb					31u
#define CAN_TMP0_TS_lsb					16u
	/* Time stamp enable */
#define CAN_TMP0_TSEN						8u
	/* Data length code */
#define CAN_TMP0_DLENC_msb					3u
#define CAN_TMP0_DLENC_lsb					0u

	/* 0x184 */
	uint8_t RESERVED9[0x188u-0x184u];

	/* 0x188: Transmit mailbox data0 register */
	uint32_t volatile TMDATA00;
	/* Data byte 3 */
#define CAN_TMDATA00_DB3_msb					31u
#define CAN_TMDATA00_DB3_lsb					24u
	/* Data byte 2 */
#define CAN_TMDATA00_DB2_msb					23u
#define CAN_TMDATA00_DB2_lsb					16u
	/* Data byte 1 */
#define CAN_TMDATA00_DB1_msb					15u
#define CAN_TMDATA00_DB1_lsb					8u
	/* Data byte 0 */
#define CAN_TMDATA00_DB0_msb					7u
#define CAN_TMDATA00_DB0_lsb					0u

	/* 0x188 */
	uint8_t RESERVED10[0x18Cu-0x188u];

	/* 0x18C: Transmit mailbox data1 register */
	uint32_t volatile TMDATA10;
	/* Data byte 7 */
#define CAN_TMDATA10_DB7_msb					31u
#define CAN_TMDATA10_DB7_lsb					24u
	/* Data byte 6 */
#define CAN_TMDATA10_DB6_msb					23u
#define CAN_TMDATA10_DB6_lsb					16u
	/* Data byte 5 */
#define CAN_TMDATA10_DB5_msb					15u
#define CAN_TMDATA10_DB5_lsb					8u
	/* Data byte 4 */
#define CAN_TMDATA10_DB4_msb					7u
#define CAN_TMDATA10_DB4_lsb					0u

	/* 0x18C */
	uint8_t RESERVED11[0x190u-0x18Cu];

	/* 0x190: Transmit mailbox identifier register 1 */
	uint32_t volatile TMI1;
	/* The frame identifier */
#define CAN_TMI1_SFID_EFID_msb					31u
#define CAN_TMI1_SFID_EFID_lsb					21u
	/* The frame identifier */
#define CAN_TMI1_EFID_msb					20u
#define CAN_TMI1_EFID_lsb					3u
	/* Frame format */
#define CAN_TMI1_FF						2u
	/* Frame type */
#define CAN_TMI1_FT						1u
	/* Transmit enable */
#define CAN_TMI1_TEN						0u

	/* 0x190 */
	uint8_t RESERVED12[0x194u-0x190u];

	/* 0x194: Transmit mailbox property register 1 */
	uint32_t volatile TMP1;
	/* Time stamp */
#define CAN_TMP1_TS_msb					31u
#define CAN_TMP1_TS_lsb					16u
	/* Time stamp enable */
#define CAN_TMP1_TSEN						8u
	/* Data length code */
#define CAN_TMP1_DLENC_msb					3u
#define CAN_TMP1_DLENC_lsb					0u

	/* 0x194 */
	uint8_t RESERVED13[0x198u-0x194u];

	/* 0x198: Transmit mailbox data0 register */
	uint32_t volatile TMDATA01;
	/* Data byte 3 */
#define CAN_TMDATA01_DB3_msb					31u
#define CAN_TMDATA01_DB3_lsb					24u
	/* Data byte 2 */
#define CAN_TMDATA01_DB2_msb					23u
#define CAN_TMDATA01_DB2_lsb					16u
	/* Data byte 1 */
#define CAN_TMDATA01_DB1_msb					15u
#define CAN_TMDATA01_DB1_lsb					8u
	/* Data byte 0 */
#define CAN_TMDATA01_DB0_msb					7u
#define CAN_TMDATA01_DB0_lsb					0u

	/* 0x198 */
	uint8_t RESERVED14[0x19Cu-0x198u];

	/* 0x19C: Transmit mailbox data1 register */
	uint32_t volatile TMDATA11;
	/* Data byte 7 */
#define CAN_TMDATA11_DB7_msb					31u
#define CAN_TMDATA11_DB7_lsb					24u
	/* Data byte 6 */
#define CAN_TMDATA11_DB6_msb					23u
#define CAN_TMDATA11_DB6_lsb					16u
	/* Data byte 5 */
#define CAN_TMDATA11_DB5_msb					15u
#define CAN_TMDATA11_DB5_lsb					8u
	/* Data byte 4 */
#define CAN_TMDATA11_DB4_msb					7u
#define CAN_TMDATA11_DB4_lsb					0u

	/* 0x19C */
	uint8_t RESERVED15[0x1A0u-0x19Cu];

	/* 0x1A0: Transmit mailbox identifier register 2 */
	uint32_t volatile TMI2;
	/* The frame identifier */
#define CAN_TMI2_SFID_EFID_msb					31u
#define CAN_TMI2_SFID_EFID_lsb					21u
	/* The frame identifier */
#define CAN_TMI2_EFID_msb					20u
#define CAN_TMI2_EFID_lsb					3u
	/* Frame format */
#define CAN_TMI2_FF						2u
	/* Frame type */
#define CAN_TMI2_FT						1u
	/* Transmit enable */
#define CAN_TMI2_TEN						0u

	/* 0x1A0 */
	uint8_t RESERVED16[0x1A4u-0x1A0u];

	/* 0x1A4: Transmit mailbox property register 2 */
	uint32_t volatile TMP2;
	/* Time stamp */
#define CAN_TMP2_TS_msb					31u
#define CAN_TMP2_TS_lsb					16u
	/* Time stamp enable */
#define CAN_TMP2_TSEN						8u
	/* Data length code */
#define CAN_TMP2_DLENC_msb					3u
#define CAN_TMP2_DLENC_lsb					0u

	/* 0x1A4 */
	uint8_t RESERVED17[0x1A8u-0x1A4u];

	/* 0x1A8: Transmit mailbox data0 register */
	uint32_t volatile TMDATA02;
	/* Data byte 3 */
#define CAN_TMDATA02_DB3_msb					31u
#define CAN_TMDATA02_DB3_lsb					24u
	/* Data byte 2 */
#define CAN_TMDATA02_DB2_msb					23u
#define CAN_TMDATA02_DB2_lsb					16u
	/* Data byte 1 */
#define CAN_TMDATA02_DB1_msb					15u
#define CAN_TMDATA02_DB1_lsb					8u
	/* Data byte 0 */
#define CAN_TMDATA02_DB0_msb					7u
#define CAN_TMDATA02_DB0_lsb					0u

	/* 0x1A8 */
	uint8_t RESERVED18[0x1ACu-0x1A8u];

	/* 0x1AC: Transmit mailbox data1 register */
	uint32_t volatile TMDATA12;
	/* Data byte 7 */
#define CAN_TMDATA12_DB7_msb					31u
#define CAN_TMDATA12_DB7_lsb					24u
	/* Data byte 6 */
#define CAN_TMDATA12_DB6_msb					23u
#define CAN_TMDATA12_DB6_lsb					16u
	/* Data byte 5 */
#define CAN_TMDATA12_DB5_msb					15u
#define CAN_TMDATA12_DB5_lsb					8u
	/* Data byte 4 */
#define CAN_TMDATA12_DB4_msb					7u
#define CAN_TMDATA12_DB4_lsb					0u

	/* 0x1AC */
	uint8_t RESERVED19[0x1B0u-0x1ACu];

	/* 0x1B0: Receive FIFO mailbox identifier register */
	uint32_t volatile RFIFOMI0;
	/* The frame identifier */
#define CAN_RFIFOMI0_SFID_EFID_msb				31u
#define CAN_RFIFOMI0_SFID_EFID_lsb				21u
	/* The frame identifier */
#define CAN_RFIFOMI0_EFID_msb					20u
#define CAN_RFIFOMI0_EFID_lsb					3u
	/* Frame format */
#define CAN_RFIFOMI0_FF					2u
	/* Frame type */
#define CAN_RFIFOMI0_FT					1u

	/* 0x1B0 */
	uint8_t RESERVED20[0x1B4u-0x1B0u];

	/* 0x1B4: Receive FIFO0 mailbox property register */
	uint32_t volatile RFIFOMP0;
	/* Time stamp */
#define CAN_RFIFOMP0_TS_msb					31u
#define CAN_RFIFOMP0_TS_lsb					16u
	/* Filtering index */
#define CAN_RFIFOMP0_FI_msb					15u
#define CAN_RFIFOMP0_FI_lsb					8u
	/* Data length code */
#define CAN_RFIFOMP0_DLENC_msb					3u
#define CAN_RFIFOMP0_DLENC_lsb					0u

	/* 0x1B4 */
	uint8_t RESERVED21[0x1B8u-0x1B4u];

	/* 0x1B8: Receive FIFO0 mailbox data0 register */
	uint32_t volatile RFIFOMDATA00;
	/* Data byte 3 */
#define CAN_RFIFOMDATA00_DB3_msb				31u
#define CAN_RFIFOMDATA00_DB3_lsb				24u
	/* Data byte 2 */
#define CAN_RFIFOMDATA00_DB2_msb				23u
#define CAN_RFIFOMDATA00_DB2_lsb				16u
	/* Data byte 1 */
#define CAN_RFIFOMDATA00_DB1_msb				15u
#define CAN_RFIFOMDATA00_DB1_lsb				8u
	/* Data byte 0 */
#define CAN_RFIFOMDATA00_DB0_msb				7u
#define CAN_RFIFOMDATA00_DB0_lsb				0u

	/* 0x1B8 */
	uint8_t RESERVED22[0x1BCu-0x1B8u];

	/* 0x1BC: Receive FIFO0 mailbox data1 register */
	uint32_t volatile RFIFOMDATA10;
	/* Data byte 7 */
#define CAN_RFIFOMDATA10_DB7_msb				31u
#define CAN_RFIFOMDATA10_DB7_lsb				24u
	/* Data byte 6 */
#define CAN_RFIFOMDATA10_DB6_msb				23u
#define CAN_RFIFOMDATA10_DB6_lsb				16u
	/* Data byte 5 */
#define CAN_RFIFOMDATA10_DB5_msb				15u
#define CAN_RFIFOMDATA10_DB5_lsb				8u
	/* Data byte 4 */
#define CAN_RFIFOMDATA10_DB4_msb				7u
#define CAN_RFIFOMDATA10_DB4_lsb				0u

	/* 0x1BC */
	uint8_t RESERVED23[0x1C0u-0x1BCu];

	/* 0x1C0: Receive FIFO1 mailbox identifier register */
	uint32_t volatile RFIFOMI1;
	/* The frame identifier */
#define CAN_RFIFOMI1_SFID_EFID_msb				31u
#define CAN_RFIFOMI1_SFID_EFID_lsb				21u
	/* The frame identifier */
#define CAN_RFIFOMI1_EFID_msb					20u
#define CAN_RFIFOMI1_EFID_lsb					3u
	/* Frame format */
#define CAN_RFIFOMI1_FF					2u
	/* Frame type */
#define CAN_RFIFOMI1_FT					1u

	/* 0x1C0 */
	uint8_t RESERVED24[0x1C4u-0x1C0u];

	/* 0x1C4: Receive FIFO1 mailbox property register */
	uint32_t volatile RFIFOMP1;
	/* Time stamp */
#define CAN_RFIFOMP1_TS_msb					31u
#define CAN_RFIFOMP1_TS_lsb					16u
	/* Filtering index */
#define CAN_RFIFOMP1_FI_msb					15u
#define CAN_RFIFOMP1_FI_lsb					8u
	/* Data length code */
#define CAN_RFIFOMP1_DLENC_msb					3u
#define CAN_RFIFOMP1_DLENC_lsb					0u

	/* 0x1C4 */
	uint8_t RESERVED25[0x1C8u-0x1C4u];

	/* 0x1C8: Receive FIFO1 mailbox data0 register */
	uint32_t volatile RFIFOMDATA01;
	/* Data byte 3 */
#define CAN_RFIFOMDATA01_DB3_msb				31u
#define CAN_RFIFOMDATA01_DB3_lsb				24u
	/* Data byte 2 */
#define CAN_RFIFOMDATA01_DB2_msb				23u
#define CAN_RFIFOMDATA01_DB2_lsb				16u
	/* Data byte 1 */
#define CAN_RFIFOMDATA01_DB1_msb				15u
#define CAN_RFIFOMDATA01_DB1_lsb				8u
	/* Data byte 0 */
#define CAN_RFIFOMDATA01_DB0_msb				7u
#define CAN_RFIFOMDATA01_DB0_lsb				0u

	/* 0x1C8 */
	uint8_t RESERVED26[0x1CCu-0x1C8u];

	/* 0x1CC: Receive FIFO1 mailbox data1 register */
	uint32_t volatile RFIFOMDATA11;
	/* Data byte 7 */
#define CAN_RFIFOMDATA11_DB7_msb				31u
#define CAN_RFIFOMDATA11_DB7_lsb				24u
	/* Data byte 6 */
#define CAN_RFIFOMDATA11_DB6_msb				23u
#define CAN_RFIFOMDATA11_DB6_lsb				16u
	/* Data byte 5 */
#define CAN_RFIFOMDATA11_DB5_msb				15u
#define CAN_RFIFOMDATA11_DB5_lsb				8u
	/* Data byte 4 */
#define CAN_RFIFOMDATA11_DB4_msb				7u
#define CAN_RFIFOMDATA11_DB4_lsb				0u

	/* 0x1CC */
	uint8_t RESERVED27[0x200u-0x1CCu];

	/* 0x200: Filter control register */
	uint32_t volatile FCTL;
	/* Header bank of CAN1 filter */
#define CAN_FCTL_HBC1F_msb					13u
#define CAN_FCTL_HBC1F_lsb					8u
	/* Filter lock disable */
#define CAN_FCTL_FLD						0u

	/* 0x200 */
	uint8_t RESERVED28[0x204u-0x200u];

	/* 0x204: Filter mode configuration register */
	uint32_t volatile FMCFG;
	/* Filter mode */
#define CAN_FMCFG_FMOD27					27u
	/* Filter mode */
#define CAN_FMCFG_FMOD26					26u
	/* Filter mode */
#define CAN_FMCFG_FMOD25					25u
	/* Filter mode */
#define CAN_FMCFG_FMOD24					24u
	/* Filter mode */
#define CAN_FMCFG_FMOD23					23u
	/* Filter mode */
#define CAN_FMCFG_FMOD22					22u
	/* Filter mode */
#define CAN_FMCFG_FMOD21					21u
	/* Filter mode */
#define CAN_FMCFG_FMOD20					20u
	/* Filter mode */
#define CAN_FMCFG_FMOD19					19u
	/* Filter mode */
#define CAN_FMCFG_FMOD18					18u
	/* Filter mode */
#define CAN_FMCFG_FMOD17					17u
	/* Filter mode */
#define CAN_FMCFG_FMOD16					16u
	/* Filter mode */
#define CAN_FMCFG_FMOD15					15u
	/* Filter mode */
#define CAN_FMCFG_FMOD14					14u
	/* Filter mode */
#define CAN_FMCFG_FMOD13					13u
	/* Filter mode */
#define CAN_FMCFG_FMOD12					12u
	/* Filter mode */
#define CAN_FMCFG_FMOD11					11u
	/* Filter mode */
#define CAN_FMCFG_FMOD10					10u
	/* Filter mode */
#define CAN_FMCFG_FMOD9					9u
	/* Filter mode */
#define CAN_FMCFG_FMOD8					8u
	/* Filter mode */
#define CAN_FMCFG_FMOD7					7u
	/* Filter mode */
#define CAN_FMCFG_FMOD6					6u
	/* Filter mode */
#define CAN_FMCFG_FMOD5					5u
	/* Filter mode */
#define CAN_FMCFG_FMOD4					4u
	/* Filter mode */
#define CAN_FMCFG_FMOD3					3u
	/* Filter mode */
#define CAN_FMCFG_FMOD2					2u
	/* Filter mode */
#define CAN_FMCFG_FMOD1					1u
	/* Filter mode */
#define CAN_FMCFG_FMOD0					0u

	/* 0x204 */
	uint8_t RESERVED29[0x20Cu-0x204u];

	/* 0x20C: Filter scale configuration register */
	uint32_t volatile FSCFG;
	/* Filter scale configuration */
#define CAN_FSCFG_FS0						0u
	/* Filter scale configuration */
#define CAN_FSCFG_FS1						1u
	/* Filter scale configuration */
#define CAN_FSCFG_FS2						2u
	/* Filter scale configuration */
#define CAN_FSCFG_FS3						3u
	/* Filter scale configuration */
#define CAN_FSCFG_FS4						4u
	/* Filter scale configuration */
#define CAN_FSCFG_FS5						5u
	/* Filter scale configuration */
#define CAN_FSCFG_FS6						6u
	/* Filter scale configuration */
#define CAN_FSCFG_FS7						7u
	/* Filter scale configuration */
#define CAN_FSCFG_FS8						8u
	/* Filter scale configuration */
#define CAN_FSCFG_FS9						9u
	/* Filter scale configuration */
#define CAN_FSCFG_FS10						10u
	/* Filter scale configuration */
#define CAN_FSCFG_FS11						11u
	/* Filter scale configuration */
#define CAN_FSCFG_FS12						12u
	/* Filter scale configuration */
#define CAN_FSCFG_FS13						13u
	/* Filter scale configuration */
#define CAN_FSCFG_FS14						14u
	/* Filter scale configuration */
#define CAN_FSCFG_FS15						15u
	/* Filter scale configuration */
#define CAN_FSCFG_FS16						16u
	/* Filter scale configuration */
#define CAN_FSCFG_FS17						17u
	/* Filter scale configuration */
#define CAN_FSCFG_FS18						18u
	/* Filter scale configuration */
#define CAN_FSCFG_FS19						19u
	/* Filter scale configuration */
#define CAN_FSCFG_FS20						20u
	/* Filter scale configuration */
#define CAN_FSCFG_FS21						21u
	/* Filter scale configuration */
#define CAN_FSCFG_FS22						22u
	/* Filter scale configuration */
#define CAN_FSCFG_FS23						23u
	/* Filter scale configuration */
#define CAN_FSCFG_FS24						24u
	/* Filter scale configuration */
#define CAN_FSCFG_FS25						25u
	/* Filter scale configuration */
#define CAN_FSCFG_FS26						26u
	/* Filter scale configuration */
#define CAN_FSCFG_FS27						27u

	/* 0x20C */
	uint8_t RESERVED30[0x214u-0x20Cu];

	/* 0x214: Filter associated FIFO register */
	uint32_t volatile FAFIFO;
	/* Filter 0 associated with FIFO */
#define CAN_FAFIFO_FAF0					0u
	/* Filter 1 associated with FIFO */
#define CAN_FAFIFO_FAF1					1u
	/* Filter 2 associated with FIFO */
#define CAN_FAFIFO_FAF2					2u
	/* Filter 3 associated with FIFO */
#define CAN_FAFIFO_FAF3					3u
	/* Filter 4 associated with FIFO */
#define CAN_FAFIFO_FAF4					4u
	/* Filter 5 associated with FIFO */
#define CAN_FAFIFO_FAF5					5u
	/* Filter 6 associated with FIFO */
#define CAN_FAFIFO_FAF6					6u
	/* Filter 7 associated with FIFO */
#define CAN_FAFIFO_FAF7					7u
	/* Filter 8 associated with FIFO */
#define CAN_FAFIFO_FAF8					8u
	/* Filter 9 associated with FIFO */
#define CAN_FAFIFO_FAF9					9u
	/* Filter 10 associated with FIFO */
#define CAN_FAFIFO_FAF10					10u
	/* Filter 11 associated with FIFO */
#define CAN_FAFIFO_FAF11					11u
	/* Filter 12 associated with FIFO */
#define CAN_FAFIFO_FAF12					12u
	/* Filter 13 associated with FIFO */
#define CAN_FAFIFO_FAF13					13u
	/* Filter 14 associated with FIFO */
#define CAN_FAFIFO_FAF14					14u
	/* Filter 15 associated with FIFO */
#define CAN_FAFIFO_FAF15					15u
	/* Filter 16 associated with FIFO */
#define CAN_FAFIFO_FAF16					16u
	/* Filter 17 associated with FIFO */
#define CAN_FAFIFO_FAF17					17u
	/* Filter 18 associated with FIFO */
#define CAN_FAFIFO_FAF18					18u
	/* Filter 19 associated with FIFO */
#define CAN_FAFIFO_FAF19					19u
	/* Filter 20 associated with FIFO */
#define CAN_FAFIFO_FAF20					20u
	/* Filter 21 associated with FIFO */
#define CAN_FAFIFO_FAF21					21u
	/* Filter 22 associated with FIFO */
#define CAN_FAFIFO_FAF22					22u
	/* Filter 23 associated with FIFO */
#define CAN_FAFIFO_FAF23					23u
	/* Filter 24 associated with FIFO */
#define CAN_FAFIFO_FAF24					24u
	/* Filter 25 associated with FIFO */
#define CAN_FAFIFO_FAF25					25u
	/* Filter 26 associated with FIFO */
#define CAN_FAFIFO_FAF26					26u
	/* Filter 27 associated with FIFO */
#define CAN_FAFIFO_FAF27					27u

	/* 0x214 */
	uint8_t RESERVED31[0x21Cu-0x214u];

	/* 0x21C: Filter working register */
	uint32_t volatile FW;
	/* Filter working */
#define CAN_FW_FW0						0u
	/* Filter working */
#define CAN_FW_FW1						1u
	/* Filter working */
#define CAN_FW_FW2						2u
	/* Filter working */
#define CAN_FW_FW3						3u
	/* Filter working */
#define CAN_FW_FW4						4u
	/* Filter working */
#define CAN_FW_FW5						5u
	/* Filter working */
#define CAN_FW_FW6						6u
	/* Filter working */
#define CAN_FW_FW7						7u
	/* Filter working */
#define CAN_FW_FW8						8u
	/* Filter working */
#define CAN_FW_FW9						9u
	/* Filter working */
#define CAN_FW_FW10						10u
	/* Filter working */
#define CAN_FW_FW11						11u
	/* Filter working */
#define CAN_FW_FW12						12u
	/* Filter working */
#define CAN_FW_FW13						13u
	/* Filter working */
#define CAN_FW_FW14						14u
	/* Filter working */
#define CAN_FW_FW15						15u
	/* Filter working */
#define CAN_FW_FW16						16u
	/* Filter working */
#define CAN_FW_FW17						17u
	/* Filter working */
#define CAN_FW_FW18						18u
	/* Filter working */
#define CAN_FW_FW19						19u
	/* Filter working */
#define CAN_FW_FW20						20u
	/* Filter working */
#define CAN_FW_FW21						21u
	/* Filter working */
#define CAN_FW_FW22						22u
	/* Filter working */
#define CAN_FW_FW23						23u
	/* Filter working */
#define CAN_FW_FW24						24u
	/* Filter working */
#define CAN_FW_FW25						25u
	/* Filter working */
#define CAN_FW_FW26						26u
	/* Filter working */
#define CAN_FW_FW27						27u

	/* 0x21C */
	uint8_t RESERVED32[0x240u-0x21Cu];

	/* 0x240: Filter 0 data 0 register */
	uint32_t volatile F0DATA0;
	/* Filter bits */
#define CAN_F0DATA0_FD0					0u
	/* Filter bits */
#define CAN_F0DATA0_FD1					1u
	/* Filter bits */
#define CAN_F0DATA0_FD2					2u
	/* Filter bits */
#define CAN_F0DATA0_FD3					3u
	/* Filter bits */
#define CAN_F0DATA0_FD4					4u
	/* Filter bits */
#define CAN_F0DATA0_FD5					5u
	/* Filter bits */
#define CAN_F0DATA0_FD6					6u
	/* Filter bits */
#define CAN_F0DATA0_FD7					7u
	/* Filter bits */
#define CAN_F0DATA0_FD8					8u
	/* Filter bits */
#define CAN_F0DATA0_FD9					9u
	/* Filter bits */
#define CAN_F0DATA0_FD10					10u
	/* Filter bits */
#define CAN_F0DATA0_FD11					11u
	/* Filter bits */
#define CAN_F0DATA0_FD12					12u
	/* Filter bits */
#define CAN_F0DATA0_FD13					13u
	/* Filter bits */
#define CAN_F0DATA0_FD14					14u
	/* Filter bits */
#define CAN_F0DATA0_FD15					15u
	/* Filter bits */
#define CAN_F0DATA0_FD16					16u
	/* Filter bits */
#define CAN_F0DATA0_FD17					17u
	/* Filter bits */
#define CAN_F0DATA0_FD18					18u
	/* Filter bits */
#define CAN_F0DATA0_FD19					19u
	/* Filter bits */
#define CAN_F0DATA0_FD20					20u
	/* Filter bits */
#define CAN_F0DATA0_FD21					21u
	/* Filter bits */
#define CAN_F0DATA0_FD22					22u
	/* Filter bits */
#define CAN_F0DATA0_FD23					23u
	/* Filter bits */
#define CAN_F0DATA0_FD24					24u
	/* Filter bits */
#define CAN_F0DATA0_FD25					25u
	/* Filter bits */
#define CAN_F0DATA0_FD26					26u
	/* Filter bits */
#define CAN_F0DATA0_FD27					27u
	/* Filter bits */
#define CAN_F0DATA0_FD28					28u
	/* Filter bits */
#define CAN_F0DATA0_FD29					29u
	/* Filter bits */
#define CAN_F0DATA0_FD30					30u
	/* Filter bits */
#define CAN_F0DATA0_FD31					31u

	/* 0x240 */
	uint8_t RESERVED33[0x244u-0x240u];

	/* 0x244: Filter 0 data 1 register */
	uint32_t volatile F0DATA1;
	/* Filter bits */
#define CAN_F0DATA1_FD0					0u
	/* Filter bits */
#define CAN_F0DATA1_FD1					1u
	/* Filter bits */
#define CAN_F0DATA1_FD2					2u
	/* Filter bits */
#define CAN_F0DATA1_FD3					3u
	/* Filter bits */
#define CAN_F0DATA1_FD4					4u
	/* Filter bits */
#define CAN_F0DATA1_FD5					5u
	/* Filter bits */
#define CAN_F0DATA1_FD6					6u
	/* Filter bits */
#define CAN_F0DATA1_FD7					7u
	/* Filter bits */
#define CAN_F0DATA1_FD8					8u
	/* Filter bits */
#define CAN_F0DATA1_FD9					9u
	/* Filter bits */
#define CAN_F0DATA1_FD10					10u
	/* Filter bits */
#define CAN_F0DATA1_FD11					11u
	/* Filter bits */
#define CAN_F0DATA1_FD12					12u
	/* Filter bits */
#define CAN_F0DATA1_FD13					13u
	/* Filter bits */
#define CAN_F0DATA1_FD14					14u
	/* Filter bits */
#define CAN_F0DATA1_FD15					15u
	/* Filter bits */
#define CAN_F0DATA1_FD16					16u
	/* Filter bits */
#define CAN_F0DATA1_FD17					17u
	/* Filter bits */
#define CAN_F0DATA1_FD18					18u
	/* Filter bits */
#define CAN_F0DATA1_FD19					19u
	/* Filter bits */
#define CAN_F0DATA1_FD20					20u
	/* Filter bits */
#define CAN_F0DATA1_FD21					21u
	/* Filter bits */
#define CAN_F0DATA1_FD22					22u
	/* Filter bits */
#define CAN_F0DATA1_FD23					23u
	/* Filter bits */
#define CAN_F0DATA1_FD24					24u
	/* Filter bits */
#define CAN_F0DATA1_FD25					25u
	/* Filter bits */
#define CAN_F0DATA1_FD26					26u
	/* Filter bits */
#define CAN_F0DATA1_FD27					27u
	/* Filter bits */
#define CAN_F0DATA1_FD28					28u
	/* Filter bits */
#define CAN_F0DATA1_FD29					29u
	/* Filter bits */
#define CAN_F0DATA1_FD30					30u
	/* Filter bits */
#define CAN_F0DATA1_FD31					31u

	/* 0x244 */
	uint8_t RESERVED34[0x248u-0x244u];

	/* 0x248: Filter 1 data 0 register */
	uint32_t volatile F1DATA0;
	/* Filter bits */
#define CAN_F1DATA0_FD0					0u
	/* Filter bits */
#define CAN_F1DATA0_FD1					1u
	/* Filter bits */
#define CAN_F1DATA0_FD2					2u
	/* Filter bits */
#define CAN_F1DATA0_FD3					3u
	/* Filter bits */
#define CAN_F1DATA0_FD4					4u
	/* Filter bits */
#define CAN_F1DATA0_FD5					5u
	/* Filter bits */
#define CAN_F1DATA0_FD6					6u
	/* Filter bits */
#define CAN_F1DATA0_FD7					7u
	/* Filter bits */
#define CAN_F1DATA0_FD8					8u
	/* Filter bits */
#define CAN_F1DATA0_FD9					9u
	/* Filter bits */
#define CAN_F1DATA0_FD10					10u
	/* Filter bits */
#define CAN_F1DATA0_FD11					11u
	/* Filter bits */
#define CAN_F1DATA0_FD12					12u
	/* Filter bits */
#define CAN_F1DATA0_FD13					13u
	/* Filter bits */
#define CAN_F1DATA0_FD14					14u
	/* Filter bits */
#define CAN_F1DATA0_FD15					15u
	/* Filter bits */
#define CAN_F1DATA0_FD16					16u
	/* Filter bits */
#define CAN_F1DATA0_FD17					17u
	/* Filter bits */
#define CAN_F1DATA0_FD18					18u
	/* Filter bits */
#define CAN_F1DATA0_FD19					19u
	/* Filter bits */
#define CAN_F1DATA0_FD20					20u
	/* Filter bits */
#define CAN_F1DATA0_FD21					21u
	/* Filter bits */
#define CAN_F1DATA0_FD22					22u
	/* Filter bits */
#define CAN_F1DATA0_FD23					23u
	/* Filter bits */
#define CAN_F1DATA0_FD24					24u
	/* Filter bits */
#define CAN_F1DATA0_FD25					25u
	/* Filter bits */
#define CAN_F1DATA0_FD26					26u
	/* Filter bits */
#define CAN_F1DATA0_FD27					27u
	/* Filter bits */
#define CAN_F1DATA0_FD28					28u
	/* Filter bits */
#define CAN_F1DATA0_FD29					29u
	/* Filter bits */
#define CAN_F1DATA0_FD30					30u
	/* Filter bits */
#define CAN_F1DATA0_FD31					31u

	/* 0x248 */
	uint8_t RESERVED35[0x24Cu-0x248u];

	/* 0x24C: Filter 1 data 1 register */
	uint32_t volatile F1DATA1;
	/* Filter bits */
#define CAN_F1DATA1_FD0					0u
	/* Filter bits */
#define CAN_F1DATA1_FD1					1u
	/* Filter bits */
#define CAN_F1DATA1_FD2					2u
	/* Filter bits */
#define CAN_F1DATA1_FD3					3u
	/* Filter bits */
#define CAN_F1DATA1_FD4					4u
	/* Filter bits */
#define CAN_F1DATA1_FD5					5u
	/* Filter bits */
#define CAN_F1DATA1_FD6					6u
	/* Filter bits */
#define CAN_F1DATA1_FD7					7u
	/* Filter bits */
#define CAN_F1DATA1_FD8					8u
	/* Filter bits */
#define CAN_F1DATA1_FD9					9u
	/* Filter bits */
#define CAN_F1DATA1_FD10					10u
	/* Filter bits */
#define CAN_F1DATA1_FD11					11u
	/* Filter bits */
#define CAN_F1DATA1_FD12					12u
	/* Filter bits */
#define CAN_F1DATA1_FD13					13u
	/* Filter bits */
#define CAN_F1DATA1_FD14					14u
	/* Filter bits */
#define CAN_F1DATA1_FD15					15u
	/* Filter bits */
#define CAN_F1DATA1_FD16					16u
	/* Filter bits */
#define CAN_F1DATA1_FD17					17u
	/* Filter bits */
#define CAN_F1DATA1_FD18					18u
	/* Filter bits */
#define CAN_F1DATA1_FD19					19u
	/* Filter bits */
#define CAN_F1DATA1_FD20					20u
	/* Filter bits */
#define CAN_F1DATA1_FD21					21u
	/* Filter bits */
#define CAN_F1DATA1_FD22					22u
	/* Filter bits */
#define CAN_F1DATA1_FD23					23u
	/* Filter bits */
#define CAN_F1DATA1_FD24					24u
	/* Filter bits */
#define CAN_F1DATA1_FD25					25u
	/* Filter bits */
#define CAN_F1DATA1_FD26					26u
	/* Filter bits */
#define CAN_F1DATA1_FD27					27u
	/* Filter bits */
#define CAN_F1DATA1_FD28					28u
	/* Filter bits */
#define CAN_F1DATA1_FD29					29u
	/* Filter bits */
#define CAN_F1DATA1_FD30					30u
	/* Filter bits */
#define CAN_F1DATA1_FD31					31u

	/* 0x24C */
	uint8_t RESERVED36[0x250u-0x24Cu];

	/* 0x250: Filter 2 data 0 register */
	uint32_t volatile F2DATA0;
	/* Filter bits */
#define CAN_F2DATA0_FD0					0u
	/* Filter bits */
#define CAN_F2DATA0_FD1					1u
	/* Filter bits */
#define CAN_F2DATA0_FD2					2u
	/* Filter bits */
#define CAN_F2DATA0_FD3					3u
	/* Filter bits */
#define CAN_F2DATA0_FD4					4u
	/* Filter bits */
#define CAN_F2DATA0_FD5					5u
	/* Filter bits */
#define CAN_F2DATA0_FD6					6u
	/* Filter bits */
#define CAN_F2DATA0_FD7					7u
	/* Filter bits */
#define CAN_F2DATA0_FD8					8u
	/* Filter bits */
#define CAN_F2DATA0_FD9					9u
	/* Filter bits */
#define CAN_F2DATA0_FD10					10u
	/* Filter bits */
#define CAN_F2DATA0_FD11					11u
	/* Filter bits */
#define CAN_F2DATA0_FD12					12u
	/* Filter bits */
#define CAN_F2DATA0_FD13					13u
	/* Filter bits */
#define CAN_F2DATA0_FD14					14u
	/* Filter bits */
#define CAN_F2DATA0_FD15					15u
	/* Filter bits */
#define CAN_F2DATA0_FD16					16u
	/* Filter bits */
#define CAN_F2DATA0_FD17					17u
	/* Filter bits */
#define CAN_F2DATA0_FD18					18u
	/* Filter bits */
#define CAN_F2DATA0_FD19					19u
	/* Filter bits */
#define CAN_F2DATA0_FD20					20u
	/* Filter bits */
#define CAN_F2DATA0_FD21					21u
	/* Filter bits */
#define CAN_F2DATA0_FD22					22u
	/* Filter bits */
#define CAN_F2DATA0_FD23					23u
	/* Filter bits */
#define CAN_F2DATA0_FD24					24u
	/* Filter bits */
#define CAN_F2DATA0_FD25					25u
	/* Filter bits */
#define CAN_F2DATA0_FD26					26u
	/* Filter bits */
#define CAN_F2DATA0_FD27					27u
	/* Filter bits */
#define CAN_F2DATA0_FD28					28u
	/* Filter bits */
#define CAN_F2DATA0_FD29					29u
	/* Filter bits */
#define CAN_F2DATA0_FD30					30u
	/* Filter bits */
#define CAN_F2DATA0_FD31					31u

	/* 0x250 */
	uint8_t RESERVED37[0x254u-0x250u];

	/* 0x254: Filter 2 data 1 register */
	uint32_t volatile F2DATA1;
	/* Filter bits */
#define CAN_F2DATA1_FD0					0u
	/* Filter bits */
#define CAN_F2DATA1_FD1					1u
	/* Filter bits */
#define CAN_F2DATA1_FD2					2u
	/* Filter bits */
#define CAN_F2DATA1_FD3					3u
	/* Filter bits */
#define CAN_F2DATA1_FD4					4u
	/* Filter bits */
#define CAN_F2DATA1_FD5					5u
	/* Filter bits */
#define CAN_F2DATA1_FD6					6u
	/* Filter bits */
#define CAN_F2DATA1_FD7					7u
	/* Filter bits */
#define CAN_F2DATA1_FD8					8u
	/* Filter bits */
#define CAN_F2DATA1_FD9					9u
	/* Filter bits */
#define CAN_F2DATA1_FD10					10u
	/* Filter bits */
#define CAN_F2DATA1_FD11					11u
	/* Filter bits */
#define CAN_F2DATA1_FD12					12u
	/* Filter bits */
#define CAN_F2DATA1_FD13					13u
	/* Filter bits */
#define CAN_F2DATA1_FD14					14u
	/* Filter bits */
#define CAN_F2DATA1_FD15					15u
	/* Filter bits */
#define CAN_F2DATA1_FD16					16u
	/* Filter bits */
#define CAN_F2DATA1_FD17					17u
	/* Filter bits */
#define CAN_F2DATA1_FD18					18u
	/* Filter bits */
#define CAN_F2DATA1_FD19					19u
	/* Filter bits */
#define CAN_F2DATA1_FD20					20u
	/* Filter bits */
#define CAN_F2DATA1_FD21					21u
	/* Filter bits */
#define CAN_F2DATA1_FD22					22u
	/* Filter bits */
#define CAN_F2DATA1_FD23					23u
	/* Filter bits */
#define CAN_F2DATA1_FD24					24u
	/* Filter bits */
#define CAN_F2DATA1_FD25					25u
	/* Filter bits */
#define CAN_F2DATA1_FD26					26u
	/* Filter bits */
#define CAN_F2DATA1_FD27					27u
	/* Filter bits */
#define CAN_F2DATA1_FD28					28u
	/* Filter bits */
#define CAN_F2DATA1_FD29					29u
	/* Filter bits */
#define CAN_F2DATA1_FD30					30u
	/* Filter bits */
#define CAN_F2DATA1_FD31					31u

	/* 0x254 */
	uint8_t RESERVED38[0x258u-0x254u];

	/* 0x258: Filter 3 data 0 register */
	uint32_t volatile F3DATA0;
	/* Filter bits */
#define CAN_F3DATA0_FD0					0u
	/* Filter bits */
#define CAN_F3DATA0_FD1					1u
	/* Filter bits */
#define CAN_F3DATA0_FD2					2u
	/* Filter bits */
#define CAN_F3DATA0_FD3					3u
	/* Filter bits */
#define CAN_F3DATA0_FD4					4u
	/* Filter bits */
#define CAN_F3DATA0_FD5					5u
	/* Filter bits */
#define CAN_F3DATA0_FD6					6u
	/* Filter bits */
#define CAN_F3DATA0_FD7					7u
	/* Filter bits */
#define CAN_F3DATA0_FD8					8u
	/* Filter bits */
#define CAN_F3DATA0_FD9					9u
	/* Filter bits */
#define CAN_F3DATA0_FD10					10u
	/* Filter bits */
#define CAN_F3DATA0_FD11					11u
	/* Filter bits */
#define CAN_F3DATA0_FD12					12u
	/* Filter bits */
#define CAN_F3DATA0_FD13					13u
	/* Filter bits */
#define CAN_F3DATA0_FD14					14u
	/* Filter bits */
#define CAN_F3DATA0_FD15					15u
	/* Filter bits */
#define CAN_F3DATA0_FD16					16u
	/* Filter bits */
#define CAN_F3DATA0_FD17					17u
	/* Filter bits */
#define CAN_F3DATA0_FD18					18u
	/* Filter bits */
#define CAN_F3DATA0_FD19					19u
	/* Filter bits */
#define CAN_F3DATA0_FD20					20u
	/* Filter bits */
#define CAN_F3DATA0_FD21					21u
	/* Filter bits */
#define CAN_F3DATA0_FD22					22u
	/* Filter bits */
#define CAN_F3DATA0_FD23					23u
	/* Filter bits */
#define CAN_F3DATA0_FD24					24u
	/* Filter bits */
#define CAN_F3DATA0_FD25					25u
	/* Filter bits */
#define CAN_F3DATA0_FD26					26u
	/* Filter bits */
#define CAN_F3DATA0_FD27					27u
	/* Filter bits */
#define CAN_F3DATA0_FD28					28u
	/* Filter bits */
#define CAN_F3DATA0_FD29					29u
	/* Filter bits */
#define CAN_F3DATA0_FD30					30u
	/* Filter bits */
#define CAN_F3DATA0_FD31					31u

	/* 0x258 */
	uint8_t RESERVED39[0x25Cu-0x258u];

	/* 0x25C: Filter 3 data 1 register */
	uint32_t volatile F3DATA1;
	/* Filter bits */
#define CAN_F3DATA1_FD0					0u
	/* Filter bits */
#define CAN_F3DATA1_FD1					1u
	/* Filter bits */
#define CAN_F3DATA1_FD2					2u
	/* Filter bits */
#define CAN_F3DATA1_FD3					3u
	/* Filter bits */
#define CAN_F3DATA1_FD4					4u
	/* Filter bits */
#define CAN_F3DATA1_FD5					5u
	/* Filter bits */
#define CAN_F3DATA1_FD6					6u
	/* Filter bits */
#define CAN_F3DATA1_FD7					7u
	/* Filter bits */
#define CAN_F3DATA1_FD8					8u
	/* Filter bits */
#define CAN_F3DATA1_FD9					9u
	/* Filter bits */
#define CAN_F3DATA1_FD10					10u
	/* Filter bits */
#define CAN_F3DATA1_FD11					11u
	/* Filter bits */
#define CAN_F3DATA1_FD12					12u
	/* Filter bits */
#define CAN_F3DATA1_FD13					13u
	/* Filter bits */
#define CAN_F3DATA1_FD14					14u
	/* Filter bits */
#define CAN_F3DATA1_FD15					15u
	/* Filter bits */
#define CAN_F3DATA1_FD16					16u
	/* Filter bits */
#define CAN_F3DATA1_FD17					17u
	/* Filter bits */
#define CAN_F3DATA1_FD18					18u
	/* Filter bits */
#define CAN_F3DATA1_FD19					19u
	/* Filter bits */
#define CAN_F3DATA1_FD20					20u
	/* Filter bits */
#define CAN_F3DATA1_FD21					21u
	/* Filter bits */
#define CAN_F3DATA1_FD22					22u
	/* Filter bits */
#define CAN_F3DATA1_FD23					23u
	/* Filter bits */
#define CAN_F3DATA1_FD24					24u
	/* Filter bits */
#define CAN_F3DATA1_FD25					25u
	/* Filter bits */
#define CAN_F3DATA1_FD26					26u
	/* Filter bits */
#define CAN_F3DATA1_FD27					27u
	/* Filter bits */
#define CAN_F3DATA1_FD28					28u
	/* Filter bits */
#define CAN_F3DATA1_FD29					29u
	/* Filter bits */
#define CAN_F3DATA1_FD30					30u
	/* Filter bits */
#define CAN_F3DATA1_FD31					31u

	/* 0x25C */
	uint8_t RESERVED40[0x260u-0x25Cu];

	/* 0x260: Filter 4 data 0 register */
	uint32_t volatile F4DATA0;
	/* Filter bits */
#define CAN_F4DATA0_FD0					0u
	/* Filter bits */
#define CAN_F4DATA0_FD1					1u
	/* Filter bits */
#define CAN_F4DATA0_FD2					2u
	/* Filter bits */
#define CAN_F4DATA0_FD3					3u
	/* Filter bits */
#define CAN_F4DATA0_FD4					4u
	/* Filter bits */
#define CAN_F4DATA0_FD5					5u
	/* Filter bits */
#define CAN_F4DATA0_FD6					6u
	/* Filter bits */
#define CAN_F4DATA0_FD7					7u
	/* Filter bits */
#define CAN_F4DATA0_FD8					8u
	/* Filter bits */
#define CAN_F4DATA0_FD9					9u
	/* Filter bits */
#define CAN_F4DATA0_FD10					10u
	/* Filter bits */
#define CAN_F4DATA0_FD11					11u
	/* Filter bits */
#define CAN_F4DATA0_FD12					12u
	/* Filter bits */
#define CAN_F4DATA0_FD13					13u
	/* Filter bits */
#define CAN_F4DATA0_FD14					14u
	/* Filter bits */
#define CAN_F4DATA0_FD15					15u
	/* Filter bits */
#define CAN_F4DATA0_FD16					16u
	/* Filter bits */
#define CAN_F4DATA0_FD17					17u
	/* Filter bits */
#define CAN_F4DATA0_FD18					18u
	/* Filter bits */
#define CAN_F4DATA0_FD19					19u
	/* Filter bits */
#define CAN_F4DATA0_FD20					20u
	/* Filter bits */
#define CAN_F4DATA0_FD21					21u
	/* Filter bits */
#define CAN_F4DATA0_FD22					22u
	/* Filter bits */
#define CAN_F4DATA0_FD23					23u
	/* Filter bits */
#define CAN_F4DATA0_FD24					24u
	/* Filter bits */
#define CAN_F4DATA0_FD25					25u
	/* Filter bits */
#define CAN_F4DATA0_FD26					26u
	/* Filter bits */
#define CAN_F4DATA0_FD27					27u
	/* Filter bits */
#define CAN_F4DATA0_FD28					28u
	/* Filter bits */
#define CAN_F4DATA0_FD29					29u
	/* Filter bits */
#define CAN_F4DATA0_FD30					30u
	/* Filter bits */
#define CAN_F4DATA0_FD31					31u

	/* 0x260 */
	uint8_t RESERVED41[0x264u-0x260u];

	/* 0x264: Filter 4 data 1 register */
	uint32_t volatile F4DATA1;
	/* Filter bits */
#define CAN_F4DATA1_FD0					0u
	/* Filter bits */
#define CAN_F4DATA1_FD1					1u
	/* Filter bits */
#define CAN_F4DATA1_FD2					2u
	/* Filter bits */
#define CAN_F4DATA1_FD3					3u
	/* Filter bits */
#define CAN_F4DATA1_FD4					4u
	/* Filter bits */
#define CAN_F4DATA1_FD5					5u
	/* Filter bits */
#define CAN_F4DATA1_FD6					6u
	/* Filter bits */
#define CAN_F4DATA1_FD7					7u
	/* Filter bits */
#define CAN_F4DATA1_FD8					8u
	/* Filter bits */
#define CAN_F4DATA1_FD9					9u
	/* Filter bits */
#define CAN_F4DATA1_FD10					10u
	/* Filter bits */
#define CAN_F4DATA1_FD11					11u
	/* Filter bits */
#define CAN_F4DATA1_FD12					12u
	/* Filter bits */
#define CAN_F4DATA1_FD13					13u
	/* Filter bits */
#define CAN_F4DATA1_FD14					14u
	/* Filter bits */
#define CAN_F4DATA1_FD15					15u
	/* Filter bits */
#define CAN_F4DATA1_FD16					16u
	/* Filter bits */
#define CAN_F4DATA1_FD17					17u
	/* Filter bits */
#define CAN_F4DATA1_FD18					18u
	/* Filter bits */
#define CAN_F4DATA1_FD19					19u
	/* Filter bits */
#define CAN_F4DATA1_FD20					20u
	/* Filter bits */
#define CAN_F4DATA1_FD21					21u
	/* Filter bits */
#define CAN_F4DATA1_FD22					22u
	/* Filter bits */
#define CAN_F4DATA1_FD23					23u
	/* Filter bits */
#define CAN_F4DATA1_FD24					24u
	/* Filter bits */
#define CAN_F4DATA1_FD25					25u
	/* Filter bits */
#define CAN_F4DATA1_FD26					26u
	/* Filter bits */
#define CAN_F4DATA1_FD27					27u
	/* Filter bits */
#define CAN_F4DATA1_FD28					28u
	/* Filter bits */
#define CAN_F4DATA1_FD29					29u
	/* Filter bits */
#define CAN_F4DATA1_FD30					30u
	/* Filter bits */
#define CAN_F4DATA1_FD31					31u

	/* 0x264 */
	uint8_t RESERVED42[0x268u-0x264u];

	/* 0x268: Filter 5 data 0 register */
	uint32_t volatile F5DATA0;
	/* Filter bits */
#define CAN_F5DATA0_FD0					0u
	/* Filter bits */
#define CAN_F5DATA0_FD1					1u
	/* Filter bits */
#define CAN_F5DATA0_FD2					2u
	/* Filter bits */
#define CAN_F5DATA0_FD3					3u
	/* Filter bits */
#define CAN_F5DATA0_FD4					4u
	/* Filter bits */
#define CAN_F5DATA0_FD5					5u
	/* Filter bits */
#define CAN_F5DATA0_FD6					6u
	/* Filter bits */
#define CAN_F5DATA0_FD7					7u
	/* Filter bits */
#define CAN_F5DATA0_FD8					8u
	/* Filter bits */
#define CAN_F5DATA0_FD9					9u
	/* Filter bits */
#define CAN_F5DATA0_FD10					10u
	/* Filter bits */
#define CAN_F5DATA0_FD11					11u
	/* Filter bits */
#define CAN_F5DATA0_FD12					12u
	/* Filter bits */
#define CAN_F5DATA0_FD13					13u
	/* Filter bits */
#define CAN_F5DATA0_FD14					14u
	/* Filter bits */
#define CAN_F5DATA0_FD15					15u
	/* Filter bits */
#define CAN_F5DATA0_FD16					16u
	/* Filter bits */
#define CAN_F5DATA0_FD17					17u
	/* Filter bits */
#define CAN_F5DATA0_FD18					18u
	/* Filter bits */
#define CAN_F5DATA0_FD19					19u
	/* Filter bits */
#define CAN_F5DATA0_FD20					20u
	/* Filter bits */
#define CAN_F5DATA0_FD21					21u
	/* Filter bits */
#define CAN_F5DATA0_FD22					22u
	/* Filter bits */
#define CAN_F5DATA0_FD23					23u
	/* Filter bits */
#define CAN_F5DATA0_FD24					24u
	/* Filter bits */
#define CAN_F5DATA0_FD25					25u
	/* Filter bits */
#define CAN_F5DATA0_FD26					26u
	/* Filter bits */
#define CAN_F5DATA0_FD27					27u
	/* Filter bits */
#define CAN_F5DATA0_FD28					28u
	/* Filter bits */
#define CAN_F5DATA0_FD29					29u
	/* Filter bits */
#define CAN_F5DATA0_FD30					30u
	/* Filter bits */
#define CAN_F5DATA0_FD31					31u

	/* 0x268 */
	uint8_t RESERVED43[0x26Cu-0x268u];

	/* 0x26C: Filter 5 data 1 register */
	uint32_t volatile F5DATA1;
	/* Filter bits */
#define CAN_F5DATA1_FD0					0u
	/* Filter bits */
#define CAN_F5DATA1_FD1					1u
	/* Filter bits */
#define CAN_F5DATA1_FD2					2u
	/* Filter bits */
#define CAN_F5DATA1_FD3					3u
	/* Filter bits */
#define CAN_F5DATA1_FD4					4u
	/* Filter bits */
#define CAN_F5DATA1_FD5					5u
	/* Filter bits */
#define CAN_F5DATA1_FD6					6u
	/* Filter bits */
#define CAN_F5DATA1_FD7					7u
	/* Filter bits */
#define CAN_F5DATA1_FD8					8u
	/* Filter bits */
#define CAN_F5DATA1_FD9					9u
	/* Filter bits */
#define CAN_F5DATA1_FD10					10u
	/* Filter bits */
#define CAN_F5DATA1_FD11					11u
	/* Filter bits */
#define CAN_F5DATA1_FD12					12u
	/* Filter bits */
#define CAN_F5DATA1_FD13					13u
	/* Filter bits */
#define CAN_F5DATA1_FD14					14u
	/* Filter bits */
#define CAN_F5DATA1_FD15					15u
	/* Filter bits */
#define CAN_F5DATA1_FD16					16u
	/* Filter bits */
#define CAN_F5DATA1_FD17					17u
	/* Filter bits */
#define CAN_F5DATA1_FD18					18u
	/* Filter bits */
#define CAN_F5DATA1_FD19					19u
	/* Filter bits */
#define CAN_F5DATA1_FD20					20u
	/* Filter bits */
#define CAN_F5DATA1_FD21					21u
	/* Filter bits */
#define CAN_F5DATA1_FD22					22u
	/* Filter bits */
#define CAN_F5DATA1_FD23					23u
	/* Filter bits */
#define CAN_F5DATA1_FD24					24u
	/* Filter bits */
#define CAN_F5DATA1_FD25					25u
	/* Filter bits */
#define CAN_F5DATA1_FD26					26u
	/* Filter bits */
#define CAN_F5DATA1_FD27					27u
	/* Filter bits */
#define CAN_F5DATA1_FD28					28u
	/* Filter bits */
#define CAN_F5DATA1_FD29					29u
	/* Filter bits */
#define CAN_F5DATA1_FD30					30u
	/* Filter bits */
#define CAN_F5DATA1_FD31					31u

	/* 0x26C */
	uint8_t RESERVED44[0x270u-0x26Cu];

	/* 0x270: Filter 6 data 0 register */
	uint32_t volatile F6DATA0;
	/* Filter bits */
#define CAN_F6DATA0_FD0					0u
	/* Filter bits */
#define CAN_F6DATA0_FD1					1u
	/* Filter bits */
#define CAN_F6DATA0_FD2					2u
	/* Filter bits */
#define CAN_F6DATA0_FD3					3u
	/* Filter bits */
#define CAN_F6DATA0_FD4					4u
	/* Filter bits */
#define CAN_F6DATA0_FD5					5u
	/* Filter bits */
#define CAN_F6DATA0_FD6					6u
	/* Filter bits */
#define CAN_F6DATA0_FD7					7u
	/* Filter bits */
#define CAN_F6DATA0_FD8					8u
	/* Filter bits */
#define CAN_F6DATA0_FD9					9u
	/* Filter bits */
#define CAN_F6DATA0_FD10					10u
	/* Filter bits */
#define CAN_F6DATA0_FD11					11u
	/* Filter bits */
#define CAN_F6DATA0_FD12					12u
	/* Filter bits */
#define CAN_F6DATA0_FD13					13u
	/* Filter bits */
#define CAN_F6DATA0_FD14					14u
	/* Filter bits */
#define CAN_F6DATA0_FD15					15u
	/* Filter bits */
#define CAN_F6DATA0_FD16					16u
	/* Filter bits */
#define CAN_F6DATA0_FD17					17u
	/* Filter bits */
#define CAN_F6DATA0_FD18					18u
	/* Filter bits */
#define CAN_F6DATA0_FD19					19u
	/* Filter bits */
#define CAN_F6DATA0_FD20					20u
	/* Filter bits */
#define CAN_F6DATA0_FD21					21u
	/* Filter bits */
#define CAN_F6DATA0_FD22					22u
	/* Filter bits */
#define CAN_F6DATA0_FD23					23u
	/* Filter bits */
#define CAN_F6DATA0_FD24					24u
	/* Filter bits */
#define CAN_F6DATA0_FD25					25u
	/* Filter bits */
#define CAN_F6DATA0_FD26					26u
	/* Filter bits */
#define CAN_F6DATA0_FD27					27u
	/* Filter bits */
#define CAN_F6DATA0_FD28					28u
	/* Filter bits */
#define CAN_F6DATA0_FD29					29u
	/* Filter bits */
#define CAN_F6DATA0_FD30					30u
	/* Filter bits */
#define CAN_F6DATA0_FD31					31u

	/* 0x270 */
	uint8_t RESERVED45[0x274u-0x270u];

	/* 0x274: Filter 6 data 1 register */
	uint32_t volatile F6DATA1;
	/* Filter bits */
#define CAN_F6DATA1_FD0					0u
	/* Filter bits */
#define CAN_F6DATA1_FD1					1u
	/* Filter bits */
#define CAN_F6DATA1_FD2					2u
	/* Filter bits */
#define CAN_F6DATA1_FD3					3u
	/* Filter bits */
#define CAN_F6DATA1_FD4					4u
	/* Filter bits */
#define CAN_F6DATA1_FD5					5u
	/* Filter bits */
#define CAN_F6DATA1_FD6					6u
	/* Filter bits */
#define CAN_F6DATA1_FD7					7u
	/* Filter bits */
#define CAN_F6DATA1_FD8					8u
	/* Filter bits */
#define CAN_F6DATA1_FD9					9u
	/* Filter bits */
#define CAN_F6DATA1_FD10					10u
	/* Filter bits */
#define CAN_F6DATA1_FD11					11u
	/* Filter bits */
#define CAN_F6DATA1_FD12					12u
	/* Filter bits */
#define CAN_F6DATA1_FD13					13u
	/* Filter bits */
#define CAN_F6DATA1_FD14					14u
	/* Filter bits */
#define CAN_F6DATA1_FD15					15u
	/* Filter bits */
#define CAN_F6DATA1_FD16					16u
	/* Filter bits */
#define CAN_F6DATA1_FD17					17u
	/* Filter bits */
#define CAN_F6DATA1_FD18					18u
	/* Filter bits */
#define CAN_F6DATA1_FD19					19u
	/* Filter bits */
#define CAN_F6DATA1_FD20					20u
	/* Filter bits */
#define CAN_F6DATA1_FD21					21u
	/* Filter bits */
#define CAN_F6DATA1_FD22					22u
	/* Filter bits */
#define CAN_F6DATA1_FD23					23u
	/* Filter bits */
#define CAN_F6DATA1_FD24					24u
	/* Filter bits */
#define CAN_F6DATA1_FD25					25u
	/* Filter bits */
#define CAN_F6DATA1_FD26					26u
	/* Filter bits */
#define CAN_F6DATA1_FD27					27u
	/* Filter bits */
#define CAN_F6DATA1_FD28					28u
	/* Filter bits */
#define CAN_F6DATA1_FD29					29u
	/* Filter bits */
#define CAN_F6DATA1_FD30					30u
	/* Filter bits */
#define CAN_F6DATA1_FD31					31u

	/* 0x274 */
	uint8_t RESERVED46[0x278u-0x274u];

	/* 0x278: Filter 7 data 0 register */
	uint32_t volatile F7DATA0;
	/* Filter bits */
#define CAN_F7DATA0_FD0					0u
	/* Filter bits */
#define CAN_F7DATA0_FD1					1u
	/* Filter bits */
#define CAN_F7DATA0_FD2					2u
	/* Filter bits */
#define CAN_F7DATA0_FD3					3u
	/* Filter bits */
#define CAN_F7DATA0_FD4					4u
	/* Filter bits */
#define CAN_F7DATA0_FD5					5u
	/* Filter bits */
#define CAN_F7DATA0_FD6					6u
	/* Filter bits */
#define CAN_F7DATA0_FD7					7u
	/* Filter bits */
#define CAN_F7DATA0_FD8					8u
	/* Filter bits */
#define CAN_F7DATA0_FD9					9u
	/* Filter bits */
#define CAN_F7DATA0_FD10					10u
	/* Filter bits */
#define CAN_F7DATA0_FD11					11u
	/* Filter bits */
#define CAN_F7DATA0_FD12					12u
	/* Filter bits */
#define CAN_F7DATA0_FD13					13u
	/* Filter bits */
#define CAN_F7DATA0_FD14					14u
	/* Filter bits */
#define CAN_F7DATA0_FD15					15u
	/* Filter bits */
#define CAN_F7DATA0_FD16					16u
	/* Filter bits */
#define CAN_F7DATA0_FD17					17u
	/* Filter bits */
#define CAN_F7DATA0_FD18					18u
	/* Filter bits */
#define CAN_F7DATA0_FD19					19u
	/* Filter bits */
#define CAN_F7DATA0_FD20					20u
	/* Filter bits */
#define CAN_F7DATA0_FD21					21u
	/* Filter bits */
#define CAN_F7DATA0_FD22					22u
	/* Filter bits */
#define CAN_F7DATA0_FD23					23u
	/* Filter bits */
#define CAN_F7DATA0_FD24					24u
	/* Filter bits */
#define CAN_F7DATA0_FD25					25u
	/* Filter bits */
#define CAN_F7DATA0_FD26					26u
	/* Filter bits */
#define CAN_F7DATA0_FD27					27u
	/* Filter bits */
#define CAN_F7DATA0_FD28					28u
	/* Filter bits */
#define CAN_F7DATA0_FD29					29u
	/* Filter bits */
#define CAN_F7DATA0_FD30					30u
	/* Filter bits */
#define CAN_F7DATA0_FD31					31u

	/* 0x278 */
	uint8_t RESERVED47[0x27Cu-0x278u];

	/* 0x27C: Filter 7 data 1 register */
	uint32_t volatile F7DATA1;
	/* Filter bits */
#define CAN_F7DATA1_FD0					0u
	/* Filter bits */
#define CAN_F7DATA1_FD1					1u
	/* Filter bits */
#define CAN_F7DATA1_FD2					2u
	/* Filter bits */
#define CAN_F7DATA1_FD3					3u
	/* Filter bits */
#define CAN_F7DATA1_FD4					4u
	/* Filter bits */
#define CAN_F7DATA1_FD5					5u
	/* Filter bits */
#define CAN_F7DATA1_FD6					6u
	/* Filter bits */
#define CAN_F7DATA1_FD7					7u
	/* Filter bits */
#define CAN_F7DATA1_FD8					8u
	/* Filter bits */
#define CAN_F7DATA1_FD9					9u
	/* Filter bits */
#define CAN_F7DATA1_FD10					10u
	/* Filter bits */
#define CAN_F7DATA1_FD11					11u
	/* Filter bits */
#define CAN_F7DATA1_FD12					12u
	/* Filter bits */
#define CAN_F7DATA1_FD13					13u
	/* Filter bits */
#define CAN_F7DATA1_FD14					14u
	/* Filter bits */
#define CAN_F7DATA1_FD15					15u
	/* Filter bits */
#define CAN_F7DATA1_FD16					16u
	/* Filter bits */
#define CAN_F7DATA1_FD17					17u
	/* Filter bits */
#define CAN_F7DATA1_FD18					18u
	/* Filter bits */
#define CAN_F7DATA1_FD19					19u
	/* Filter bits */
#define CAN_F7DATA1_FD20					20u
	/* Filter bits */
#define CAN_F7DATA1_FD21					21u
	/* Filter bits */
#define CAN_F7DATA1_FD22					22u
	/* Filter bits */
#define CAN_F7DATA1_FD23					23u
	/* Filter bits */
#define CAN_F7DATA1_FD24					24u
	/* Filter bits */
#define CAN_F7DATA1_FD25					25u
	/* Filter bits */
#define CAN_F7DATA1_FD26					26u
	/* Filter bits */
#define CAN_F7DATA1_FD27					27u
	/* Filter bits */
#define CAN_F7DATA1_FD28					28u
	/* Filter bits */
#define CAN_F7DATA1_FD29					29u
	/* Filter bits */
#define CAN_F7DATA1_FD30					30u
	/* Filter bits */
#define CAN_F7DATA1_FD31					31u

	/* 0x27C */
	uint8_t RESERVED48[0x280u-0x27Cu];

	/* 0x280: Filter 8 data 0 register */
	uint32_t volatile F8DATA0;
	/* Filter bits */
#define CAN_F8DATA0_FD0					0u
	/* Filter bits */
#define CAN_F8DATA0_FD1					1u
	/* Filter bits */
#define CAN_F8DATA0_FD2					2u
	/* Filter bits */
#define CAN_F8DATA0_FD3					3u
	/* Filter bits */
#define CAN_F8DATA0_FD4					4u
	/* Filter bits */
#define CAN_F8DATA0_FD5					5u
	/* Filter bits */
#define CAN_F8DATA0_FD6					6u
	/* Filter bits */
#define CAN_F8DATA0_FD7					7u
	/* Filter bits */
#define CAN_F8DATA0_FD8					8u
	/* Filter bits */
#define CAN_F8DATA0_FD9					9u
	/* Filter bits */
#define CAN_F8DATA0_FD10					10u
	/* Filter bits */
#define CAN_F8DATA0_FD11					11u
	/* Filter bits */
#define CAN_F8DATA0_FD12					12u
	/* Filter bits */
#define CAN_F8DATA0_FD13					13u
	/* Filter bits */
#define CAN_F8DATA0_FD14					14u
	/* Filter bits */
#define CAN_F8DATA0_FD15					15u
	/* Filter bits */
#define CAN_F8DATA0_FD16					16u
	/* Filter bits */
#define CAN_F8DATA0_FD17					17u
	/* Filter bits */
#define CAN_F8DATA0_FD18					18u
	/* Filter bits */
#define CAN_F8DATA0_FD19					19u
	/* Filter bits */
#define CAN_F8DATA0_FD20					20u
	/* Filter bits */
#define CAN_F8DATA0_FD21					21u
	/* Filter bits */
#define CAN_F8DATA0_FD22					22u
	/* Filter bits */
#define CAN_F8DATA0_FD23					23u
	/* Filter bits */
#define CAN_F8DATA0_FD24					24u
	/* Filter bits */
#define CAN_F8DATA0_FD25					25u
	/* Filter bits */
#define CAN_F8DATA0_FD26					26u
	/* Filter bits */
#define CAN_F8DATA0_FD27					27u
	/* Filter bits */
#define CAN_F8DATA0_FD28					28u
	/* Filter bits */
#define CAN_F8DATA0_FD29					29u
	/* Filter bits */
#define CAN_F8DATA0_FD30					30u
	/* Filter bits */
#define CAN_F8DATA0_FD31					31u

	/* 0x280 */
	uint8_t RESERVED49[0x284u-0x280u];

	/* 0x284: Filter 8 data 1 register */
	uint32_t volatile F8DATA1;
	/* Filter bits */
#define CAN_F8DATA1_FD0					0u
	/* Filter bits */
#define CAN_F8DATA1_FD1					1u
	/* Filter bits */
#define CAN_F8DATA1_FD2					2u
	/* Filter bits */
#define CAN_F8DATA1_FD3					3u
	/* Filter bits */
#define CAN_F8DATA1_FD4					4u
	/* Filter bits */
#define CAN_F8DATA1_FD5					5u
	/* Filter bits */
#define CAN_F8DATA1_FD6					6u
	/* Filter bits */
#define CAN_F8DATA1_FD7					7u
	/* Filter bits */
#define CAN_F8DATA1_FD8					8u
	/* Filter bits */
#define CAN_F8DATA1_FD9					9u
	/* Filter bits */
#define CAN_F8DATA1_FD10					10u
	/* Filter bits */
#define CAN_F8DATA1_FD11					11u
	/* Filter bits */
#define CAN_F8DATA1_FD12					12u
	/* Filter bits */
#define CAN_F8DATA1_FD13					13u
	/* Filter bits */
#define CAN_F8DATA1_FD14					14u
	/* Filter bits */
#define CAN_F8DATA1_FD15					15u
	/* Filter bits */
#define CAN_F8DATA1_FD16					16u
	/* Filter bits */
#define CAN_F8DATA1_FD17					17u
	/* Filter bits */
#define CAN_F8DATA1_FD18					18u
	/* Filter bits */
#define CAN_F8DATA1_FD19					19u
	/* Filter bits */
#define CAN_F8DATA1_FD20					20u
	/* Filter bits */
#define CAN_F8DATA1_FD21					21u
	/* Filter bits */
#define CAN_F8DATA1_FD22					22u
	/* Filter bits */
#define CAN_F8DATA1_FD23					23u
	/* Filter bits */
#define CAN_F8DATA1_FD24					24u
	/* Filter bits */
#define CAN_F8DATA1_FD25					25u
	/* Filter bits */
#define CAN_F8DATA1_FD26					26u
	/* Filter bits */
#define CAN_F8DATA1_FD27					27u
	/* Filter bits */
#define CAN_F8DATA1_FD28					28u
	/* Filter bits */
#define CAN_F8DATA1_FD29					29u
	/* Filter bits */
#define CAN_F8DATA1_FD30					30u
	/* Filter bits */
#define CAN_F8DATA1_FD31					31u

	/* 0x284 */
	uint8_t RESERVED50[0x288u-0x284u];

	/* 0x288: Filter 9 data 0 register */
	uint32_t volatile F9DATA0;
	/* Filter bits */
#define CAN_F9DATA0_FD0					0u
	/* Filter bits */
#define CAN_F9DATA0_FD1					1u
	/* Filter bits */
#define CAN_F9DATA0_FD2					2u
	/* Filter bits */
#define CAN_F9DATA0_FD3					3u
	/* Filter bits */
#define CAN_F9DATA0_FD4					4u
	/* Filter bits */
#define CAN_F9DATA0_FD5					5u
	/* Filter bits */
#define CAN_F9DATA0_FD6					6u
	/* Filter bits */
#define CAN_F9DATA0_FD7					7u
	/* Filter bits */
#define CAN_F9DATA0_FD8					8u
	/* Filter bits */
#define CAN_F9DATA0_FD9					9u
	/* Filter bits */
#define CAN_F9DATA0_FD10					10u
	/* Filter bits */
#define CAN_F9DATA0_FD11					11u
	/* Filter bits */
#define CAN_F9DATA0_FD12					12u
	/* Filter bits */
#define CAN_F9DATA0_FD13					13u
	/* Filter bits */
#define CAN_F9DATA0_FD14					14u
	/* Filter bits */
#define CAN_F9DATA0_FD15					15u
	/* Filter bits */
#define CAN_F9DATA0_FD16					16u
	/* Filter bits */
#define CAN_F9DATA0_FD17					17u
	/* Filter bits */
#define CAN_F9DATA0_FD18					18u
	/* Filter bits */
#define CAN_F9DATA0_FD19					19u
	/* Filter bits */
#define CAN_F9DATA0_FD20					20u
	/* Filter bits */
#define CAN_F9DATA0_FD21					21u
	/* Filter bits */
#define CAN_F9DATA0_FD22					22u
	/* Filter bits */
#define CAN_F9DATA0_FD23					23u
	/* Filter bits */
#define CAN_F9DATA0_FD24					24u
	/* Filter bits */
#define CAN_F9DATA0_FD25					25u
	/* Filter bits */
#define CAN_F9DATA0_FD26					26u
	/* Filter bits */
#define CAN_F9DATA0_FD27					27u
	/* Filter bits */
#define CAN_F9DATA0_FD28					28u
	/* Filter bits */
#define CAN_F9DATA0_FD29					29u
	/* Filter bits */
#define CAN_F9DATA0_FD30					30u
	/* Filter bits */
#define CAN_F9DATA0_FD31					31u

	/* 0x288 */
	uint8_t RESERVED51[0x28Cu-0x288u];

	/* 0x28C: Filter 9 data 1 register */
	uint32_t volatile F9DATA1;
	/* Filter bits */
#define CAN_F9DATA1_FD0					0u
	/* Filter bits */
#define CAN_F9DATA1_FD1					1u
	/* Filter bits */
#define CAN_F9DATA1_FD2					2u
	/* Filter bits */
#define CAN_F9DATA1_FD3					3u
	/* Filter bits */
#define CAN_F9DATA1_FD4					4u
	/* Filter bits */
#define CAN_F9DATA1_FD5					5u
	/* Filter bits */
#define CAN_F9DATA1_FD6					6u
	/* Filter bits */
#define CAN_F9DATA1_FD7					7u
	/* Filter bits */
#define CAN_F9DATA1_FD8					8u
	/* Filter bits */
#define CAN_F9DATA1_FD9					9u
	/* Filter bits */
#define CAN_F9DATA1_FD10					10u
	/* Filter bits */
#define CAN_F9DATA1_FD11					11u
	/* Filter bits */
#define CAN_F9DATA1_FD12					12u
	/* Filter bits */
#define CAN_F9DATA1_FD13					13u
	/* Filter bits */
#define CAN_F9DATA1_FD14					14u
	/* Filter bits */
#define CAN_F9DATA1_FD15					15u
	/* Filter bits */
#define CAN_F9DATA1_FD16					16u
	/* Filter bits */
#define CAN_F9DATA1_FD17					17u
	/* Filter bits */
#define CAN_F9DATA1_FD18					18u
	/* Filter bits */
#define CAN_F9DATA1_FD19					19u
	/* Filter bits */
#define CAN_F9DATA1_FD20					20u
	/* Filter bits */
#define CAN_F9DATA1_FD21					21u
	/* Filter bits */
#define CAN_F9DATA1_FD22					22u
	/* Filter bits */
#define CAN_F9DATA1_FD23					23u
	/* Filter bits */
#define CAN_F9DATA1_FD24					24u
	/* Filter bits */
#define CAN_F9DATA1_FD25					25u
	/* Filter bits */
#define CAN_F9DATA1_FD26					26u
	/* Filter bits */
#define CAN_F9DATA1_FD27					27u
	/* Filter bits */
#define CAN_F9DATA1_FD28					28u
	/* Filter bits */
#define CAN_F9DATA1_FD29					29u
	/* Filter bits */
#define CAN_F9DATA1_FD30					30u
	/* Filter bits */
#define CAN_F9DATA1_FD31					31u

	/* 0x28C */
	uint8_t RESERVED52[0x290u-0x28Cu];

	/* 0x290: Filter 10 data 0 register */
	uint32_t volatile F10DATA0;
	/* Filter bits */
#define CAN_F10DATA0_FD0					0u
	/* Filter bits */
#define CAN_F10DATA0_FD1					1u
	/* Filter bits */
#define CAN_F10DATA0_FD2					2u
	/* Filter bits */
#define CAN_F10DATA0_FD3					3u
	/* Filter bits */
#define CAN_F10DATA0_FD4					4u
	/* Filter bits */
#define CAN_F10DATA0_FD5					5u
	/* Filter bits */
#define CAN_F10DATA0_FD6					6u
	/* Filter bits */
#define CAN_F10DATA0_FD7					7u
	/* Filter bits */
#define CAN_F10DATA0_FD8					8u
	/* Filter bits */
#define CAN_F10DATA0_FD9					9u
	/* Filter bits */
#define CAN_F10DATA0_FD10					10u
	/* Filter bits */
#define CAN_F10DATA0_FD11					11u
	/* Filter bits */
#define CAN_F10DATA0_FD12					12u
	/* Filter bits */
#define CAN_F10DATA0_FD13					13u
	/* Filter bits */
#define CAN_F10DATA0_FD14					14u
	/* Filter bits */
#define CAN_F10DATA0_FD15					15u
	/* Filter bits */
#define CAN_F10DATA0_FD16					16u
	/* Filter bits */
#define CAN_F10DATA0_FD17					17u
	/* Filter bits */
#define CAN_F10DATA0_FD18					18u
	/* Filter bits */
#define CAN_F10DATA0_FD19					19u
	/* Filter bits */
#define CAN_F10DATA0_FD20					20u
	/* Filter bits */
#define CAN_F10DATA0_FD21					21u
	/* Filter bits */
#define CAN_F10DATA0_FD22					22u
	/* Filter bits */
#define CAN_F10DATA0_FD23					23u
	/* Filter bits */
#define CAN_F10DATA0_FD24					24u
	/* Filter bits */
#define CAN_F10DATA0_FD25					25u
	/* Filter bits */
#define CAN_F10DATA0_FD26					26u
	/* Filter bits */
#define CAN_F10DATA0_FD27					27u
	/* Filter bits */
#define CAN_F10DATA0_FD28					28u
	/* Filter bits */
#define CAN_F10DATA0_FD29					29u
	/* Filter bits */
#define CAN_F10DATA0_FD30					30u
	/* Filter bits */
#define CAN_F10DATA0_FD31					31u

	/* 0x290 */
	uint8_t RESERVED53[0x294u-0x290u];

	/* 0x294: Filter 10 data 1 register */
	uint32_t volatile F10DATA1;
	/* Filter bits */
#define CAN_F10DATA1_FD0					0u
	/* Filter bits */
#define CAN_F10DATA1_FD1					1u
	/* Filter bits */
#define CAN_F10DATA1_FD2					2u
	/* Filter bits */
#define CAN_F10DATA1_FD3					3u
	/* Filter bits */
#define CAN_F10DATA1_FD4					4u
	/* Filter bits */
#define CAN_F10DATA1_FD5					5u
	/* Filter bits */
#define CAN_F10DATA1_FD6					6u
	/* Filter bits */
#define CAN_F10DATA1_FD7					7u
	/* Filter bits */
#define CAN_F10DATA1_FD8					8u
	/* Filter bits */
#define CAN_F10DATA1_FD9					9u
	/* Filter bits */
#define CAN_F10DATA1_FD10					10u
	/* Filter bits */
#define CAN_F10DATA1_FD11					11u
	/* Filter bits */
#define CAN_F10DATA1_FD12					12u
	/* Filter bits */
#define CAN_F10DATA1_FD13					13u
	/* Filter bits */
#define CAN_F10DATA1_FD14					14u
	/* Filter bits */
#define CAN_F10DATA1_FD15					15u
	/* Filter bits */
#define CAN_F10DATA1_FD16					16u
	/* Filter bits */
#define CAN_F10DATA1_FD17					17u
	/* Filter bits */
#define CAN_F10DATA1_FD18					18u
	/* Filter bits */
#define CAN_F10DATA1_FD19					19u
	/* Filter bits */
#define CAN_F10DATA1_FD20					20u
	/* Filter bits */
#define CAN_F10DATA1_FD21					21u
	/* Filter bits */
#define CAN_F10DATA1_FD22					22u
	/* Filter bits */
#define CAN_F10DATA1_FD23					23u
	/* Filter bits */
#define CAN_F10DATA1_FD24					24u
	/* Filter bits */
#define CAN_F10DATA1_FD25					25u
	/* Filter bits */
#define CAN_F10DATA1_FD26					26u
	/* Filter bits */
#define CAN_F10DATA1_FD27					27u
	/* Filter bits */
#define CAN_F10DATA1_FD28					28u
	/* Filter bits */
#define CAN_F10DATA1_FD29					29u
	/* Filter bits */
#define CAN_F10DATA1_FD30					30u
	/* Filter bits */
#define CAN_F10DATA1_FD31					31u

	/* 0x294 */
	uint8_t RESERVED54[0x298u-0x294u];

	/* 0x298: Filter 11 data 0 register */
	uint32_t volatile F11DATA0;
	/* Filter bits */
#define CAN_F11DATA0_FD0					0u
	/* Filter bits */
#define CAN_F11DATA0_FD1					1u
	/* Filter bits */
#define CAN_F11DATA0_FD2					2u
	/* Filter bits */
#define CAN_F11DATA0_FD3					3u
	/* Filter bits */
#define CAN_F11DATA0_FD4					4u
	/* Filter bits */
#define CAN_F11DATA0_FD5					5u
	/* Filter bits */
#define CAN_F11DATA0_FD6					6u
	/* Filter bits */
#define CAN_F11DATA0_FD7					7u
	/* Filter bits */
#define CAN_F11DATA0_FD8					8u
	/* Filter bits */
#define CAN_F11DATA0_FD9					9u
	/* Filter bits */
#define CAN_F11DATA0_FD10					10u
	/* Filter bits */
#define CAN_F11DATA0_FD11					11u
	/* Filter bits */
#define CAN_F11DATA0_FD12					12u
	/* Filter bits */
#define CAN_F11DATA0_FD13					13u
	/* Filter bits */
#define CAN_F11DATA0_FD14					14u
	/* Filter bits */
#define CAN_F11DATA0_FD15					15u
	/* Filter bits */
#define CAN_F11DATA0_FD16					16u
	/* Filter bits */
#define CAN_F11DATA0_FD17					17u
	/* Filter bits */
#define CAN_F11DATA0_FD18					18u
	/* Filter bits */
#define CAN_F11DATA0_FD19					19u
	/* Filter bits */
#define CAN_F11DATA0_FD20					20u
	/* Filter bits */
#define CAN_F11DATA0_FD21					21u
	/* Filter bits */
#define CAN_F11DATA0_FD22					22u
	/* Filter bits */
#define CAN_F11DATA0_FD23					23u
	/* Filter bits */
#define CAN_F11DATA0_FD24					24u
	/* Filter bits */
#define CAN_F11DATA0_FD25					25u
	/* Filter bits */
#define CAN_F11DATA0_FD26					26u
	/* Filter bits */
#define CAN_F11DATA0_FD27					27u
	/* Filter bits */
#define CAN_F11DATA0_FD28					28u
	/* Filter bits */
#define CAN_F11DATA0_FD29					29u
	/* Filter bits */
#define CAN_F11DATA0_FD30					30u
	/* Filter bits */
#define CAN_F11DATA0_FD31					31u

	/* 0x298 */
	uint8_t RESERVED55[0x29Cu-0x298u];

	/* 0x29C: Filter 11 data 1 register */
	uint32_t volatile F11DATA1;
	/* Filter bits */
#define CAN_F11DATA1_FD0					0u
	/* Filter bits */
#define CAN_F11DATA1_FD1					1u
	/* Filter bits */
#define CAN_F11DATA1_FD2					2u
	/* Filter bits */
#define CAN_F11DATA1_FD3					3u
	/* Filter bits */
#define CAN_F11DATA1_FD4					4u
	/* Filter bits */
#define CAN_F11DATA1_FD5					5u
	/* Filter bits */
#define CAN_F11DATA1_FD6					6u
	/* Filter bits */
#define CAN_F11DATA1_FD7					7u
	/* Filter bits */
#define CAN_F11DATA1_FD8					8u
	/* Filter bits */
#define CAN_F11DATA1_FD9					9u
	/* Filter bits */
#define CAN_F11DATA1_FD10					10u
	/* Filter bits */
#define CAN_F11DATA1_FD11					11u
	/* Filter bits */
#define CAN_F11DATA1_FD12					12u
	/* Filter bits */
#define CAN_F11DATA1_FD13					13u
	/* Filter bits */
#define CAN_F11DATA1_FD14					14u
	/* Filter bits */
#define CAN_F11DATA1_FD15					15u
	/* Filter bits */
#define CAN_F11DATA1_FD16					16u
	/* Filter bits */
#define CAN_F11DATA1_FD17					17u
	/* Filter bits */
#define CAN_F11DATA1_FD18					18u
	/* Filter bits */
#define CAN_F11DATA1_FD19					19u
	/* Filter bits */
#define CAN_F11DATA1_FD20					20u
	/* Filter bits */
#define CAN_F11DATA1_FD21					21u
	/* Filter bits */
#define CAN_F11DATA1_FD22					22u
	/* Filter bits */
#define CAN_F11DATA1_FD23					23u
	/* Filter bits */
#define CAN_F11DATA1_FD24					24u
	/* Filter bits */
#define CAN_F11DATA1_FD25					25u
	/* Filter bits */
#define CAN_F11DATA1_FD26					26u
	/* Filter bits */
#define CAN_F11DATA1_FD27					27u
	/* Filter bits */
#define CAN_F11DATA1_FD28					28u
	/* Filter bits */
#define CAN_F11DATA1_FD29					29u
	/* Filter bits */
#define CAN_F11DATA1_FD30					30u
	/* Filter bits */
#define CAN_F11DATA1_FD31					31u

	/* 0x29C */
	uint8_t RESERVED56[0x2A0u-0x29Cu];

	/* 0x2A0: Filter 12 data 0 register */
	uint32_t volatile F12DATA0;
	/* Filter bits */
#define CAN_F12DATA0_FD0					0u
	/* Filter bits */
#define CAN_F12DATA0_FD1					1u
	/* Filter bits */
#define CAN_F12DATA0_FD2					2u
	/* Filter bits */
#define CAN_F12DATA0_FD3					3u
	/* Filter bits */
#define CAN_F12DATA0_FD4					4u
	/* Filter bits */
#define CAN_F12DATA0_FD5					5u
	/* Filter bits */
#define CAN_F12DATA0_FD6					6u
	/* Filter bits */
#define CAN_F12DATA0_FD7					7u
	/* Filter bits */
#define CAN_F12DATA0_FD8					8u
	/* Filter bits */
#define CAN_F12DATA0_FD9					9u
	/* Filter bits */
#define CAN_F12DATA0_FD10					10u
	/* Filter bits */
#define CAN_F12DATA0_FD11					11u
	/* Filter bits */
#define CAN_F12DATA0_FD12					12u
	/* Filter bits */
#define CAN_F12DATA0_FD13					13u
	/* Filter bits */
#define CAN_F12DATA0_FD14					14u
	/* Filter bits */
#define CAN_F12DATA0_FD15					15u
	/* Filter bits */
#define CAN_F12DATA0_FD16					16u
	/* Filter bits */
#define CAN_F12DATA0_FD17					17u
	/* Filter bits */
#define CAN_F12DATA0_FD18					18u
	/* Filter bits */
#define CAN_F12DATA0_FD19					19u
	/* Filter bits */
#define CAN_F12DATA0_FD20					20u
	/* Filter bits */
#define CAN_F12DATA0_FD21					21u
	/* Filter bits */
#define CAN_F12DATA0_FD22					22u
	/* Filter bits */
#define CAN_F12DATA0_FD23					23u
	/* Filter bits */
#define CAN_F12DATA0_FD24					24u
	/* Filter bits */
#define CAN_F12DATA0_FD25					25u
	/* Filter bits */
#define CAN_F12DATA0_FD26					26u
	/* Filter bits */
#define CAN_F12DATA0_FD27					27u
	/* Filter bits */
#define CAN_F12DATA0_FD28					28u
	/* Filter bits */
#define CAN_F12DATA0_FD29					29u
	/* Filter bits */
#define CAN_F12DATA0_FD30					30u
	/* Filter bits */
#define CAN_F12DATA0_FD31					31u

	/* 0x2A0 */
	uint8_t RESERVED57[0x2A4u-0x2A0u];

	/* 0x2A4: Filter 12 data 1 register */
	uint32_t volatile F12DATA1;
	/* Filter bits */
#define CAN_F12DATA1_FD0					0u
	/* Filter bits */
#define CAN_F12DATA1_FD1					1u
	/* Filter bits */
#define CAN_F12DATA1_FD2					2u
	/* Filter bits */
#define CAN_F12DATA1_FD3					3u
	/* Filter bits */
#define CAN_F12DATA1_FD4					4u
	/* Filter bits */
#define CAN_F12DATA1_FD5					5u
	/* Filter bits */
#define CAN_F12DATA1_FD6					6u
	/* Filter bits */
#define CAN_F12DATA1_FD7					7u
	/* Filter bits */
#define CAN_F12DATA1_FD8					8u
	/* Filter bits */
#define CAN_F12DATA1_FD9					9u
	/* Filter bits */
#define CAN_F12DATA1_FD10					10u
	/* Filter bits */
#define CAN_F12DATA1_FD11					11u
	/* Filter bits */
#define CAN_F12DATA1_FD12					12u
	/* Filter bits */
#define CAN_F12DATA1_FD13					13u
	/* Filter bits */
#define CAN_F12DATA1_FD14					14u
	/* Filter bits */
#define CAN_F12DATA1_FD15					15u
	/* Filter bits */
#define CAN_F12DATA1_FD16					16u
	/* Filter bits */
#define CAN_F12DATA1_FD17					17u
	/* Filter bits */
#define CAN_F12DATA1_FD18					18u
	/* Filter bits */
#define CAN_F12DATA1_FD19					19u
	/* Filter bits */
#define CAN_F12DATA1_FD20					20u
	/* Filter bits */
#define CAN_F12DATA1_FD21					21u
	/* Filter bits */
#define CAN_F12DATA1_FD22					22u
	/* Filter bits */
#define CAN_F12DATA1_FD23					23u
	/* Filter bits */
#define CAN_F12DATA1_FD24					24u
	/* Filter bits */
#define CAN_F12DATA1_FD25					25u
	/* Filter bits */
#define CAN_F12DATA1_FD26					26u
	/* Filter bits */
#define CAN_F12DATA1_FD27					27u
	/* Filter bits */
#define CAN_F12DATA1_FD28					28u
	/* Filter bits */
#define CAN_F12DATA1_FD29					29u
	/* Filter bits */
#define CAN_F12DATA1_FD30					30u
	/* Filter bits */
#define CAN_F12DATA1_FD31					31u

	/* 0x2A4 */
	uint8_t RESERVED58[0x2A8u-0x2A4u];

	/* 0x2A8: Filter 13 data 0 register */
	uint32_t volatile F13DATA0;
	/* Filter bits */
#define CAN_F13DATA0_FD0					0u
	/* Filter bits */
#define CAN_F13DATA0_FD1					1u
	/* Filter bits */
#define CAN_F13DATA0_FD2					2u
	/* Filter bits */
#define CAN_F13DATA0_FD3					3u
	/* Filter bits */
#define CAN_F13DATA0_FD4					4u
	/* Filter bits */
#define CAN_F13DATA0_FD5					5u
	/* Filter bits */
#define CAN_F13DATA0_FD6					6u
	/* Filter bits */
#define CAN_F13DATA0_FD7					7u
	/* Filter bits */
#define CAN_F13DATA0_FD8					8u
	/* Filter bits */
#define CAN_F13DATA0_FD9					9u
	/* Filter bits */
#define CAN_F13DATA0_FD10					10u
	/* Filter bits */
#define CAN_F13DATA0_FD11					11u
	/* Filter bits */
#define CAN_F13DATA0_FD12					12u
	/* Filter bits */
#define CAN_F13DATA0_FD13					13u
	/* Filter bits */
#define CAN_F13DATA0_FD14					14u
	/* Filter bits */
#define CAN_F13DATA0_FD15					15u
	/* Filter bits */
#define CAN_F13DATA0_FD16					16u
	/* Filter bits */
#define CAN_F13DATA0_FD17					17u
	/* Filter bits */
#define CAN_F13DATA0_FD18					18u
	/* Filter bits */
#define CAN_F13DATA0_FD19					19u
	/* Filter bits */
#define CAN_F13DATA0_FD20					20u
	/* Filter bits */
#define CAN_F13DATA0_FD21					21u
	/* Filter bits */
#define CAN_F13DATA0_FD22					22u
	/* Filter bits */
#define CAN_F13DATA0_FD23					23u
	/* Filter bits */
#define CAN_F13DATA0_FD24					24u
	/* Filter bits */
#define CAN_F13DATA0_FD25					25u
	/* Filter bits */
#define CAN_F13DATA0_FD26					26u
	/* Filter bits */
#define CAN_F13DATA0_FD27					27u
	/* Filter bits */
#define CAN_F13DATA0_FD28					28u
	/* Filter bits */
#define CAN_F13DATA0_FD29					29u
	/* Filter bits */
#define CAN_F13DATA0_FD30					30u
	/* Filter bits */
#define CAN_F13DATA0_FD31					31u

	/* 0x2A8 */
	uint8_t RESERVED59[0x2ACu-0x2A8u];

	/* 0x2AC: Filter 13 data 1 register */
	uint32_t volatile F13DATA1;
	/* Filter bits */
#define CAN_F13DATA1_FD0					0u
	/* Filter bits */
#define CAN_F13DATA1_FD1					1u
	/* Filter bits */
#define CAN_F13DATA1_FD2					2u
	/* Filter bits */
#define CAN_F13DATA1_FD3					3u
	/* Filter bits */
#define CAN_F13DATA1_FD4					4u
	/* Filter bits */
#define CAN_F13DATA1_FD5					5u
	/* Filter bits */
#define CAN_F13DATA1_FD6					6u
	/* Filter bits */
#define CAN_F13DATA1_FD7					7u
	/* Filter bits */
#define CAN_F13DATA1_FD8					8u
	/* Filter bits */
#define CAN_F13DATA1_FD9					9u
	/* Filter bits */
#define CAN_F13DATA1_FD10					10u
	/* Filter bits */
#define CAN_F13DATA1_FD11					11u
	/* Filter bits */
#define CAN_F13DATA1_FD12					12u
	/* Filter bits */
#define CAN_F13DATA1_FD13					13u
	/* Filter bits */
#define CAN_F13DATA1_FD14					14u
	/* Filter bits */
#define CAN_F13DATA1_FD15					15u
	/* Filter bits */
#define CAN_F13DATA1_FD16					16u
	/* Filter bits */
#define CAN_F13DATA1_FD17					17u
	/* Filter bits */
#define CAN_F13DATA1_FD18					18u
	/* Filter bits */
#define CAN_F13DATA1_FD19					19u
	/* Filter bits */
#define CAN_F13DATA1_FD20					20u
	/* Filter bits */
#define CAN_F13DATA1_FD21					21u
	/* Filter bits */
#define CAN_F13DATA1_FD22					22u
	/* Filter bits */
#define CAN_F13DATA1_FD23					23u
	/* Filter bits */
#define CAN_F13DATA1_FD24					24u
	/* Filter bits */
#define CAN_F13DATA1_FD25					25u
	/* Filter bits */
#define CAN_F13DATA1_FD26					26u
	/* Filter bits */
#define CAN_F13DATA1_FD27					27u
	/* Filter bits */
#define CAN_F13DATA1_FD28					28u
	/* Filter bits */
#define CAN_F13DATA1_FD29					29u
	/* Filter bits */
#define CAN_F13DATA1_FD30					30u
	/* Filter bits */
#define CAN_F13DATA1_FD31					31u

	/* 0x2AC */
	uint8_t RESERVED60[0x2B0u-0x2ACu];

	/* 0x2B0: Filter 14 data 0 register */
	uint32_t volatile F14DATA0;
	/* Filter bits */
#define CAN_F14DATA0_FD0					0u
	/* Filter bits */
#define CAN_F14DATA0_FD1					1u
	/* Filter bits */
#define CAN_F14DATA0_FD2					2u
	/* Filter bits */
#define CAN_F14DATA0_FD3					3u
	/* Filter bits */
#define CAN_F14DATA0_FD4					4u
	/* Filter bits */
#define CAN_F14DATA0_FD5					5u
	/* Filter bits */
#define CAN_F14DATA0_FD6					6u
	/* Filter bits */
#define CAN_F14DATA0_FD7					7u
	/* Filter bits */
#define CAN_F14DATA0_FD8					8u
	/* Filter bits */
#define CAN_F14DATA0_FD9					9u
	/* Filter bits */
#define CAN_F14DATA0_FD10					10u
	/* Filter bits */
#define CAN_F14DATA0_FD11					11u
	/* Filter bits */
#define CAN_F14DATA0_FD12					12u
	/* Filter bits */
#define CAN_F14DATA0_FD13					13u
	/* Filter bits */
#define CAN_F14DATA0_FD14					14u
	/* Filter bits */
#define CAN_F14DATA0_FD15					15u
	/* Filter bits */
#define CAN_F14DATA0_FD16					16u
	/* Filter bits */
#define CAN_F14DATA0_FD17					17u
	/* Filter bits */
#define CAN_F14DATA0_FD18					18u
	/* Filter bits */
#define CAN_F14DATA0_FD19					19u
	/* Filter bits */
#define CAN_F14DATA0_FD20					20u
	/* Filter bits */
#define CAN_F14DATA0_FD21					21u
	/* Filter bits */
#define CAN_F14DATA0_FD22					22u
	/* Filter bits */
#define CAN_F14DATA0_FD23					23u
	/* Filter bits */
#define CAN_F14DATA0_FD24					24u
	/* Filter bits */
#define CAN_F14DATA0_FD25					25u
	/* Filter bits */
#define CAN_F14DATA0_FD26					26u
	/* Filter bits */
#define CAN_F14DATA0_FD27					27u
	/* Filter bits */
#define CAN_F14DATA0_FD28					28u
	/* Filter bits */
#define CAN_F14DATA0_FD29					29u
	/* Filter bits */
#define CAN_F14DATA0_FD30					30u
	/* Filter bits */
#define CAN_F14DATA0_FD31					31u

	/* 0x2B0 */
	uint8_t RESERVED61[0x2B4u-0x2B0u];

	/* 0x2B4: Filter 14 data 1 register */
	uint32_t volatile F14DATA1;
	/* Filter bits */
#define CAN_F14DATA1_FD0					0u
	/* Filter bits */
#define CAN_F14DATA1_FD1					1u
	/* Filter bits */
#define CAN_F14DATA1_FD2					2u
	/* Filter bits */
#define CAN_F14DATA1_FD3					3u
	/* Filter bits */
#define CAN_F14DATA1_FD4					4u
	/* Filter bits */
#define CAN_F14DATA1_FD5					5u
	/* Filter bits */
#define CAN_F14DATA1_FD6					6u
	/* Filter bits */
#define CAN_F14DATA1_FD7					7u
	/* Filter bits */
#define CAN_F14DATA1_FD8					8u
	/* Filter bits */
#define CAN_F14DATA1_FD9					9u
	/* Filter bits */
#define CAN_F14DATA1_FD10					10u
	/* Filter bits */
#define CAN_F14DATA1_FD11					11u
	/* Filter bits */
#define CAN_F14DATA1_FD12					12u
	/* Filter bits */
#define CAN_F14DATA1_FD13					13u
	/* Filter bits */
#define CAN_F14DATA1_FD14					14u
	/* Filter bits */
#define CAN_F14DATA1_FD15					15u
	/* Filter bits */
#define CAN_F14DATA1_FD16					16u
	/* Filter bits */
#define CAN_F14DATA1_FD17					17u
	/* Filter bits */
#define CAN_F14DATA1_FD18					18u
	/* Filter bits */
#define CAN_F14DATA1_FD19					19u
	/* Filter bits */
#define CAN_F14DATA1_FD20					20u
	/* Filter bits */
#define CAN_F14DATA1_FD21					21u
	/* Filter bits */
#define CAN_F14DATA1_FD22					22u
	/* Filter bits */
#define CAN_F14DATA1_FD23					23u
	/* Filter bits */
#define CAN_F14DATA1_FD24					24u
	/* Filter bits */
#define CAN_F14DATA1_FD25					25u
	/* Filter bits */
#define CAN_F14DATA1_FD26					26u
	/* Filter bits */
#define CAN_F14DATA1_FD27					27u
	/* Filter bits */
#define CAN_F14DATA1_FD28					28u
	/* Filter bits */
#define CAN_F14DATA1_FD29					29u
	/* Filter bits */
#define CAN_F14DATA1_FD30					30u
	/* Filter bits */
#define CAN_F14DATA1_FD31					31u

	/* 0x2B4 */
	uint8_t RESERVED62[0x2B8u-0x2B4u];

	/* 0x2B8: Filter 15 data 0 register */
	uint32_t volatile F15DATA0;
	/* Filter bits */
#define CAN_F15DATA0_FD0					0u
	/* Filter bits */
#define CAN_F15DATA0_FD1					1u
	/* Filter bits */
#define CAN_F15DATA0_FD2					2u
	/* Filter bits */
#define CAN_F15DATA0_FD3					3u
	/* Filter bits */
#define CAN_F15DATA0_FD4					4u
	/* Filter bits */
#define CAN_F15DATA0_FD5					5u
	/* Filter bits */
#define CAN_F15DATA0_FD6					6u
	/* Filter bits */
#define CAN_F15DATA0_FD7					7u
	/* Filter bits */
#define CAN_F15DATA0_FD8					8u
	/* Filter bits */
#define CAN_F15DATA0_FD9					9u
	/* Filter bits */
#define CAN_F15DATA0_FD10					10u
	/* Filter bits */
#define CAN_F15DATA0_FD11					11u
	/* Filter bits */
#define CAN_F15DATA0_FD12					12u
	/* Filter bits */
#define CAN_F15DATA0_FD13					13u
	/* Filter bits */
#define CAN_F15DATA0_FD14					14u
	/* Filter bits */
#define CAN_F15DATA0_FD15					15u
	/* Filter bits */
#define CAN_F15DATA0_FD16					16u
	/* Filter bits */
#define CAN_F15DATA0_FD17					17u
	/* Filter bits */
#define CAN_F15DATA0_FD18					18u
	/* Filter bits */
#define CAN_F15DATA0_FD19					19u
	/* Filter bits */
#define CAN_F15DATA0_FD20					20u
	/* Filter bits */
#define CAN_F15DATA0_FD21					21u
	/* Filter bits */
#define CAN_F15DATA0_FD22					22u
	/* Filter bits */
#define CAN_F15DATA0_FD23					23u
	/* Filter bits */
#define CAN_F15DATA0_FD24					24u
	/* Filter bits */
#define CAN_F15DATA0_FD25					25u
	/* Filter bits */
#define CAN_F15DATA0_FD26					26u
	/* Filter bits */
#define CAN_F15DATA0_FD27					27u
	/* Filter bits */
#define CAN_F15DATA0_FD28					28u
	/* Filter bits */
#define CAN_F15DATA0_FD29					29u
	/* Filter bits */
#define CAN_F15DATA0_FD30					30u
	/* Filter bits */
#define CAN_F15DATA0_FD31					31u

	/* 0x2B8 */
	uint8_t RESERVED63[0x2BCu-0x2B8u];

	/* 0x2BC: Filter 15 data 1 register */
	uint32_t volatile F15DATA1;
	/* Filter bits */
#define CAN_F15DATA1_FD0					0u
	/* Filter bits */
#define CAN_F15DATA1_FD1					1u
	/* Filter bits */
#define CAN_F15DATA1_FD2					2u
	/* Filter bits */
#define CAN_F15DATA1_FD3					3u
	/* Filter bits */
#define CAN_F15DATA1_FD4					4u
	/* Filter bits */
#define CAN_F15DATA1_FD5					5u
	/* Filter bits */
#define CAN_F15DATA1_FD6					6u
	/* Filter bits */
#define CAN_F15DATA1_FD7					7u
	/* Filter bits */
#define CAN_F15DATA1_FD8					8u
	/* Filter bits */
#define CAN_F15DATA1_FD9					9u
	/* Filter bits */
#define CAN_F15DATA1_FD10					10u
	/* Filter bits */
#define CAN_F15DATA1_FD11					11u
	/* Filter bits */
#define CAN_F15DATA1_FD12					12u
	/* Filter bits */
#define CAN_F15DATA1_FD13					13u
	/* Filter bits */
#define CAN_F15DATA1_FD14					14u
	/* Filter bits */
#define CAN_F15DATA1_FD15					15u
	/* Filter bits */
#define CAN_F15DATA1_FD16					16u
	/* Filter bits */
#define CAN_F15DATA1_FD17					17u
	/* Filter bits */
#define CAN_F15DATA1_FD18					18u
	/* Filter bits */
#define CAN_F15DATA1_FD19					19u
	/* Filter bits */
#define CAN_F15DATA1_FD20					20u
	/* Filter bits */
#define CAN_F15DATA1_FD21					21u
	/* Filter bits */
#define CAN_F15DATA1_FD22					22u
	/* Filter bits */
#define CAN_F15DATA1_FD23					23u
	/* Filter bits */
#define CAN_F15DATA1_FD24					24u
	/* Filter bits */
#define CAN_F15DATA1_FD25					25u
	/* Filter bits */
#define CAN_F15DATA1_FD26					26u
	/* Filter bits */
#define CAN_F15DATA1_FD27					27u
	/* Filter bits */
#define CAN_F15DATA1_FD28					28u
	/* Filter bits */
#define CAN_F15DATA1_FD29					29u
	/* Filter bits */
#define CAN_F15DATA1_FD30					30u
	/* Filter bits */
#define CAN_F15DATA1_FD31					31u

	/* 0x2BC */
	uint8_t RESERVED64[0x2C0u-0x2BCu];

	/* 0x2C0: Filter 16 data 0 register */
	uint32_t volatile F16DATA0;
	/* Filter bits */
#define CAN_F16DATA0_FD0					0u
	/* Filter bits */
#define CAN_F16DATA0_FD1					1u
	/* Filter bits */
#define CAN_F16DATA0_FD2					2u
	/* Filter bits */
#define CAN_F16DATA0_FD3					3u
	/* Filter bits */
#define CAN_F16DATA0_FD4					4u
	/* Filter bits */
#define CAN_F16DATA0_FD5					5u
	/* Filter bits */
#define CAN_F16DATA0_FD6					6u
	/* Filter bits */
#define CAN_F16DATA0_FD7					7u
	/* Filter bits */
#define CAN_F16DATA0_FD8					8u
	/* Filter bits */
#define CAN_F16DATA0_FD9					9u
	/* Filter bits */
#define CAN_F16DATA0_FD10					10u
	/* Filter bits */
#define CAN_F16DATA0_FD11					11u
	/* Filter bits */
#define CAN_F16DATA0_FD12					12u
	/* Filter bits */
#define CAN_F16DATA0_FD13					13u
	/* Filter bits */
#define CAN_F16DATA0_FD14					14u
	/* Filter bits */
#define CAN_F16DATA0_FD15					15u
	/* Filter bits */
#define CAN_F16DATA0_FD16					16u
	/* Filter bits */
#define CAN_F16DATA0_FD17					17u
	/* Filter bits */
#define CAN_F16DATA0_FD18					18u
	/* Filter bits */
#define CAN_F16DATA0_FD19					19u
	/* Filter bits */
#define CAN_F16DATA0_FD20					20u
	/* Filter bits */
#define CAN_F16DATA0_FD21					21u
	/* Filter bits */
#define CAN_F16DATA0_FD22					22u
	/* Filter bits */
#define CAN_F16DATA0_FD23					23u
	/* Filter bits */
#define CAN_F16DATA0_FD24					24u
	/* Filter bits */
#define CAN_F16DATA0_FD25					25u
	/* Filter bits */
#define CAN_F16DATA0_FD26					26u
	/* Filter bits */
#define CAN_F16DATA0_FD27					27u
	/* Filter bits */
#define CAN_F16DATA0_FD28					28u
	/* Filter bits */
#define CAN_F16DATA0_FD29					29u
	/* Filter bits */
#define CAN_F16DATA0_FD30					30u
	/* Filter bits */
#define CAN_F16DATA0_FD31					31u

	/* 0x2C0 */
	uint8_t RESERVED65[0x2C4u-0x2C0u];

	/* 0x2C4: Filter 16 data 1 register */
	uint32_t volatile F16DATA1;
	/* Filter bits */
#define CAN_F16DATA1_FD0					0u
	/* Filter bits */
#define CAN_F16DATA1_FD1					1u
	/* Filter bits */
#define CAN_F16DATA1_FD2					2u
	/* Filter bits */
#define CAN_F16DATA1_FD3					3u
	/* Filter bits */
#define CAN_F16DATA1_FD4					4u
	/* Filter bits */
#define CAN_F16DATA1_FD5					5u
	/* Filter bits */
#define CAN_F16DATA1_FD6					6u
	/* Filter bits */
#define CAN_F16DATA1_FD7					7u
	/* Filter bits */
#define CAN_F16DATA1_FD8					8u
	/* Filter bits */
#define CAN_F16DATA1_FD9					9u
	/* Filter bits */
#define CAN_F16DATA1_FD10					10u
	/* Filter bits */
#define CAN_F16DATA1_FD11					11u
	/* Filter bits */
#define CAN_F16DATA1_FD12					12u
	/* Filter bits */
#define CAN_F16DATA1_FD13					13u
	/* Filter bits */
#define CAN_F16DATA1_FD14					14u
	/* Filter bits */
#define CAN_F16DATA1_FD15					15u
	/* Filter bits */
#define CAN_F16DATA1_FD16					16u
	/* Filter bits */
#define CAN_F16DATA1_FD17					17u
	/* Filter bits */
#define CAN_F16DATA1_FD18					18u
	/* Filter bits */
#define CAN_F16DATA1_FD19					19u
	/* Filter bits */
#define CAN_F16DATA1_FD20					20u
	/* Filter bits */
#define CAN_F16DATA1_FD21					21u
	/* Filter bits */
#define CAN_F16DATA1_FD22					22u
	/* Filter bits */
#define CAN_F16DATA1_FD23					23u
	/* Filter bits */
#define CAN_F16DATA1_FD24					24u
	/* Filter bits */
#define CAN_F16DATA1_FD25					25u
	/* Filter bits */
#define CAN_F16DATA1_FD26					26u
	/* Filter bits */
#define CAN_F16DATA1_FD27					27u
	/* Filter bits */
#define CAN_F16DATA1_FD28					28u
	/* Filter bits */
#define CAN_F16DATA1_FD29					29u
	/* Filter bits */
#define CAN_F16DATA1_FD30					30u
	/* Filter bits */
#define CAN_F16DATA1_FD31					31u

	/* 0x2C4 */
	uint8_t RESERVED66[0x2C8u-0x2C4u];

	/* 0x2C8: Filter 17 data 0 register */
	uint32_t volatile F17DATA0;
	/* Filter bits */
#define CAN_F17DATA0_FD0					0u
	/* Filter bits */
#define CAN_F17DATA0_FD1					1u
	/* Filter bits */
#define CAN_F17DATA0_FD2					2u
	/* Filter bits */
#define CAN_F17DATA0_FD3					3u
	/* Filter bits */
#define CAN_F17DATA0_FD4					4u
	/* Filter bits */
#define CAN_F17DATA0_FD5					5u
	/* Filter bits */
#define CAN_F17DATA0_FD6					6u
	/* Filter bits */
#define CAN_F17DATA0_FD7					7u
	/* Filter bits */
#define CAN_F17DATA0_FD8					8u
	/* Filter bits */
#define CAN_F17DATA0_FD9					9u
	/* Filter bits */
#define CAN_F17DATA0_FD10					10u
	/* Filter bits */
#define CAN_F17DATA0_FD11					11u
	/* Filter bits */
#define CAN_F17DATA0_FD12					12u
	/* Filter bits */
#define CAN_F17DATA0_FD13					13u
	/* Filter bits */
#define CAN_F17DATA0_FD14					14u
	/* Filter bits */
#define CAN_F17DATA0_FD15					15u
	/* Filter bits */
#define CAN_F17DATA0_FD16					16u
	/* Filter bits */
#define CAN_F17DATA0_FD17					17u
	/* Filter bits */
#define CAN_F17DATA0_FD18					18u
	/* Filter bits */
#define CAN_F17DATA0_FD19					19u
	/* Filter bits */
#define CAN_F17DATA0_FD20					20u
	/* Filter bits */
#define CAN_F17DATA0_FD21					21u
	/* Filter bits */
#define CAN_F17DATA0_FD22					22u
	/* Filter bits */
#define CAN_F17DATA0_FD23					23u
	/* Filter bits */
#define CAN_F17DATA0_FD24					24u
	/* Filter bits */
#define CAN_F17DATA0_FD25					25u
	/* Filter bits */
#define CAN_F17DATA0_FD26					26u
	/* Filter bits */
#define CAN_F17DATA0_FD27					27u
	/* Filter bits */
#define CAN_F17DATA0_FD28					28u
	/* Filter bits */
#define CAN_F17DATA0_FD29					29u
	/* Filter bits */
#define CAN_F17DATA0_FD30					30u
	/* Filter bits */
#define CAN_F17DATA0_FD31					31u

	/* 0x2C8 */
	uint8_t RESERVED67[0x2CCu-0x2C8u];

	/* 0x2CC: Filter 17 data 1 register */
	uint32_t volatile F17DATA1;
	/* Filter bits */
#define CAN_F17DATA1_FD0					0u
	/* Filter bits */
#define CAN_F17DATA1_FD1					1u
	/* Filter bits */
#define CAN_F17DATA1_FD2					2u
	/* Filter bits */
#define CAN_F17DATA1_FD3					3u
	/* Filter bits */
#define CAN_F17DATA1_FD4					4u
	/* Filter bits */
#define CAN_F17DATA1_FD5					5u
	/* Filter bits */
#define CAN_F17DATA1_FD6					6u
	/* Filter bits */
#define CAN_F17DATA1_FD7					7u
	/* Filter bits */
#define CAN_F17DATA1_FD8					8u
	/* Filter bits */
#define CAN_F17DATA1_FD9					9u
	/* Filter bits */
#define CAN_F17DATA1_FD10					10u
	/* Filter bits */
#define CAN_F17DATA1_FD11					11u
	/* Filter bits */
#define CAN_F17DATA1_FD12					12u
	/* Filter bits */
#define CAN_F17DATA1_FD13					13u
	/* Filter bits */
#define CAN_F17DATA1_FD14					14u
	/* Filter bits */
#define CAN_F17DATA1_FD15					15u
	/* Filter bits */
#define CAN_F17DATA1_FD16					16u
	/* Filter bits */
#define CAN_F17DATA1_FD17					17u
	/* Filter bits */
#define CAN_F17DATA1_FD18					18u
	/* Filter bits */
#define CAN_F17DATA1_FD19					19u
	/* Filter bits */
#define CAN_F17DATA1_FD20					20u
	/* Filter bits */
#define CAN_F17DATA1_FD21					21u
	/* Filter bits */
#define CAN_F17DATA1_FD22					22u
	/* Filter bits */
#define CAN_F17DATA1_FD23					23u
	/* Filter bits */
#define CAN_F17DATA1_FD24					24u
	/* Filter bits */
#define CAN_F17DATA1_FD25					25u
	/* Filter bits */
#define CAN_F17DATA1_FD26					26u
	/* Filter bits */
#define CAN_F17DATA1_FD27					27u
	/* Filter bits */
#define CAN_F17DATA1_FD28					28u
	/* Filter bits */
#define CAN_F17DATA1_FD29					29u
	/* Filter bits */
#define CAN_F17DATA1_FD30					30u
	/* Filter bits */
#define CAN_F17DATA1_FD31					31u

	/* 0x2CC */
	uint8_t RESERVED68[0x2D0u-0x2CCu];

	/* 0x2D0: Filter 18 data 0 register */
	uint32_t volatile F18DATA0;
	/* Filter bits */
#define CAN_F18DATA0_FD0					0u
	/* Filter bits */
#define CAN_F18DATA0_FD1					1u
	/* Filter bits */
#define CAN_F18DATA0_FD2					2u
	/* Filter bits */
#define CAN_F18DATA0_FD3					3u
	/* Filter bits */
#define CAN_F18DATA0_FD4					4u
	/* Filter bits */
#define CAN_F18DATA0_FD5					5u
	/* Filter bits */
#define CAN_F18DATA0_FD6					6u
	/* Filter bits */
#define CAN_F18DATA0_FD7					7u
	/* Filter bits */
#define CAN_F18DATA0_FD8					8u
	/* Filter bits */
#define CAN_F18DATA0_FD9					9u
	/* Filter bits */
#define CAN_F18DATA0_FD10					10u
	/* Filter bits */
#define CAN_F18DATA0_FD11					11u
	/* Filter bits */
#define CAN_F18DATA0_FD12					12u
	/* Filter bits */
#define CAN_F18DATA0_FD13					13u
	/* Filter bits */
#define CAN_F18DATA0_FD14					14u
	/* Filter bits */
#define CAN_F18DATA0_FD15					15u
	/* Filter bits */
#define CAN_F18DATA0_FD16					16u
	/* Filter bits */
#define CAN_F18DATA0_FD17					17u
	/* Filter bits */
#define CAN_F18DATA0_FD18					18u
	/* Filter bits */
#define CAN_F18DATA0_FD19					19u
	/* Filter bits */
#define CAN_F18DATA0_FD20					20u
	/* Filter bits */
#define CAN_F18DATA0_FD21					21u
	/* Filter bits */
#define CAN_F18DATA0_FD22					22u
	/* Filter bits */
#define CAN_F18DATA0_FD23					23u
	/* Filter bits */
#define CAN_F18DATA0_FD24					24u
	/* Filter bits */
#define CAN_F18DATA0_FD25					25u
	/* Filter bits */
#define CAN_F18DATA0_FD26					26u
	/* Filter bits */
#define CAN_F18DATA0_FD27					27u
	/* Filter bits */
#define CAN_F18DATA0_FD28					28u
	/* Filter bits */
#define CAN_F18DATA0_FD29					29u
	/* Filter bits */
#define CAN_F18DATA0_FD30					30u
	/* Filter bits */
#define CAN_F18DATA0_FD31					31u

	/* 0x2D0 */
	uint8_t RESERVED69[0x2D4u-0x2D0u];

	/* 0x2D4: Filter 18 data 1 register */
	uint32_t volatile F18DATA1;
	/* Filter bits */
#define CAN_F18DATA1_FD0					0u
	/* Filter bits */
#define CAN_F18DATA1_FD1					1u
	/* Filter bits */
#define CAN_F18DATA1_FD2					2u
	/* Filter bits */
#define CAN_F18DATA1_FD3					3u
	/* Filter bits */
#define CAN_F18DATA1_FD4					4u
	/* Filter bits */
#define CAN_F18DATA1_FD5					5u
	/* Filter bits */
#define CAN_F18DATA1_FD6					6u
	/* Filter bits */
#define CAN_F18DATA1_FD7					7u
	/* Filter bits */
#define CAN_F18DATA1_FD8					8u
	/* Filter bits */
#define CAN_F18DATA1_FD9					9u
	/* Filter bits */
#define CAN_F18DATA1_FD10					10u
	/* Filter bits */
#define CAN_F18DATA1_FD11					11u
	/* Filter bits */
#define CAN_F18DATA1_FD12					12u
	/* Filter bits */
#define CAN_F18DATA1_FD13					13u
	/* Filter bits */
#define CAN_F18DATA1_FD14					14u
	/* Filter bits */
#define CAN_F18DATA1_FD15					15u
	/* Filter bits */
#define CAN_F18DATA1_FD16					16u
	/* Filter bits */
#define CAN_F18DATA1_FD17					17u
	/* Filter bits */
#define CAN_F18DATA1_FD18					18u
	/* Filter bits */
#define CAN_F18DATA1_FD19					19u
	/* Filter bits */
#define CAN_F18DATA1_FD20					20u
	/* Filter bits */
#define CAN_F18DATA1_FD21					21u
	/* Filter bits */
#define CAN_F18DATA1_FD22					22u
	/* Filter bits */
#define CAN_F18DATA1_FD23					23u
	/* Filter bits */
#define CAN_F18DATA1_FD24					24u
	/* Filter bits */
#define CAN_F18DATA1_FD25					25u
	/* Filter bits */
#define CAN_F18DATA1_FD26					26u
	/* Filter bits */
#define CAN_F18DATA1_FD27					27u
	/* Filter bits */
#define CAN_F18DATA1_FD28					28u
	/* Filter bits */
#define CAN_F18DATA1_FD29					29u
	/* Filter bits */
#define CAN_F18DATA1_FD30					30u
	/* Filter bits */
#define CAN_F18DATA1_FD31					31u

	/* 0x2D4 */
	uint8_t RESERVED70[0x2D8u-0x2D4u];

	/* 0x2D8: Filter 19 data 0 register */
	uint32_t volatile F19DATA0;
	/* Filter bits */
#define CAN_F19DATA0_FD0					0u
	/* Filter bits */
#define CAN_F19DATA0_FD1					1u
	/* Filter bits */
#define CAN_F19DATA0_FD2					2u
	/* Filter bits */
#define CAN_F19DATA0_FD3					3u
	/* Filter bits */
#define CAN_F19DATA0_FD4					4u
	/* Filter bits */
#define CAN_F19DATA0_FD5					5u
	/* Filter bits */
#define CAN_F19DATA0_FD6					6u
	/* Filter bits */
#define CAN_F19DATA0_FD7					7u
	/* Filter bits */
#define CAN_F19DATA0_FD8					8u
	/* Filter bits */
#define CAN_F19DATA0_FD9					9u
	/* Filter bits */
#define CAN_F19DATA0_FD10					10u
	/* Filter bits */
#define CAN_F19DATA0_FD11					11u
	/* Filter bits */
#define CAN_F19DATA0_FD12					12u
	/* Filter bits */
#define CAN_F19DATA0_FD13					13u
	/* Filter bits */
#define CAN_F19DATA0_FD14					14u
	/* Filter bits */
#define CAN_F19DATA0_FD15					15u
	/* Filter bits */
#define CAN_F19DATA0_FD16					16u
	/* Filter bits */
#define CAN_F19DATA0_FD17					17u
	/* Filter bits */
#define CAN_F19DATA0_FD18					18u
	/* Filter bits */
#define CAN_F19DATA0_FD19					19u
	/* Filter bits */
#define CAN_F19DATA0_FD20					20u
	/* Filter bits */
#define CAN_F19DATA0_FD21					21u
	/* Filter bits */
#define CAN_F19DATA0_FD22					22u
	/* Filter bits */
#define CAN_F19DATA0_FD23					23u
	/* Filter bits */
#define CAN_F19DATA0_FD24					24u
	/* Filter bits */
#define CAN_F19DATA0_FD25					25u
	/* Filter bits */
#define CAN_F19DATA0_FD26					26u
	/* Filter bits */
#define CAN_F19DATA0_FD27					27u
	/* Filter bits */
#define CAN_F19DATA0_FD28					28u
	/* Filter bits */
#define CAN_F19DATA0_FD29					29u
	/* Filter bits */
#define CAN_F19DATA0_FD30					30u
	/* Filter bits */
#define CAN_F19DATA0_FD31					31u

	/* 0x2D8 */
	uint8_t RESERVED71[0x2DCu-0x2D8u];

	/* 0x2DC: Filter 19 data 1 register */
	uint32_t volatile F19DATA1;
	/* Filter bits */
#define CAN_F19DATA1_FD0					0u
	/* Filter bits */
#define CAN_F19DATA1_FD1					1u
	/* Filter bits */
#define CAN_F19DATA1_FD2					2u
	/* Filter bits */
#define CAN_F19DATA1_FD3					3u
	/* Filter bits */
#define CAN_F19DATA1_FD4					4u
	/* Filter bits */
#define CAN_F19DATA1_FD5					5u
	/* Filter bits */
#define CAN_F19DATA1_FD6					6u
	/* Filter bits */
#define CAN_F19DATA1_FD7					7u
	/* Filter bits */
#define CAN_F19DATA1_FD8					8u
	/* Filter bits */
#define CAN_F19DATA1_FD9					9u
	/* Filter bits */
#define CAN_F19DATA1_FD10					10u
	/* Filter bits */
#define CAN_F19DATA1_FD11					11u
	/* Filter bits */
#define CAN_F19DATA1_FD12					12u
	/* Filter bits */
#define CAN_F19DATA1_FD13					13u
	/* Filter bits */
#define CAN_F19DATA1_FD14					14u
	/* Filter bits */
#define CAN_F19DATA1_FD15					15u
	/* Filter bits */
#define CAN_F19DATA1_FD16					16u
	/* Filter bits */
#define CAN_F19DATA1_FD17					17u
	/* Filter bits */
#define CAN_F19DATA1_FD18					18u
	/* Filter bits */
#define CAN_F19DATA1_FD19					19u
	/* Filter bits */
#define CAN_F19DATA1_FD20					20u
	/* Filter bits */
#define CAN_F19DATA1_FD21					21u
	/* Filter bits */
#define CAN_F19DATA1_FD22					22u
	/* Filter bits */
#define CAN_F19DATA1_FD23					23u
	/* Filter bits */
#define CAN_F19DATA1_FD24					24u
	/* Filter bits */
#define CAN_F19DATA1_FD25					25u
	/* Filter bits */
#define CAN_F19DATA1_FD26					26u
	/* Filter bits */
#define CAN_F19DATA1_FD27					27u
	/* Filter bits */
#define CAN_F19DATA1_FD28					28u
	/* Filter bits */
#define CAN_F19DATA1_FD29					29u
	/* Filter bits */
#define CAN_F19DATA1_FD30					30u
	/* Filter bits */
#define CAN_F19DATA1_FD31					31u

	/* 0x2DC */
	uint8_t RESERVED72[0x2E0u-0x2DCu];

	/* 0x2E0: Filter 20 data 0 register */
	uint32_t volatile F20DATA0;
	/* Filter bits */
#define CAN_F20DATA0_FD0					0u
	/* Filter bits */
#define CAN_F20DATA0_FD1					1u
	/* Filter bits */
#define CAN_F20DATA0_FD2					2u
	/* Filter bits */
#define CAN_F20DATA0_FD3					3u
	/* Filter bits */
#define CAN_F20DATA0_FD4					4u
	/* Filter bits */
#define CAN_F20DATA0_FD5					5u
	/* Filter bits */
#define CAN_F20DATA0_FD6					6u
	/* Filter bits */
#define CAN_F20DATA0_FD7					7u
	/* Filter bits */
#define CAN_F20DATA0_FD8					8u
	/* Filter bits */
#define CAN_F20DATA0_FD9					9u
	/* Filter bits */
#define CAN_F20DATA0_FD10					10u
	/* Filter bits */
#define CAN_F20DATA0_FD11					11u
	/* Filter bits */
#define CAN_F20DATA0_FD12					12u
	/* Filter bits */
#define CAN_F20DATA0_FD13					13u
	/* Filter bits */
#define CAN_F20DATA0_FD14					14u
	/* Filter bits */
#define CAN_F20DATA0_FD15					15u
	/* Filter bits */
#define CAN_F20DATA0_FD16					16u
	/* Filter bits */
#define CAN_F20DATA0_FD17					17u
	/* Filter bits */
#define CAN_F20DATA0_FD18					18u
	/* Filter bits */
#define CAN_F20DATA0_FD19					19u
	/* Filter bits */
#define CAN_F20DATA0_FD20					20u
	/* Filter bits */
#define CAN_F20DATA0_FD21					21u
	/* Filter bits */
#define CAN_F20DATA0_FD22					22u
	/* Filter bits */
#define CAN_F20DATA0_FD23					23u
	/* Filter bits */
#define CAN_F20DATA0_FD24					24u
	/* Filter bits */
#define CAN_F20DATA0_FD25					25u
	/* Filter bits */
#define CAN_F20DATA0_FD26					26u
	/* Filter bits */
#define CAN_F20DATA0_FD27					27u
	/* Filter bits */
#define CAN_F20DATA0_FD28					28u
	/* Filter bits */
#define CAN_F20DATA0_FD29					29u
	/* Filter bits */
#define CAN_F20DATA0_FD30					30u
	/* Filter bits */
#define CAN_F20DATA0_FD31					31u

	/* 0x2E0 */
	uint8_t RESERVED73[0x2E4u-0x2E0u];

	/* 0x2E4: Filter 20 data 1 register */
	uint32_t volatile F20DATA1;
	/* Filter bits */
#define CAN_F20DATA1_FD0					0u
	/* Filter bits */
#define CAN_F20DATA1_FD1					1u
	/* Filter bits */
#define CAN_F20DATA1_FD2					2u
	/* Filter bits */
#define CAN_F20DATA1_FD3					3u
	/* Filter bits */
#define CAN_F20DATA1_FD4					4u
	/* Filter bits */
#define CAN_F20DATA1_FD5					5u
	/* Filter bits */
#define CAN_F20DATA1_FD6					6u
	/* Filter bits */
#define CAN_F20DATA1_FD7					7u
	/* Filter bits */
#define CAN_F20DATA1_FD8					8u
	/* Filter bits */
#define CAN_F20DATA1_FD9					9u
	/* Filter bits */
#define CAN_F20DATA1_FD10					10u
	/* Filter bits */
#define CAN_F20DATA1_FD11					11u
	/* Filter bits */
#define CAN_F20DATA1_FD12					12u
	/* Filter bits */
#define CAN_F20DATA1_FD13					13u
	/* Filter bits */
#define CAN_F20DATA1_FD14					14u
	/* Filter bits */
#define CAN_F20DATA1_FD15					15u
	/* Filter bits */
#define CAN_F20DATA1_FD16					16u
	/* Filter bits */
#define CAN_F20DATA1_FD17					17u
	/* Filter bits */
#define CAN_F20DATA1_FD18					18u
	/* Filter bits */
#define CAN_F20DATA1_FD19					19u
	/* Filter bits */
#define CAN_F20DATA1_FD20					20u
	/* Filter bits */
#define CAN_F20DATA1_FD21					21u
	/* Filter bits */
#define CAN_F20DATA1_FD22					22u
	/* Filter bits */
#define CAN_F20DATA1_FD23					23u
	/* Filter bits */
#define CAN_F20DATA1_FD24					24u
	/* Filter bits */
#define CAN_F20DATA1_FD25					25u
	/* Filter bits */
#define CAN_F20DATA1_FD26					26u
	/* Filter bits */
#define CAN_F20DATA1_FD27					27u
	/* Filter bits */
#define CAN_F20DATA1_FD28					28u
	/* Filter bits */
#define CAN_F20DATA1_FD29					29u
	/* Filter bits */
#define CAN_F20DATA1_FD30					30u
	/* Filter bits */
#define CAN_F20DATA1_FD31					31u

	/* 0x2E4 */
	uint8_t RESERVED74[0x2E8u-0x2E4u];

	/* 0x2E8: Filter 21 data 0 register */
	uint32_t volatile F21DATA0;
	/* Filter bits */
#define CAN_F21DATA0_FD0					0u
	/* Filter bits */
#define CAN_F21DATA0_FD1					1u
	/* Filter bits */
#define CAN_F21DATA0_FD2					2u
	/* Filter bits */
#define CAN_F21DATA0_FD3					3u
	/* Filter bits */
#define CAN_F21DATA0_FD4					4u
	/* Filter bits */
#define CAN_F21DATA0_FD5					5u
	/* Filter bits */
#define CAN_F21DATA0_FD6					6u
	/* Filter bits */
#define CAN_F21DATA0_FD7					7u
	/* Filter bits */
#define CAN_F21DATA0_FD8					8u
	/* Filter bits */
#define CAN_F21DATA0_FD9					9u
	/* Filter bits */
#define CAN_F21DATA0_FD10					10u
	/* Filter bits */
#define CAN_F21DATA0_FD11					11u
	/* Filter bits */
#define CAN_F21DATA0_FD12					12u
	/* Filter bits */
#define CAN_F21DATA0_FD13					13u
	/* Filter bits */
#define CAN_F21DATA0_FD14					14u
	/* Filter bits */
#define CAN_F21DATA0_FD15					15u
	/* Filter bits */
#define CAN_F21DATA0_FD16					16u
	/* Filter bits */
#define CAN_F21DATA0_FD17					17u
	/* Filter bits */
#define CAN_F21DATA0_FD18					18u
	/* Filter bits */
#define CAN_F21DATA0_FD19					19u
	/* Filter bits */
#define CAN_F21DATA0_FD20					20u
	/* Filter bits */
#define CAN_F21DATA0_FD21					21u
	/* Filter bits */
#define CAN_F21DATA0_FD22					22u
	/* Filter bits */
#define CAN_F21DATA0_FD23					23u
	/* Filter bits */
#define CAN_F21DATA0_FD24					24u
	/* Filter bits */
#define CAN_F21DATA0_FD25					25u
	/* Filter bits */
#define CAN_F21DATA0_FD26					26u
	/* Filter bits */
#define CAN_F21DATA0_FD27					27u
	/* Filter bits */
#define CAN_F21DATA0_FD28					28u
	/* Filter bits */
#define CAN_F21DATA0_FD29					29u
	/* Filter bits */
#define CAN_F21DATA0_FD30					30u
	/* Filter bits */
#define CAN_F21DATA0_FD31					31u

	/* 0x2E8 */
	uint8_t RESERVED75[0x2ECu-0x2E8u];

	/* 0x2EC: Filter 21 data 1 register */
	uint32_t volatile F21DATA1;
	/* Filter bits */
#define CAN_F21DATA1_FD0					0u
	/* Filter bits */
#define CAN_F21DATA1_FD1					1u
	/* Filter bits */
#define CAN_F21DATA1_FD2					2u
	/* Filter bits */
#define CAN_F21DATA1_FD3					3u
	/* Filter bits */
#define CAN_F21DATA1_FD4					4u
	/* Filter bits */
#define CAN_F21DATA1_FD5					5u
	/* Filter bits */
#define CAN_F21DATA1_FD6					6u
	/* Filter bits */
#define CAN_F21DATA1_FD7					7u
	/* Filter bits */
#define CAN_F21DATA1_FD8					8u
	/* Filter bits */
#define CAN_F21DATA1_FD9					9u
	/* Filter bits */
#define CAN_F21DATA1_FD10					10u
	/* Filter bits */
#define CAN_F21DATA1_FD11					11u
	/* Filter bits */
#define CAN_F21DATA1_FD12					12u
	/* Filter bits */
#define CAN_F21DATA1_FD13					13u
	/* Filter bits */
#define CAN_F21DATA1_FD14					14u
	/* Filter bits */
#define CAN_F21DATA1_FD15					15u
	/* Filter bits */
#define CAN_F21DATA1_FD16					16u
	/* Filter bits */
#define CAN_F21DATA1_FD17					17u
	/* Filter bits */
#define CAN_F21DATA1_FD18					18u
	/* Filter bits */
#define CAN_F21DATA1_FD19					19u
	/* Filter bits */
#define CAN_F21DATA1_FD20					20u
	/* Filter bits */
#define CAN_F21DATA1_FD21					21u
	/* Filter bits */
#define CAN_F21DATA1_FD22					22u
	/* Filter bits */
#define CAN_F21DATA1_FD23					23u
	/* Filter bits */
#define CAN_F21DATA1_FD24					24u
	/* Filter bits */
#define CAN_F21DATA1_FD25					25u
	/* Filter bits */
#define CAN_F21DATA1_FD26					26u
	/* Filter bits */
#define CAN_F21DATA1_FD27					27u
	/* Filter bits */
#define CAN_F21DATA1_FD28					28u
	/* Filter bits */
#define CAN_F21DATA1_FD29					29u
	/* Filter bits */
#define CAN_F21DATA1_FD30					30u
	/* Filter bits */
#define CAN_F21DATA1_FD31					31u

	/* 0x2EC */
	uint8_t RESERVED76[0x2F0u-0x2ECu];

	/* 0x2F0: Filter 22 data 0 register */
	uint32_t volatile F22DATA0;
	/* Filter bits */
#define CAN_F22DATA0_FD0					0u
	/* Filter bits */
#define CAN_F22DATA0_FD1					1u
	/* Filter bits */
#define CAN_F22DATA0_FD2					2u
	/* Filter bits */
#define CAN_F22DATA0_FD3					3u
	/* Filter bits */
#define CAN_F22DATA0_FD4					4u
	/* Filter bits */
#define CAN_F22DATA0_FD5					5u
	/* Filter bits */
#define CAN_F22DATA0_FD6					6u
	/* Filter bits */
#define CAN_F22DATA0_FD7					7u
	/* Filter bits */
#define CAN_F22DATA0_FD8					8u
	/* Filter bits */
#define CAN_F22DATA0_FD9					9u
	/* Filter bits */
#define CAN_F22DATA0_FD10					10u
	/* Filter bits */
#define CAN_F22DATA0_FD11					11u
	/* Filter bits */
#define CAN_F22DATA0_FD12					12u
	/* Filter bits */
#define CAN_F22DATA0_FD13					13u
	/* Filter bits */
#define CAN_F22DATA0_FD14					14u
	/* Filter bits */
#define CAN_F22DATA0_FD15					15u
	/* Filter bits */
#define CAN_F22DATA0_FD16					16u
	/* Filter bits */
#define CAN_F22DATA0_FD17					17u
	/* Filter bits */
#define CAN_F22DATA0_FD18					18u
	/* Filter bits */
#define CAN_F22DATA0_FD19					19u
	/* Filter bits */
#define CAN_F22DATA0_FD20					20u
	/* Filter bits */
#define CAN_F22DATA0_FD21					21u
	/* Filter bits */
#define CAN_F22DATA0_FD22					22u
	/* Filter bits */
#define CAN_F22DATA0_FD23					23u
	/* Filter bits */
#define CAN_F22DATA0_FD24					24u
	/* Filter bits */
#define CAN_F22DATA0_FD25					25u
	/* Filter bits */
#define CAN_F22DATA0_FD26					26u
	/* Filter bits */
#define CAN_F22DATA0_FD27					27u
	/* Filter bits */
#define CAN_F22DATA0_FD28					28u
	/* Filter bits */
#define CAN_F22DATA0_FD29					29u
	/* Filter bits */
#define CAN_F22DATA0_FD30					30u
	/* Filter bits */
#define CAN_F22DATA0_FD31					31u

	/* 0x2F0 */
	uint8_t RESERVED77[0x2F4u-0x2F0u];

	/* 0x2F4: Filter 22 data 1 register */
	uint32_t volatile F22DATA1;
	/* Filter bits */
#define CAN_F22DATA1_FD0					0u
	/* Filter bits */
#define CAN_F22DATA1_FD1					1u
	/* Filter bits */
#define CAN_F22DATA1_FD2					2u
	/* Filter bits */
#define CAN_F22DATA1_FD3					3u
	/* Filter bits */
#define CAN_F22DATA1_FD4					4u
	/* Filter bits */
#define CAN_F22DATA1_FD5					5u
	/* Filter bits */
#define CAN_F22DATA1_FD6					6u
	/* Filter bits */
#define CAN_F22DATA1_FD7					7u
	/* Filter bits */
#define CAN_F22DATA1_FD8					8u
	/* Filter bits */
#define CAN_F22DATA1_FD9					9u
	/* Filter bits */
#define CAN_F22DATA1_FD10					10u
	/* Filter bits */
#define CAN_F22DATA1_FD11					11u
	/* Filter bits */
#define CAN_F22DATA1_FD12					12u
	/* Filter bits */
#define CAN_F22DATA1_FD13					13u
	/* Filter bits */
#define CAN_F22DATA1_FD14					14u
	/* Filter bits */
#define CAN_F22DATA1_FD15					15u
	/* Filter bits */
#define CAN_F22DATA1_FD16					16u
	/* Filter bits */
#define CAN_F22DATA1_FD17					17u
	/* Filter bits */
#define CAN_F22DATA1_FD18					18u
	/* Filter bits */
#define CAN_F22DATA1_FD19					19u
	/* Filter bits */
#define CAN_F22DATA1_FD20					20u
	/* Filter bits */
#define CAN_F22DATA1_FD21					21u
	/* Filter bits */
#define CAN_F22DATA1_FD22					22u
	/* Filter bits */
#define CAN_F22DATA1_FD23					23u
	/* Filter bits */
#define CAN_F22DATA1_FD24					24u
	/* Filter bits */
#define CAN_F22DATA1_FD25					25u
	/* Filter bits */
#define CAN_F22DATA1_FD26					26u
	/* Filter bits */
#define CAN_F22DATA1_FD27					27u
	/* Filter bits */
#define CAN_F22DATA1_FD28					28u
	/* Filter bits */
#define CAN_F22DATA1_FD29					29u
	/* Filter bits */
#define CAN_F22DATA1_FD30					30u
	/* Filter bits */
#define CAN_F22DATA1_FD31					31u

	/* 0x2F4 */
	uint8_t RESERVED78[0x2F8u-0x2F4u];

	/* 0x2F8: Filter 23 data 0 register */
	uint32_t volatile F23DATA0;
	/* Filter bits */
#define CAN_F23DATA0_FD0					0u
	/* Filter bits */
#define CAN_F23DATA0_FD1					1u
	/* Filter bits */
#define CAN_F23DATA0_FD2					2u
	/* Filter bits */
#define CAN_F23DATA0_FD3					3u
	/* Filter bits */
#define CAN_F23DATA0_FD4					4u
	/* Filter bits */
#define CAN_F23DATA0_FD5					5u
	/* Filter bits */
#define CAN_F23DATA0_FD6					6u
	/* Filter bits */
#define CAN_F23DATA0_FD7					7u
	/* Filter bits */
#define CAN_F23DATA0_FD8					8u
	/* Filter bits */
#define CAN_F23DATA0_FD9					9u
	/* Filter bits */
#define CAN_F23DATA0_FD10					10u
	/* Filter bits */
#define CAN_F23DATA0_FD11					11u
	/* Filter bits */
#define CAN_F23DATA0_FD12					12u
	/* Filter bits */
#define CAN_F23DATA0_FD13					13u
	/* Filter bits */
#define CAN_F23DATA0_FD14					14u
	/* Filter bits */
#define CAN_F23DATA0_FD15					15u
	/* Filter bits */
#define CAN_F23DATA0_FD16					16u
	/* Filter bits */
#define CAN_F23DATA0_FD17					17u
	/* Filter bits */
#define CAN_F23DATA0_FD18					18u
	/* Filter bits */
#define CAN_F23DATA0_FD19					19u
	/* Filter bits */
#define CAN_F23DATA0_FD20					20u
	/* Filter bits */
#define CAN_F23DATA0_FD21					21u
	/* Filter bits */
#define CAN_F23DATA0_FD22					22u
	/* Filter bits */
#define CAN_F23DATA0_FD23					23u
	/* Filter bits */
#define CAN_F23DATA0_FD24					24u
	/* Filter bits */
#define CAN_F23DATA0_FD25					25u
	/* Filter bits */
#define CAN_F23DATA0_FD26					26u
	/* Filter bits */
#define CAN_F23DATA0_FD27					27u
	/* Filter bits */
#define CAN_F23DATA0_FD28					28u
	/* Filter bits */
#define CAN_F23DATA0_FD29					29u
	/* Filter bits */
#define CAN_F23DATA0_FD30					30u
	/* Filter bits */
#define CAN_F23DATA0_FD31					31u

	/* 0x2F8 */
	uint8_t RESERVED79[0x2FCu-0x2F8u];

	/* 0x2FC: Filter 23 data 1 register */
	uint32_t volatile F23DATA1;
	/* Filter bits */
#define CAN_F23DATA1_FD0					0u
	/* Filter bits */
#define CAN_F23DATA1_FD1					1u
	/* Filter bits */
#define CAN_F23DATA1_FD2					2u
	/* Filter bits */
#define CAN_F23DATA1_FD3					3u
	/* Filter bits */
#define CAN_F23DATA1_FD4					4u
	/* Filter bits */
#define CAN_F23DATA1_FD5					5u
	/* Filter bits */
#define CAN_F23DATA1_FD6					6u
	/* Filter bits */
#define CAN_F23DATA1_FD7					7u
	/* Filter bits */
#define CAN_F23DATA1_FD8					8u
	/* Filter bits */
#define CAN_F23DATA1_FD9					9u
	/* Filter bits */
#define CAN_F23DATA1_FD10					10u
	/* Filter bits */
#define CAN_F23DATA1_FD11					11u
	/* Filter bits */
#define CAN_F23DATA1_FD12					12u
	/* Filter bits */
#define CAN_F23DATA1_FD13					13u
	/* Filter bits */
#define CAN_F23DATA1_FD14					14u
	/* Filter bits */
#define CAN_F23DATA1_FD15					15u
	/* Filter bits */
#define CAN_F23DATA1_FD16					16u
	/* Filter bits */
#define CAN_F23DATA1_FD17					17u
	/* Filter bits */
#define CAN_F23DATA1_FD18					18u
	/* Filter bits */
#define CAN_F23DATA1_FD19					19u
	/* Filter bits */
#define CAN_F23DATA1_FD20					20u
	/* Filter bits */
#define CAN_F23DATA1_FD21					21u
	/* Filter bits */
#define CAN_F23DATA1_FD22					22u
	/* Filter bits */
#define CAN_F23DATA1_FD23					23u
	/* Filter bits */
#define CAN_F23DATA1_FD24					24u
	/* Filter bits */
#define CAN_F23DATA1_FD25					25u
	/* Filter bits */
#define CAN_F23DATA1_FD26					26u
	/* Filter bits */
#define CAN_F23DATA1_FD27					27u
	/* Filter bits */
#define CAN_F23DATA1_FD28					28u
	/* Filter bits */
#define CAN_F23DATA1_FD29					29u
	/* Filter bits */
#define CAN_F23DATA1_FD30					30u
	/* Filter bits */
#define CAN_F23DATA1_FD31					31u

	/* 0x2FC */
	uint8_t RESERVED80[0x300u-0x2FCu];

	/* 0x300: Filter 24 data 0 register */
	uint32_t volatile F24DATA0;
	/* Filter bits */
#define CAN_F24DATA0_FD0					0u
	/* Filter bits */
#define CAN_F24DATA0_FD1					1u
	/* Filter bits */
#define CAN_F24DATA0_FD2					2u
	/* Filter bits */
#define CAN_F24DATA0_FD3					3u
	/* Filter bits */
#define CAN_F24DATA0_FD4					4u
	/* Filter bits */
#define CAN_F24DATA0_FD5					5u
	/* Filter bits */
#define CAN_F24DATA0_FD6					6u
	/* Filter bits */
#define CAN_F24DATA0_FD7					7u
	/* Filter bits */
#define CAN_F24DATA0_FD8					8u
	/* Filter bits */
#define CAN_F24DATA0_FD9					9u
	/* Filter bits */
#define CAN_F24DATA0_FD10					10u
	/* Filter bits */
#define CAN_F24DATA0_FD11					11u
	/* Filter bits */
#define CAN_F24DATA0_FD12					12u
	/* Filter bits */
#define CAN_F24DATA0_FD13					13u
	/* Filter bits */
#define CAN_F24DATA0_FD14					14u
	/* Filter bits */
#define CAN_F24DATA0_FD15					15u
	/* Filter bits */
#define CAN_F24DATA0_FD16					16u
	/* Filter bits */
#define CAN_F24DATA0_FD17					17u
	/* Filter bits */
#define CAN_F24DATA0_FD18					18u
	/* Filter bits */
#define CAN_F24DATA0_FD19					19u
	/* Filter bits */
#define CAN_F24DATA0_FD20					20u
	/* Filter bits */
#define CAN_F24DATA0_FD21					21u
	/* Filter bits */
#define CAN_F24DATA0_FD22					22u
	/* Filter bits */
#define CAN_F24DATA0_FD23					23u
	/* Filter bits */
#define CAN_F24DATA0_FD24					24u
	/* Filter bits */
#define CAN_F24DATA0_FD25					25u
	/* Filter bits */
#define CAN_F24DATA0_FD26					26u
	/* Filter bits */
#define CAN_F24DATA0_FD27					27u
	/* Filter bits */
#define CAN_F24DATA0_FD28					28u
	/* Filter bits */
#define CAN_F24DATA0_FD29					29u
	/* Filter bits */
#define CAN_F24DATA0_FD30					30u
	/* Filter bits */
#define CAN_F24DATA0_FD31					31u

	/* 0x300 */
	uint8_t RESERVED81[0x304u-0x300u];

	/* 0x304: Filter 24 data 1 register */
	uint32_t volatile F24DATA1;
	/* Filter bits */
#define CAN_F24DATA1_FD0					0u
	/* Filter bits */
#define CAN_F24DATA1_FD1					1u
	/* Filter bits */
#define CAN_F24DATA1_FD2					2u
	/* Filter bits */
#define CAN_F24DATA1_FD3					3u
	/* Filter bits */
#define CAN_F24DATA1_FD4					4u
	/* Filter bits */
#define CAN_F24DATA1_FD5					5u
	/* Filter bits */
#define CAN_F24DATA1_FD6					6u
	/* Filter bits */
#define CAN_F24DATA1_FD7					7u
	/* Filter bits */
#define CAN_F24DATA1_FD8					8u
	/* Filter bits */
#define CAN_F24DATA1_FD9					9u
	/* Filter bits */
#define CAN_F24DATA1_FD10					10u
	/* Filter bits */
#define CAN_F24DATA1_FD11					11u
	/* Filter bits */
#define CAN_F24DATA1_FD12					12u
	/* Filter bits */
#define CAN_F24DATA1_FD13					13u
	/* Filter bits */
#define CAN_F24DATA1_FD14					14u
	/* Filter bits */
#define CAN_F24DATA1_FD15					15u
	/* Filter bits */
#define CAN_F24DATA1_FD16					16u
	/* Filter bits */
#define CAN_F24DATA1_FD17					17u
	/* Filter bits */
#define CAN_F24DATA1_FD18					18u
	/* Filter bits */
#define CAN_F24DATA1_FD19					19u
	/* Filter bits */
#define CAN_F24DATA1_FD20					20u
	/* Filter bits */
#define CAN_F24DATA1_FD21					21u
	/* Filter bits */
#define CAN_F24DATA1_FD22					22u
	/* Filter bits */
#define CAN_F24DATA1_FD23					23u
	/* Filter bits */
#define CAN_F24DATA1_FD24					24u
	/* Filter bits */
#define CAN_F24DATA1_FD25					25u
	/* Filter bits */
#define CAN_F24DATA1_FD26					26u
	/* Filter bits */
#define CAN_F24DATA1_FD27					27u
	/* Filter bits */
#define CAN_F24DATA1_FD28					28u
	/* Filter bits */
#define CAN_F24DATA1_FD29					29u
	/* Filter bits */
#define CAN_F24DATA1_FD30					30u
	/* Filter bits */
#define CAN_F24DATA1_FD31					31u

	/* 0x304 */
	uint8_t RESERVED82[0x308u-0x304u];

	/* 0x308: Filter 25 data 0 register */
	uint32_t volatile F25DATA0;
	/* Filter bits */
#define CAN_F25DATA0_FD0					0u
	/* Filter bits */
#define CAN_F25DATA0_FD1					1u
	/* Filter bits */
#define CAN_F25DATA0_FD2					2u
	/* Filter bits */
#define CAN_F25DATA0_FD3					3u
	/* Filter bits */
#define CAN_F25DATA0_FD4					4u
	/* Filter bits */
#define CAN_F25DATA0_FD5					5u
	/* Filter bits */
#define CAN_F25DATA0_FD6					6u
	/* Filter bits */
#define CAN_F25DATA0_FD7					7u
	/* Filter bits */
#define CAN_F25DATA0_FD8					8u
	/* Filter bits */
#define CAN_F25DATA0_FD9					9u
	/* Filter bits */
#define CAN_F25DATA0_FD10					10u
	/* Filter bits */
#define CAN_F25DATA0_FD11					11u
	/* Filter bits */
#define CAN_F25DATA0_FD12					12u
	/* Filter bits */
#define CAN_F25DATA0_FD13					13u
	/* Filter bits */
#define CAN_F25DATA0_FD14					14u
	/* Filter bits */
#define CAN_F25DATA0_FD15					15u
	/* Filter bits */
#define CAN_F25DATA0_FD16					16u
	/* Filter bits */
#define CAN_F25DATA0_FD17					17u
	/* Filter bits */
#define CAN_F25DATA0_FD18					18u
	/* Filter bits */
#define CAN_F25DATA0_FD19					19u
	/* Filter bits */
#define CAN_F25DATA0_FD20					20u
	/* Filter bits */
#define CAN_F25DATA0_FD21					21u
	/* Filter bits */
#define CAN_F25DATA0_FD22					22u
	/* Filter bits */
#define CAN_F25DATA0_FD23					23u
	/* Filter bits */
#define CAN_F25DATA0_FD24					24u
	/* Filter bits */
#define CAN_F25DATA0_FD25					25u
	/* Filter bits */
#define CAN_F25DATA0_FD26					26u
	/* Filter bits */
#define CAN_F25DATA0_FD27					27u
	/* Filter bits */
#define CAN_F25DATA0_FD28					28u
	/* Filter bits */
#define CAN_F25DATA0_FD29					29u
	/* Filter bits */
#define CAN_F25DATA0_FD30					30u
	/* Filter bits */
#define CAN_F25DATA0_FD31					31u

	/* 0x308 */
	uint8_t RESERVED83[0x30Cu-0x308u];

	/* 0x30C: Filter 25 data 1 register */
	uint32_t volatile F25DATA1;
	/* Filter bits */
#define CAN_F25DATA1_FD0					0u
	/* Filter bits */
#define CAN_F25DATA1_FD1					1u
	/* Filter bits */
#define CAN_F25DATA1_FD2					2u
	/* Filter bits */
#define CAN_F25DATA1_FD3					3u
	/* Filter bits */
#define CAN_F25DATA1_FD4					4u
	/* Filter bits */
#define CAN_F25DATA1_FD5					5u
	/* Filter bits */
#define CAN_F25DATA1_FD6					6u
	/* Filter bits */
#define CAN_F25DATA1_FD7					7u
	/* Filter bits */
#define CAN_F25DATA1_FD8					8u
	/* Filter bits */
#define CAN_F25DATA1_FD9					9u
	/* Filter bits */
#define CAN_F25DATA1_FD10					10u
	/* Filter bits */
#define CAN_F25DATA1_FD11					11u
	/* Filter bits */
#define CAN_F25DATA1_FD12					12u
	/* Filter bits */
#define CAN_F25DATA1_FD13					13u
	/* Filter bits */
#define CAN_F25DATA1_FD14					14u
	/* Filter bits */
#define CAN_F25DATA1_FD15					15u
	/* Filter bits */
#define CAN_F25DATA1_FD16					16u
	/* Filter bits */
#define CAN_F25DATA1_FD17					17u
	/* Filter bits */
#define CAN_F25DATA1_FD18					18u
	/* Filter bits */
#define CAN_F25DATA1_FD19					19u
	/* Filter bits */
#define CAN_F25DATA1_FD20					20u
	/* Filter bits */
#define CAN_F25DATA1_FD21					21u
	/* Filter bits */
#define CAN_F25DATA1_FD22					22u
	/* Filter bits */
#define CAN_F25DATA1_FD23					23u
	/* Filter bits */
#define CAN_F25DATA1_FD24					24u
	/* Filter bits */
#define CAN_F25DATA1_FD25					25u
	/* Filter bits */
#define CAN_F25DATA1_FD26					26u
	/* Filter bits */
#define CAN_F25DATA1_FD27					27u
	/* Filter bits */
#define CAN_F25DATA1_FD28					28u
	/* Filter bits */
#define CAN_F25DATA1_FD29					29u
	/* Filter bits */
#define CAN_F25DATA1_FD30					30u
	/* Filter bits */
#define CAN_F25DATA1_FD31					31u

	/* 0x30C */
	uint8_t RESERVED84[0x310u-0x30Cu];

	/* 0x310: Filter 26 data 0 register */
	uint32_t volatile F26DATA0;
	/* Filter bits */
#define CAN_F26DATA0_FD0					0u
	/* Filter bits */
#define CAN_F26DATA0_FD1					1u
	/* Filter bits */
#define CAN_F26DATA0_FD2					2u
	/* Filter bits */
#define CAN_F26DATA0_FD3					3u
	/* Filter bits */
#define CAN_F26DATA0_FD4					4u
	/* Filter bits */
#define CAN_F26DATA0_FD5					5u
	/* Filter bits */
#define CAN_F26DATA0_FD6					6u
	/* Filter bits */
#define CAN_F26DATA0_FD7					7u
	/* Filter bits */
#define CAN_F26DATA0_FD8					8u
	/* Filter bits */
#define CAN_F26DATA0_FD9					9u
	/* Filter bits */
#define CAN_F26DATA0_FD10					10u
	/* Filter bits */
#define CAN_F26DATA0_FD11					11u
	/* Filter bits */
#define CAN_F26DATA0_FD12					12u
	/* Filter bits */
#define CAN_F26DATA0_FD13					13u
	/* Filter bits */
#define CAN_F26DATA0_FD14					14u
	/* Filter bits */
#define CAN_F26DATA0_FD15					15u
	/* Filter bits */
#define CAN_F26DATA0_FD16					16u
	/* Filter bits */
#define CAN_F26DATA0_FD17					17u
	/* Filter bits */
#define CAN_F26DATA0_FD18					18u
	/* Filter bits */
#define CAN_F26DATA0_FD19					19u
	/* Filter bits */
#define CAN_F26DATA0_FD20					20u
	/* Filter bits */
#define CAN_F26DATA0_FD21					21u
	/* Filter bits */
#define CAN_F26DATA0_FD22					22u
	/* Filter bits */
#define CAN_F26DATA0_FD23					23u
	/* Filter bits */
#define CAN_F26DATA0_FD24					24u
	/* Filter bits */
#define CAN_F26DATA0_FD25					25u
	/* Filter bits */
#define CAN_F26DATA0_FD26					26u
	/* Filter bits */
#define CAN_F26DATA0_FD27					27u
	/* Filter bits */
#define CAN_F26DATA0_FD28					28u
	/* Filter bits */
#define CAN_F26DATA0_FD29					29u
	/* Filter bits */
#define CAN_F26DATA0_FD30					30u
	/* Filter bits */
#define CAN_F26DATA0_FD31					31u

	/* 0x310 */
	uint8_t RESERVED85[0x314u-0x310u];

	/* 0x314: Filter 26 data 1 register */
	uint32_t volatile F26DATA1;
	/* Filter bits */
#define CAN_F26DATA1_FD0					0u
	/* Filter bits */
#define CAN_F26DATA1_FD1					1u
	/* Filter bits */
#define CAN_F26DATA1_FD2					2u
	/* Filter bits */
#define CAN_F26DATA1_FD3					3u
	/* Filter bits */
#define CAN_F26DATA1_FD4					4u
	/* Filter bits */
#define CAN_F26DATA1_FD5					5u
	/* Filter bits */
#define CAN_F26DATA1_FD6					6u
	/* Filter bits */
#define CAN_F26DATA1_FD7					7u
	/* Filter bits */
#define CAN_F26DATA1_FD8					8u
	/* Filter bits */
#define CAN_F26DATA1_FD9					9u
	/* Filter bits */
#define CAN_F26DATA1_FD10					10u
	/* Filter bits */
#define CAN_F26DATA1_FD11					11u
	/* Filter bits */
#define CAN_F26DATA1_FD12					12u
	/* Filter bits */
#define CAN_F26DATA1_FD13					13u
	/* Filter bits */
#define CAN_F26DATA1_FD14					14u
	/* Filter bits */
#define CAN_F26DATA1_FD15					15u
	/* Filter bits */
#define CAN_F26DATA1_FD16					16u
	/* Filter bits */
#define CAN_F26DATA1_FD17					17u
	/* Filter bits */
#define CAN_F26DATA1_FD18					18u
	/* Filter bits */
#define CAN_F26DATA1_FD19					19u
	/* Filter bits */
#define CAN_F26DATA1_FD20					20u
	/* Filter bits */
#define CAN_F26DATA1_FD21					21u
	/* Filter bits */
#define CAN_F26DATA1_FD22					22u
	/* Filter bits */
#define CAN_F26DATA1_FD23					23u
	/* Filter bits */
#define CAN_F26DATA1_FD24					24u
	/* Filter bits */
#define CAN_F26DATA1_FD25					25u
	/* Filter bits */
#define CAN_F26DATA1_FD26					26u
	/* Filter bits */
#define CAN_F26DATA1_FD27					27u
	/* Filter bits */
#define CAN_F26DATA1_FD28					28u
	/* Filter bits */
#define CAN_F26DATA1_FD29					29u
	/* Filter bits */
#define CAN_F26DATA1_FD30					30u
	/* Filter bits */
#define CAN_F26DATA1_FD31					31u

	/* 0x314 */
	uint8_t RESERVED86[0x318u-0x314u];

	/* 0x318: Filter 27 data 0 register */
	uint32_t volatile F27DATA0;
	/* Filter bits */
#define CAN_F27DATA0_FD0					0u
	/* Filter bits */
#define CAN_F27DATA0_FD1					1u
	/* Filter bits */
#define CAN_F27DATA0_FD2					2u
	/* Filter bits */
#define CAN_F27DATA0_FD3					3u
	/* Filter bits */
#define CAN_F27DATA0_FD4					4u
	/* Filter bits */
#define CAN_F27DATA0_FD5					5u
	/* Filter bits */
#define CAN_F27DATA0_FD6					6u
	/* Filter bits */
#define CAN_F27DATA0_FD7					7u
	/* Filter bits */
#define CAN_F27DATA0_FD8					8u
	/* Filter bits */
#define CAN_F27DATA0_FD9					9u
	/* Filter bits */
#define CAN_F27DATA0_FD10					10u
	/* Filter bits */
#define CAN_F27DATA0_FD11					11u
	/* Filter bits */
#define CAN_F27DATA0_FD12					12u
	/* Filter bits */
#define CAN_F27DATA0_FD13					13u
	/* Filter bits */
#define CAN_F27DATA0_FD14					14u
	/* Filter bits */
#define CAN_F27DATA0_FD15					15u
	/* Filter bits */
#define CAN_F27DATA0_FD16					16u
	/* Filter bits */
#define CAN_F27DATA0_FD17					17u
	/* Filter bits */
#define CAN_F27DATA0_FD18					18u
	/* Filter bits */
#define CAN_F27DATA0_FD19					19u
	/* Filter bits */
#define CAN_F27DATA0_FD20					20u
	/* Filter bits */
#define CAN_F27DATA0_FD21					21u
	/* Filter bits */
#define CAN_F27DATA0_FD22					22u
	/* Filter bits */
#define CAN_F27DATA0_FD23					23u
	/* Filter bits */
#define CAN_F27DATA0_FD24					24u
	/* Filter bits */
#define CAN_F27DATA0_FD25					25u
	/* Filter bits */
#define CAN_F27DATA0_FD26					26u
	/* Filter bits */
#define CAN_F27DATA0_FD27					27u
	/* Filter bits */
#define CAN_F27DATA0_FD28					28u
	/* Filter bits */
#define CAN_F27DATA0_FD29					29u
	/* Filter bits */
#define CAN_F27DATA0_FD30					30u
	/* Filter bits */
#define CAN_F27DATA0_FD31					31u

	/* 0x318 */
	uint8_t RESERVED87[0x31Cu-0x318u];

	/* 0x31C: Filter 27 data 1 register */
	uint32_t volatile F27DATA1;
	/* Filter bits */
#define CAN_F27DATA1_FD0					0u
	/* Filter bits */
#define CAN_F27DATA1_FD1					1u
	/* Filter bits */
#define CAN_F27DATA1_FD2					2u
	/* Filter bits */
#define CAN_F27DATA1_FD3					3u
	/* Filter bits */
#define CAN_F27DATA1_FD4					4u
	/* Filter bits */
#define CAN_F27DATA1_FD5					5u
	/* Filter bits */
#define CAN_F27DATA1_FD6					6u
	/* Filter bits */
#define CAN_F27DATA1_FD7					7u
	/* Filter bits */
#define CAN_F27DATA1_FD8					8u
	/* Filter bits */
#define CAN_F27DATA1_FD9					9u
	/* Filter bits */
#define CAN_F27DATA1_FD10					10u
	/* Filter bits */
#define CAN_F27DATA1_FD11					11u
	/* Filter bits */
#define CAN_F27DATA1_FD12					12u
	/* Filter bits */
#define CAN_F27DATA1_FD13					13u
	/* Filter bits */
#define CAN_F27DATA1_FD14					14u
	/* Filter bits */
#define CAN_F27DATA1_FD15					15u
	/* Filter bits */
#define CAN_F27DATA1_FD16					16u
	/* Filter bits */
#define CAN_F27DATA1_FD17					17u
	/* Filter bits */
#define CAN_F27DATA1_FD18					18u
	/* Filter bits */
#define CAN_F27DATA1_FD19					19u
	/* Filter bits */
#define CAN_F27DATA1_FD20					20u
	/* Filter bits */
#define CAN_F27DATA1_FD21					21u
	/* Filter bits */
#define CAN_F27DATA1_FD22					22u
	/* Filter bits */
#define CAN_F27DATA1_FD23					23u
	/* Filter bits */
#define CAN_F27DATA1_FD24					24u
	/* Filter bits */
#define CAN_F27DATA1_FD25					25u
	/* Filter bits */
#define CAN_F27DATA1_FD26					26u
	/* Filter bits */
#define CAN_F27DATA1_FD27					27u
	/* Filter bits */
#define CAN_F27DATA1_FD28					28u
	/* Filter bits */
#define CAN_F27DATA1_FD29					29u
	/* Filter bits */
#define CAN_F27DATA1_FD30					30u
	/* Filter bits */
#define CAN_F27DATA1_FD31					31u

};


#define CRC ((struct sdk_crc *)0x40023000)

struct sdk_crc {

	/* 0x00: Data register */
	uint32_t volatile DATA;
	/* CRC calculation result bits */
#define CRC_DATA_DATA_msb					31u
#define CRC_DATA_DATA_lsb					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Free data register */
	uint32_t volatile FDATA;
	/* Free Data Register bits */
#define CRC_FDATA_FDATA_msb					7u
#define CRC_FDATA_FDATA_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Control register */
	uint32_t volatile CTL;
	/* reset bit */
#define CRC_CTL_RST						0u

};


#define DAC ((struct sdk_dac *)0x40007400)

struct sdk_dac {

	/* 0x00: control register */
	uint32_t volatile CTL;
	/* DAC0 enable */
#define DAC_CTL_DEN0						0u
	/* DAC0 output buffer turn off */
#define DAC_CTL_DBOFF0						1u
	/* DAC0 trigger enable */
#define DAC_CTL_DTEN0						2u
	/* DAC0 trigger selection */
#define DAC_CTL_DTSEL0_msb					5u
#define DAC_CTL_DTSEL0_lsb					3u
	/* DAC0 noise wave mode */
#define DAC_CTL_DWM0_msb					7u
#define DAC_CTL_DWM0_lsb					6u
	/* DAC0 noise wave bit width */
#define DAC_CTL_DWBW0_msb					11u
#define DAC_CTL_DWBW0_lsb					8u
	/* DAC0 DMA enable */
#define DAC_CTL_DDMAEN0						12u
	/* DAC1 enable */
#define DAC_CTL_DEN1						16u
	/* DAC1 output buffer turn off */
#define DAC_CTL_DBOFF1						17u
	/* DAC1 trigger enable */
#define DAC_CTL_DTEN1						18u
	/* DAC1 trigger selection */
#define DAC_CTL_DTSEL1_msb					21u
#define DAC_CTL_DTSEL1_lsb					19u
	/* DAC1 noise wave mode */
#define DAC_CTL_DWM1_msb					23u
#define DAC_CTL_DWM1_lsb					22u
	/* DAC1 noise wave bit width */
#define DAC_CTL_DWBW1_msb					27u
#define DAC_CTL_DWBW1_lsb					24u
	/* DAC1 DMA enable */
#define DAC_CTL_DDMAEN1						28u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: software trigger register */
	uint32_t volatile SWT;
	/* DAC0 software trigger */
#define DAC_SWT_SWTR0						0u
	/* DAC1 software trigger */
#define DAC_SWT_SWTR1						1u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: DAC0 12-bit right-aligned data holding register */
	uint32_t volatile DAC0_R12DH;
	/* DAC0 12-bit right-aligned */
#define DAC_DAC0_R12DH_DAC0_DH_msb				11u
#define DAC_DAC0_R12DH_DAC0_DH_lsb				0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: DAC0 12-bit left-aligned data holding register */
	uint32_t volatile DAC0_L12DH;
	/* DAC0 12-bit left-aligned */
#define DAC_DAC0_L12DH_DAC0_DH_msb				15u
#define DAC_DAC0_L12DH_DAC0_DH_lsb				4u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: DAC0 8-bit right aligned data holding */
	uint32_t volatile DAC0_R8DH;
	/* DAC0 8-bit right-aligned */
#define DAC_DAC0_R8DH_DAC0_DH_msb				7u
#define DAC_DAC0_R8DH_DAC0_DH_lsb				0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: DAC1 12-bit right-aligned data holding */
	uint32_t volatile DAC1_R12DH;
	/* DAC1 12-bit right-aligned */
#define DAC_DAC1_R12DH_DAC1_DH_msb				11u
#define DAC_DAC1_R12DH_DAC1_DH_lsb				0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: DAC1 12-bit left aligned data holding */
	uint32_t volatile DAC1_L12DH;
	/* DAC1 12-bit left-aligned */
#define DAC_DAC1_L12DH_DAC1_DH_msb				15u
#define DAC_DAC1_L12DH_DAC1_DH_lsb				4u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: DAC1 8-bit right aligned data holding */
	uint32_t volatile DAC1_R8DH;
	/* DAC1 8-bit right-aligned */
#define DAC_DAC1_R8DH_DAC1_DH_msb				7u
#define DAC_DAC1_R8DH_DAC1_DH_lsb				0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: DAC concurrent mode 12-bit right-aligned data holding */
	uint32_t volatile DACC_R12DH;
	/* DAC0 12-bit right-aligned */
#define DAC_DACC_R12DH_DAC0_DH_msb				11u
#define DAC_DACC_R12DH_DAC0_DH_lsb				0u
	/* DAC1 12-bit right-aligned */
#define DAC_DACC_R12DH_DAC1_DH_msb				27u
#define DAC_DACC_R12DH_DAC1_DH_lsb				16u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: DAC concurrent mode 12-bit left aligned data holding */
	uint32_t volatile DACC_L12DH;
	/* DAC0 12-bit left-aligned */
#define DAC_DACC_L12DH_DAC0_DH_msb				15u
#define DAC_DACC_L12DH_DAC0_DH_lsb				4u
	/* DAC1 12-bit left-aligned */
#define DAC_DACC_L12DH_DAC1_DH_msb				31u
#define DAC_DACC_L12DH_DAC1_DH_lsb				20u

	/* 0x24 */
	uint8_t RESERVED9[0x28u-0x24u];

	/* 0x28: DAC concurrent mode 8-bit right aligned data holding */
	uint32_t volatile DACC_R8DH;
	/* DAC0 8-bit right-aligned */
#define DAC_DACC_R8DH_DAC0_DH_msb				7u
#define DAC_DACC_R8DH_DAC0_DH_lsb				0u
	/* DAC1 8-bit right-aligned */
#define DAC_DACC_R8DH_DAC1_DH_msb				15u
#define DAC_DACC_R8DH_DAC1_DH_lsb				8u

	/* 0x28 */
	uint8_t RESERVED10[0x2Cu-0x28u];

	/* 0x2C: DAC0 data output register */
	uint32_t volatile DAC0_DO;
	/* DAC0 data output */
#define DAC_DAC0_DO_DAC0_DO_msb					11u
#define DAC_DAC0_DO_DAC0_DO_lsb					0u

	/* 0x2C */
	uint8_t RESERVED11[0x30u-0x2Cu];

	/* 0x30: DAC1 data output register */
	uint32_t volatile DAC1_DO;
	/* DAC1 data output */
#define DAC_DAC1_DO_DAC1_DO_msb					11u
#define DAC_DAC1_DO_DAC1_DO_lsb					0u

};


#define DBG ((struct sdk_dbg *)0xE0042000)

struct sdk_dbg {

	/* 0x00: ID code register */
	uint32_t volatile ID;
	/* DBG ID code register */
#define DBG_ID_ID_CODE_msb					31u
#define DBG_ID_ID_CODE_lsb					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Control register 0 */
	uint32_t volatile CTL;
	/* Sleep mode hold register */
#define DBG_CTL_SLP_HOLD					0u
	/* Deep-sleep mode hold register */
#define DBG_CTL_DSLP_HOLD					1u
	/* Standby mode hold register */
#define DBG_CTL_STB_HOLD					2u
	/* FWDGT hold bit */
#define DBG_CTL_FWDGT_HOLD					8u
	/* WWDGT hold bit */
#define DBG_CTL_WWDGT_HOLD					9u
	/* TIMER 0 hold bit */
#define DBG_CTL_TIMER0_HOLD					10u
	/* TIMER 1 hold bit */
#define DBG_CTL_TIMER1_HOLD					11u
	/* TIMER 2 hold bit */
#define DBG_CTL_TIMER2_HOLD					12u
	/* TIMER 23 hold bit */
#define DBG_CTL_TIMER3_HOLD					13u
	/* CAN0 hold bit */
#define DBG_CTL_CAN0_HOLD					14u
	/* I2C0 hold bit */
#define DBG_CTL_I2C0_HOLD					15u
	/* I2C1 hold bit */
#define DBG_CTL_I2C1_HOLD					16u
	/* TIMER4_HOLD */
#define DBG_CTL_TIMER4_HOLD					18u
	/* TIMER 5 hold bit */
#define DBG_CTL_TIMER5_HOLD					19u
	/* TIMER 6 hold bit */
#define DBG_CTL_TIMER6_HOLD					20u
	/* CAN1 hold bit */
#define DBG_CTL_CAN1_HOLD					21u

};


#define DMA0 ((struct sdk_dma0 *)0x40020000)

struct sdk_dma0 {

	/* 0x00: Interrupt flag register */
	uint32_t volatile INTF;
	/* Global interrupt flag of channel 0 */
#define DMA0_INTF_GIF0						0u
	/* Full Transfer finish flag of channe 0 */
#define DMA0_INTF_FTFIF0					1u
	/* Half transfer finish flag of channel 0 */
#define DMA0_INTF_HTFIF0					2u
	/* Error flag of channel 0 */
#define DMA0_INTF_ERRIF0					3u
	/* Global interrupt flag of channel 1 */
#define DMA0_INTF_GIF1						4u
	/* Full Transfer finish flag of channe 1 */
#define DMA0_INTF_FTFIF1					5u
	/* Half transfer finish flag of channel 1 */
#define DMA0_INTF_HTFIF1					6u
	/* Error flag of channel 1 */
#define DMA0_INTF_ERRIF1					7u
	/* Global interrupt flag of channel 2 */
#define DMA0_INTF_GIF2						8u
	/* Full Transfer finish flag of channe 2 */
#define DMA0_INTF_FTFIF2					9u
	/* Half transfer finish flag of channel 2 */
#define DMA0_INTF_HTFIF2					10u
	/* Error flag of channel 2 */
#define DMA0_INTF_ERRIF2					11u
	/* Global interrupt flag of channel 3 */
#define DMA0_INTF_GIF3						12u
	/* Full Transfer finish flag of channe 3 */
#define DMA0_INTF_FTFIF3					13u
	/* Half transfer finish flag of channel 3 */
#define DMA0_INTF_HTFIF3					14u
	/* Error flag of channel 3 */
#define DMA0_INTF_ERRIF3					15u
	/* Global interrupt flag of channel 4 */
#define DMA0_INTF_GIF4						16u
	/* Full Transfer finish flag of channe 4 */
#define DMA0_INTF_FTFIF4					17u
	/* Half transfer finish flag of channel 4 */
#define DMA0_INTF_HTFIF4					18u
	/* Error flag of channel 4 */
#define DMA0_INTF_ERRIF4					19u
	/* Global interrupt flag of channel 5 */
#define DMA0_INTF_GIF5						20u
	/* Full Transfer finish flag of channe 5 */
#define DMA0_INTF_FTFIF5					21u
	/* Half transfer finish flag of channel 5 */
#define DMA0_INTF_HTFIF5					22u
	/* Error flag of channel 5 */
#define DMA0_INTF_ERRIF5					23u
	/* Global interrupt flag of channel 6 */
#define DMA0_INTF_GIF6						24u
	/* Full Transfer finish flag of channe 6 */
#define DMA0_INTF_FTFIF6					25u
	/* Half transfer finish flag of channel 6 */
#define DMA0_INTF_HTFIF6					26u
	/* Error flag of channel 6 */
#define DMA0_INTF_ERRIF6					27u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Interrupt flag clear register */
	uint32_t volatile INTC;
	/* Clear global interrupt flag of channel 0 */
#define DMA0_INTC_GIFC0						0u
	/* Clear bit for full transfer finish flag of channel 0 */
#define DMA0_INTC_FTFIFC0					1u
	/* Clear bit for half transfer finish flag of channel 0 */
#define DMA0_INTC_HTFIFC0					2u
	/* Clear bit for error flag of channel 0 */
#define DMA0_INTC_ERRIFC0					3u
	/* Clear global interrupt flag of channel 1 */
#define DMA0_INTC_GIFC1						4u
	/* Clear bit for full transfer finish flag of channel 1 */
#define DMA0_INTC_FTFIFC1					5u
	/* Clear bit for half transfer finish flag of channel 1 */
#define DMA0_INTC_HTFIFC1					6u
	/* Clear bit for error flag of channel 1 */
#define DMA0_INTC_ERRIFC1					7u
	/* Clear global interrupt flag of channel 2 */
#define DMA0_INTC_GIFC2						8u
	/* Clear bit for full transfer finish flag of channel 2 */
#define DMA0_INTC_FTFIFC2					9u
	/* Clear bit for half transfer finish flag of channel 2 */
#define DMA0_INTC_HTFIFC2					10u
	/* Clear bit for error flag of channel 2 */
#define DMA0_INTC_ERRIFC2					11u
	/* Clear global interrupt flag of channel 3 */
#define DMA0_INTC_GIFC3						12u
	/* Clear bit for full transfer finish flag of channel 3 */
#define DMA0_INTC_FTFIFC3					13u
	/* Clear bit for half transfer finish flag of channel 3 */
#define DMA0_INTC_HTFIFC3					14u
	/* Clear bit for error flag of channel 3 */
#define DMA0_INTC_ERRIFC3					15u
	/* Clear global interrupt flag of channel 4 */
#define DMA0_INTC_GIFC4						16u
	/* Clear bit for full transfer finish flag of channel 4 */
#define DMA0_INTC_FTFIFC4					17u
	/* Clear bit for half transfer finish flag of channel 4 */
#define DMA0_INTC_HTFIFC4					18u
	/* Clear bit for error flag of channel 4 */
#define DMA0_INTC_ERRIFC4					19u
	/* Clear global interrupt flag of channel 5 */
#define DMA0_INTC_GIFC5						20u
	/* Clear bit for full transfer finish flag of channel 5 */
#define DMA0_INTC_FTFIFC5					21u
	/* Clear bit for half transfer finish flag of channel 5 */
#define DMA0_INTC_HTFIFC5					22u
	/* Clear bit for error flag of channel 5 */
#define DMA0_INTC_ERRIFC5					23u
	/* Clear global interrupt flag of channel 6 */
#define DMA0_INTC_GIFC6						24u
	/* Clear bit for full transfer finish flag of channel 6 */
#define DMA0_INTC_FTFIFC6					25u
	/* Clear bit for half transfer finish flag of channel 6 */
#define DMA0_INTC_HTFIFC6					26u
	/* Clear bit for error flag of channel 6 */
#define DMA0_INTC_ERRIFC6					27u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Channel 0 control register */
	uint32_t volatile CH0CTL;
	/* Channel enable */
#define DMA0_CH0CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA0_CH0CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA0_CH0CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA0_CH0CTL_ERRIE					3u
	/* Transfer direction */
#define DMA0_CH0CTL_DIR						4u
	/* Circular mode enable */
#define DMA0_CH0CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA0_CH0CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA0_CH0CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA0_CH0CTL_PWIDTH_msb					9u
#define DMA0_CH0CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA0_CH0CTL_MWIDTH_msb					11u
#define DMA0_CH0CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA0_CH0CTL_PRIO_msb					13u
#define DMA0_CH0CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA0_CH0CTL_M2M						14u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Channel 0 counter register */
	uint32_t volatile CH0CNT;
	/* Transfer counter */
#define DMA0_CH0CNT_CNT_msb					15u
#define DMA0_CH0CNT_CNT_lsb					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Channel 0 peripheral base address register */
	uint32_t volatile CH0PADDR;
	/* Peripheral base address */
#define DMA0_CH0PADDR_PADDR_msb					31u
#define DMA0_CH0PADDR_PADDR_lsb					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Channel 0 memory base address register */
	uint32_t volatile CH0MADDR;
	/* Memory base address */
#define DMA0_CH0MADDR_MADDR_msb					31u
#define DMA0_CH0MADDR_MADDR_lsb					0u

	/* 0x14 */
	uint8_t RESERVED5[0x1Cu-0x14u];

	/* 0x1C: Channel 1 control register */
	uint32_t volatile CH1CTL;
	/* Channel enable */
#define DMA0_CH1CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA0_CH1CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA0_CH1CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA0_CH1CTL_ERRIE					3u
	/* Transfer direction */
#define DMA0_CH1CTL_DIR						4u
	/* Circular mode enable */
#define DMA0_CH1CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA0_CH1CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA0_CH1CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA0_CH1CTL_PWIDTH_msb					9u
#define DMA0_CH1CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA0_CH1CTL_MWIDTH_msb					11u
#define DMA0_CH1CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA0_CH1CTL_PRIO_msb					13u
#define DMA0_CH1CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA0_CH1CTL_M2M						14u

	/* 0x1C */
	uint8_t RESERVED6[0x20u-0x1Cu];

	/* 0x20: Channel 1 counter register */
	uint32_t volatile CH1CNT;
	/* Transfer counter */
#define DMA0_CH1CNT_CNT_msb					15u
#define DMA0_CH1CNT_CNT_lsb					0u

	/* 0x20 */
	uint8_t RESERVED7[0x24u-0x20u];

	/* 0x24: Channel 1 peripheral base address register */
	uint32_t volatile CH1PADDR;
	/* Peripheral base address */
#define DMA0_CH1PADDR_PADDR_msb					31u
#define DMA0_CH1PADDR_PADDR_lsb					0u

	/* 0x24 */
	uint8_t RESERVED8[0x28u-0x24u];

	/* 0x28: Channel 1 memory base address register */
	uint32_t volatile CH1MADDR;
	/* Memory base address */
#define DMA0_CH1MADDR_MADDR_msb					31u
#define DMA0_CH1MADDR_MADDR_lsb					0u

	/* 0x28 */
	uint8_t RESERVED9[0x30u-0x28u];

	/* 0x30: Channel 2 control register */
	uint32_t volatile CH2CTL;
	/* Channel enable */
#define DMA0_CH2CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA0_CH2CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA0_CH2CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA0_CH2CTL_ERRIE					3u
	/* Transfer direction */
#define DMA0_CH2CTL_DIR						4u
	/* Circular mode enable */
#define DMA0_CH2CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA0_CH2CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA0_CH2CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA0_CH2CTL_PWIDTH_msb					9u
#define DMA0_CH2CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA0_CH2CTL_MWIDTH_msb					11u
#define DMA0_CH2CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA0_CH2CTL_PRIO_msb					13u
#define DMA0_CH2CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA0_CH2CTL_M2M						14u

	/* 0x30 */
	uint8_t RESERVED10[0x34u-0x30u];

	/* 0x34: Channel 2 counter register */
	uint32_t volatile CH2CNT;
	/* Transfer counter */
#define DMA0_CH2CNT_CNT_msb					15u
#define DMA0_CH2CNT_CNT_lsb					0u

	/* 0x34 */
	uint8_t RESERVED11[0x38u-0x34u];

	/* 0x38: Channel 2 peripheral base address register */
	uint32_t volatile CH2PADDR;
	/* Peripheral base address */
#define DMA0_CH2PADDR_PADDR_msb					31u
#define DMA0_CH2PADDR_PADDR_lsb					0u

	/* 0x38 */
	uint8_t RESERVED12[0x3Cu-0x38u];

	/* 0x3C: Channel 2 memory base address register */
	uint32_t volatile CH2MADDR;
	/* Memory base address */
#define DMA0_CH2MADDR_MADDR_msb					31u
#define DMA0_CH2MADDR_MADDR_lsb					0u

	/* 0x3C */
	uint8_t RESERVED13[0x44u-0x3Cu];

	/* 0x44: Channel 3 control register */
	uint32_t volatile CH3CTL;
	/* Channel enable */
#define DMA0_CH3CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA0_CH3CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA0_CH3CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA0_CH3CTL_ERRIE					3u
	/* Transfer direction */
#define DMA0_CH3CTL_DIR						4u
	/* Circular mode enable */
#define DMA0_CH3CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA0_CH3CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA0_CH3CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA0_CH3CTL_PWIDTH_msb					9u
#define DMA0_CH3CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA0_CH3CTL_MWIDTH_msb					11u
#define DMA0_CH3CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA0_CH3CTL_PRIO_msb					13u
#define DMA0_CH3CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA0_CH3CTL_M2M						14u

	/* 0x44 */
	uint8_t RESERVED14[0x48u-0x44u];

	/* 0x48: Channel 3 counter register */
	uint32_t volatile CH3CNT;
	/* Transfer counter */
#define DMA0_CH3CNT_CNT_msb					15u
#define DMA0_CH3CNT_CNT_lsb					0u

	/* 0x48 */
	uint8_t RESERVED15[0x4Cu-0x48u];

	/* 0x4C: Channel 3 peripheral base address register */
	uint32_t volatile CH3PADDR;
	/* Peripheral base address */
#define DMA0_CH3PADDR_PADDR_msb					31u
#define DMA0_CH3PADDR_PADDR_lsb					0u

	/* 0x4C */
	uint8_t RESERVED16[0x50u-0x4Cu];

	/* 0x50: Channel 3 memory base address register */
	uint32_t volatile CH3MADDR;
	/* Memory base address */
#define DMA0_CH3MADDR_MADDR_msb					31u
#define DMA0_CH3MADDR_MADDR_lsb					0u

	/* 0x50 */
	uint8_t RESERVED17[0x58u-0x50u];

	/* 0x58: Channel 4 control register */
	uint32_t volatile CH4CTL;
	/* Channel enable */
#define DMA0_CH4CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA0_CH4CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA0_CH4CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA0_CH4CTL_ERRIE					3u
	/* Transfer direction */
#define DMA0_CH4CTL_DIR						4u
	/* Circular mode enable */
#define DMA0_CH4CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA0_CH4CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA0_CH4CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA0_CH4CTL_PWIDTH_msb					9u
#define DMA0_CH4CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA0_CH4CTL_MWIDTH_msb					11u
#define DMA0_CH4CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA0_CH4CTL_PRIO_msb					13u
#define DMA0_CH4CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA0_CH4CTL_M2M						14u

	/* 0x58 */
	uint8_t RESERVED18[0x5Cu-0x58u];

	/* 0x5C: Channel 4 counter register */
	uint32_t volatile CH4CNT;
	/* Transfer counter */
#define DMA0_CH4CNT_CNT_msb					15u
#define DMA0_CH4CNT_CNT_lsb					0u

	/* 0x5C */
	uint8_t RESERVED19[0x60u-0x5Cu];

	/* 0x60: Channel 4 peripheral base address register */
	uint32_t volatile CH4PADDR;
	/* Peripheral base address */
#define DMA0_CH4PADDR_PADDR_msb					31u
#define DMA0_CH4PADDR_PADDR_lsb					0u

	/* 0x60 */
	uint8_t RESERVED20[0x64u-0x60u];

	/* 0x64: Channel 4 memory base address register */
	uint32_t volatile CH4MADDR;
	/* Memory base address */
#define DMA0_CH4MADDR_MADDR_msb					31u
#define DMA0_CH4MADDR_MADDR_lsb					0u

	/* 0x64 */
	uint8_t RESERVED21[0x6Cu-0x64u];

	/* 0x6C: Channel 5 control register */
	uint32_t volatile CH5CTL;
	/* Channel enable */
#define DMA0_CH5CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA0_CH5CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA0_CH5CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA0_CH5CTL_ERRIE					3u
	/* Transfer direction */
#define DMA0_CH5CTL_DIR						4u
	/* Circular mode enable */
#define DMA0_CH5CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA0_CH5CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA0_CH5CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA0_CH5CTL_PWIDTH_msb					9u
#define DMA0_CH5CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA0_CH5CTL_MWIDTH_msb					11u
#define DMA0_CH5CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA0_CH5CTL_PRIO_msb					13u
#define DMA0_CH5CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA0_CH5CTL_M2M						14u

	/* 0x6C */
	uint8_t RESERVED22[0x70u-0x6Cu];

	/* 0x70: Channel 5 counter register */
	uint32_t volatile CH5CNT;
	/* Transfer counter */
#define DMA0_CH5CNT_CNT_msb					15u
#define DMA0_CH5CNT_CNT_lsb					0u

	/* 0x70 */
	uint8_t RESERVED23[0x74u-0x70u];

	/* 0x74: Channel 5 peripheral base address register */
	uint32_t volatile CH5PADDR;
	/* Peripheral base address */
#define DMA0_CH5PADDR_PADDR_msb					31u
#define DMA0_CH5PADDR_PADDR_lsb					0u

	/* 0x74 */
	uint8_t RESERVED24[0x78u-0x74u];

	/* 0x78: Channel 5 memory base address register */
	uint32_t volatile CH5MADDR;
	/* Memory base address */
#define DMA0_CH5MADDR_MADDR_msb					31u
#define DMA0_CH5MADDR_MADDR_lsb					0u

	/* 0x78 */
	uint8_t RESERVED25[0x80u-0x78u];

	/* 0x80: Channel 6 control register */
	uint32_t volatile CH6CTL;
	/* Channel enable */
#define DMA0_CH6CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA0_CH6CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA0_CH6CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA0_CH6CTL_ERRIE					3u
	/* Transfer direction */
#define DMA0_CH6CTL_DIR						4u
	/* Circular mode enable */
#define DMA0_CH6CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA0_CH6CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA0_CH6CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA0_CH6CTL_PWIDTH_msb					9u
#define DMA0_CH6CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA0_CH6CTL_MWIDTH_msb					11u
#define DMA0_CH6CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA0_CH6CTL_PRIO_msb					13u
#define DMA0_CH6CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA0_CH6CTL_M2M						14u

	/* 0x80 */
	uint8_t RESERVED26[0x84u-0x80u];

	/* 0x84: Channel 6 counter register */
	uint32_t volatile CH6CNT;
	/* Transfer counter */
#define DMA0_CH6CNT_CNT_msb					15u
#define DMA0_CH6CNT_CNT_lsb					0u

	/* 0x84 */
	uint8_t RESERVED27[0x88u-0x84u];

	/* 0x88: Channel 6 peripheral base address register */
	uint32_t volatile CH6PADDR;
	/* Peripheral base address */
#define DMA0_CH6PADDR_PADDR_msb					31u
#define DMA0_CH6PADDR_PADDR_lsb					0u

	/* 0x88 */
	uint8_t RESERVED28[0x8Cu-0x88u];

	/* 0x8C: Channel 6 memory base address register */
	uint32_t volatile CH6MADDR;
	/* Memory base address */
#define DMA0_CH6MADDR_MADDR_msb					31u
#define DMA0_CH6MADDR_MADDR_lsb					0u

};


#define DMA1 ((struct sdk_dma1 *)0x40020400)

struct sdk_dma1 {

	/* 0x00: Interrupt flag register */
	uint32_t volatile INTF;
	/* Global interrupt flag of channel 0 */
#define DMA1_INTF_GIF0						0u
	/* Full Transfer finish flag of channe 0 */
#define DMA1_INTF_FTFIF0					1u
	/* Half transfer finish flag of channel 0 */
#define DMA1_INTF_HTFIF0					2u
	/* Error flag of channel 0 */
#define DMA1_INTF_ERRIF0					3u
	/* Global interrupt flag of channel 1 */
#define DMA1_INTF_GIF1						4u
	/* Full Transfer finish flag of channe 1 */
#define DMA1_INTF_FTFIF1					5u
	/* Half transfer finish flag of channel 1 */
#define DMA1_INTF_HTFIF1					6u
	/* Error flag of channel 1 */
#define DMA1_INTF_ERRIF1					7u
	/* Global interrupt flag of channel 2 */
#define DMA1_INTF_GIF2						8u
	/* Full Transfer finish flag of channe 2 */
#define DMA1_INTF_FTFIF2					9u
	/* Half transfer finish flag of channel 2 */
#define DMA1_INTF_HTFIF2					10u
	/* Error flag of channel 2 */
#define DMA1_INTF_ERRIF2					11u
	/* Global interrupt flag of channel 3 */
#define DMA1_INTF_GIF3						12u
	/* Full Transfer finish flag of channe 3 */
#define DMA1_INTF_FTFIF3					13u
	/* Half transfer finish flag of channel 3 */
#define DMA1_INTF_HTFIF3					14u
	/* Error flag of channel 3 */
#define DMA1_INTF_ERRIF3					15u
	/* Global interrupt flag of channel 4 */
#define DMA1_INTF_GIF4						16u
	/* Full Transfer finish flag of channe 4 */
#define DMA1_INTF_FTFIF4					17u
	/* Half transfer finish flag of channel 4 */
#define DMA1_INTF_HTFIF4					18u
	/* Error flag of channel 4 */
#define DMA1_INTF_ERRIF4					19u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Interrupt flag clear register */
	uint32_t volatile INTC;
	/* Clear global interrupt flag of channel 0 */
#define DMA1_INTC_GIFC0						0u
	/* Clear bit for full transfer finish flag of channel 0 */
#define DMA1_INTC_FTFIFC0					1u
	/* Clear bit for half transfer finish flag of channel 0 */
#define DMA1_INTC_HTFIFC0					2u
	/* Clear bit for error flag of channel 0 */
#define DMA1_INTC_ERRIFC0					3u
	/* Clear global interrupt flag of channel 1 */
#define DMA1_INTC_GIFC1						4u
	/* Clear bit for full transfer finish flag of channel 1 */
#define DMA1_INTC_FTFIFC1					5u
	/* Clear bit for half transfer finish flag of channel 1 */
#define DMA1_INTC_HTFIFC1					6u
	/* Clear bit for error flag of channel 1 */
#define DMA1_INTC_ERRIFC1					7u
	/* Clear global interrupt flag of channel 2 */
#define DMA1_INTC_GIFC2						8u
	/* Clear bit for full transfer finish flag of channel 2 */
#define DMA1_INTC_FTFIFC2					9u
	/* Clear bit for half transfer finish flag of channel 2 */
#define DMA1_INTC_HTFIFC2					10u
	/* Clear bit for error flag of channel 2 */
#define DMA1_INTC_ERRIFC2					11u
	/* Clear global interrupt flag of channel 3 */
#define DMA1_INTC_GIFC3						12u
	/* Clear bit for full transfer finish flag of channel 3 */
#define DMA1_INTC_FTFIFC3					13u
	/* Clear bit for half transfer finish flag of channel 3 */
#define DMA1_INTC_HTFIFC3					14u
	/* Clear bit for error flag of channel 3 */
#define DMA1_INTC_ERRIFC3					15u
	/* Clear global interrupt flag of channel 4 */
#define DMA1_INTC_GIFC4						16u
	/* Clear bit for full transfer finish flag of channel 4 */
#define DMA1_INTC_FTFIFC4					17u
	/* Clear bit for half transfer finish flag of channel 4 */
#define DMA1_INTC_HTFIFC4					18u
	/* Clear bit for error flag of channel 4 */
#define DMA1_INTC_ERRIFC4					19u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Channel 0 control register */
	uint32_t volatile CH0CTL;
	/* Channel enable */
#define DMA1_CH0CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA1_CH0CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA1_CH0CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA1_CH0CTL_ERRIE					3u
	/* Transfer direction */
#define DMA1_CH0CTL_DIR						4u
	/* Circular mode enable */
#define DMA1_CH0CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA1_CH0CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA1_CH0CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA1_CH0CTL_PWIDTH_msb					9u
#define DMA1_CH0CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA1_CH0CTL_MWIDTH_msb					11u
#define DMA1_CH0CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA1_CH0CTL_PRIO_msb					13u
#define DMA1_CH0CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA1_CH0CTL_M2M						14u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Channel 0 counter register */
	uint32_t volatile CH0CNT;
	/* Transfer counter */
#define DMA1_CH0CNT_CNT_msb					15u
#define DMA1_CH0CNT_CNT_lsb					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Channel 0 peripheral base address register */
	uint32_t volatile CH0PADDR;
	/* Peripheral base address */
#define DMA1_CH0PADDR_PADDR_msb					31u
#define DMA1_CH0PADDR_PADDR_lsb					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Channel 0 memory base address register */
	uint32_t volatile CH0MADDR;
	/* Memory base address */
#define DMA1_CH0MADDR_MADDR_msb					31u
#define DMA1_CH0MADDR_MADDR_lsb					0u

	/* 0x14 */
	uint8_t RESERVED5[0x1Cu-0x14u];

	/* 0x1C: Channel 1 control register */
	uint32_t volatile CH1CTL;
	/* Channel enable */
#define DMA1_CH1CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA1_CH1CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA1_CH1CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA1_CH1CTL_ERRIE					3u
	/* Transfer direction */
#define DMA1_CH1CTL_DIR						4u
	/* Circular mode enable */
#define DMA1_CH1CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA1_CH1CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA1_CH1CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA1_CH1CTL_PWIDTH_msb					9u
#define DMA1_CH1CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA1_CH1CTL_MWIDTH_msb					11u
#define DMA1_CH1CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA1_CH1CTL_PRIO_msb					13u
#define DMA1_CH1CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA1_CH1CTL_M2M						14u

	/* 0x1C */
	uint8_t RESERVED6[0x20u-0x1Cu];

	/* 0x20: Channel 1 counter register */
	uint32_t volatile CH1CNT;
	/* Transfer counter */
#define DMA1_CH1CNT_CNT_msb					15u
#define DMA1_CH1CNT_CNT_lsb					0u

	/* 0x20 */
	uint8_t RESERVED7[0x24u-0x20u];

	/* 0x24: Channel 1 peripheral base address register */
	uint32_t volatile CH1PADDR;
	/* Peripheral base address */
#define DMA1_CH1PADDR_PADDR_msb					31u
#define DMA1_CH1PADDR_PADDR_lsb					0u

	/* 0x24 */
	uint8_t RESERVED8[0x28u-0x24u];

	/* 0x28: Channel 1 memory base address register */
	uint32_t volatile CH1MADDR;
	/* Memory base address */
#define DMA1_CH1MADDR_MADDR_msb					31u
#define DMA1_CH1MADDR_MADDR_lsb					0u

	/* 0x28 */
	uint8_t RESERVED9[0x30u-0x28u];

	/* 0x30: Channel 2 control register */
	uint32_t volatile CH2CTL;
	/* Channel enable */
#define DMA1_CH2CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA1_CH2CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA1_CH2CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA1_CH2CTL_ERRIE					3u
	/* Transfer direction */
#define DMA1_CH2CTL_DIR						4u
	/* Circular mode enable */
#define DMA1_CH2CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA1_CH2CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA1_CH2CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA1_CH2CTL_PWIDTH_msb					9u
#define DMA1_CH2CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA1_CH2CTL_MWIDTH_msb					11u
#define DMA1_CH2CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA1_CH2CTL_PRIO_msb					13u
#define DMA1_CH2CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA1_CH2CTL_M2M						14u

	/* 0x30 */
	uint8_t RESERVED10[0x34u-0x30u];

	/* 0x34: Channel 2 counter register */
	uint32_t volatile CH2CNT;
	/* Transfer counter */
#define DMA1_CH2CNT_CNT_msb					15u
#define DMA1_CH2CNT_CNT_lsb					0u

	/* 0x34 */
	uint8_t RESERVED11[0x38u-0x34u];

	/* 0x38: Channel 2 peripheral base address register */
	uint32_t volatile CH2PADDR;
	/* Peripheral base address */
#define DMA1_CH2PADDR_PADDR_msb					31u
#define DMA1_CH2PADDR_PADDR_lsb					0u

	/* 0x38 */
	uint8_t RESERVED12[0x3Cu-0x38u];

	/* 0x3C: Channel 2 memory base address register */
	uint32_t volatile CH2MADDR;
	/* Memory base address */
#define DMA1_CH2MADDR_MADDR_msb					31u
#define DMA1_CH2MADDR_MADDR_lsb					0u

	/* 0x3C */
	uint8_t RESERVED13[0x44u-0x3Cu];

	/* 0x44: Channel 3 control register */
	uint32_t volatile CH3CTL;
	/* Channel enable */
#define DMA1_CH3CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA1_CH3CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA1_CH3CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA1_CH3CTL_ERRIE					3u
	/* Transfer direction */
#define DMA1_CH3CTL_DIR						4u
	/* Circular mode enable */
#define DMA1_CH3CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA1_CH3CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA1_CH3CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA1_CH3CTL_PWIDTH_msb					9u
#define DMA1_CH3CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA1_CH3CTL_MWIDTH_msb					11u
#define DMA1_CH3CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA1_CH3CTL_PRIO_msb					13u
#define DMA1_CH3CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA1_CH3CTL_M2M						14u

	/* 0x44 */
	uint8_t RESERVED14[0x48u-0x44u];

	/* 0x48: Channel 3 counter register */
	uint32_t volatile CH3CNT;
	/* Transfer counter */
#define DMA1_CH3CNT_CNT_msb					15u
#define DMA1_CH3CNT_CNT_lsb					0u

	/* 0x48 */
	uint8_t RESERVED15[0x4Cu-0x48u];

	/* 0x4C: Channel 3 peripheral base address register */
	uint32_t volatile CH3PADDR;
	/* Peripheral base address */
#define DMA1_CH3PADDR_PADDR_msb					31u
#define DMA1_CH3PADDR_PADDR_lsb					0u

	/* 0x4C */
	uint8_t RESERVED16[0x50u-0x4Cu];

	/* 0x50: Channel 3 memory base address register */
	uint32_t volatile CH3MADDR;
	/* Memory base address */
#define DMA1_CH3MADDR_MADDR_msb					31u
#define DMA1_CH3MADDR_MADDR_lsb					0u

	/* 0x50 */
	uint8_t RESERVED17[0x58u-0x50u];

	/* 0x58: Channel 4 control register */
	uint32_t volatile CH4CTL;
	/* Channel enable */
#define DMA1_CH4CTL_CHEN					0u
	/* Enable bit for channel full transfer finish interrupt */
#define DMA1_CH4CTL_FTFIE					1u
	/* Enable bit for channel half transfer finish interrupt */
#define DMA1_CH4CTL_HTFIE					2u
	/* Enable bit for channel error interrupt */
#define DMA1_CH4CTL_ERRIE					3u
	/* Transfer direction */
#define DMA1_CH4CTL_DIR						4u
	/* Circular mode enable */
#define DMA1_CH4CTL_CMEN					5u
	/* Next address generation algorithm of peripheral */
#define DMA1_CH4CTL_PNAGA					6u
	/* Next address generation algorithm of memory */
#define DMA1_CH4CTL_MNAGA					7u
	/* Transfer data size of peripheral */
#define DMA1_CH4CTL_PWIDTH_msb					9u
#define DMA1_CH4CTL_PWIDTH_lsb					8u
	/* Transfer data size of memory */
#define DMA1_CH4CTL_MWIDTH_msb					11u
#define DMA1_CH4CTL_MWIDTH_lsb					10u
	/* Priority level */
#define DMA1_CH4CTL_PRIO_msb					13u
#define DMA1_CH4CTL_PRIO_lsb					12u
	/* Memory to Memory Mode */
#define DMA1_CH4CTL_M2M						14u

	/* 0x58 */
	uint8_t RESERVED18[0x5Cu-0x58u];

	/* 0x5C: Channel 4 counter register */
	uint32_t volatile CH4CNT;
	/* Transfer counter */
#define DMA1_CH4CNT_CNT_msb					15u
#define DMA1_CH4CNT_CNT_lsb					0u

	/* 0x5C */
	uint8_t RESERVED19[0x60u-0x5Cu];

	/* 0x60: Channel 4 peripheral base address register */
	uint32_t volatile CH4PADDR;
	/* Peripheral base address */
#define DMA1_CH4PADDR_PADDR_msb					31u
#define DMA1_CH4PADDR_PADDR_lsb					0u

	/* 0x60 */
	uint8_t RESERVED20[0x64u-0x60u];

	/* 0x64: Channel 4 memory base address register */
	uint32_t volatile CH4MADDR;
	/* Memory base address */
#define DMA1_CH4MADDR_MADDR_msb					31u
#define DMA1_CH4MADDR_MADDR_lsb					0u

};


#define EXMC ((struct sdk_exmc *)0xA0000000)

struct sdk_exmc {

	/* 0x00: SRAM/NOR flash control register 0 */
	uint32_t volatile SNCTL0;
	/* Asynchronous wait */
#define EXMC_SNCTL0_ASYNCWAIT					15u
	/* NWAIT signal enable */
#define EXMC_SNCTL0_NRWTEN					13u
	/* Write enable */
#define EXMC_SNCTL0_WREN					12u
	/* NWAIT signal polarity */
#define EXMC_SNCTL0_NRWTPOL					9u
	/* NOR Flash access enable */
#define EXMC_SNCTL0_NREN					6u
	/* NOR bank memory data bus width */
#define EXMC_SNCTL0_NRW_msb					5u
#define EXMC_SNCTL0_NRW_lsb					4u
	/* NOR bank memory type */
#define EXMC_SNCTL0_NRTP_msb					3u
#define EXMC_SNCTL0_NRTP_lsb					2u
	/* NOR bank memory address/data multiplexing */
#define EXMC_SNCTL0_NRMUX					1u
	/* NOR bank enable */
#define EXMC_SNCTL0_NRBKEN					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: SRAM/NOR flash timing configuration register 0 */
	uint32_t volatile SNTCFG0;
	/* Bus latency */
#define EXMC_SNTCFG0_BUSLAT_msb					19u
#define EXMC_SNTCFG0_BUSLAT_lsb					16u
	/* Data setup time */
#define EXMC_SNTCFG0_DSET_msb					15u
#define EXMC_SNTCFG0_DSET_lsb					8u
	/* Address hold time */
#define EXMC_SNTCFG0_AHLD_msb					7u
#define EXMC_SNTCFG0_AHLD_lsb					4u
	/* Address setup time */
#define EXMC_SNTCFG0_ASET_msb					3u
#define EXMC_SNTCFG0_ASET_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: SRAM/NOR flash control register 1 */
	uint32_t volatile SNCTL1;
	/* Asynchronous wait */
#define EXMC_SNCTL1_ASYNCWAIT					15u
	/* NWAIT signal enable */
#define EXMC_SNCTL1_NRWTEN					13u
	/* Write enable */
#define EXMC_SNCTL1_WREN					12u
	/* NWAIT signal polarity */
#define EXMC_SNCTL1_NRWTPOL					9u
	/* NOR Flash access enable */
#define EXMC_SNCTL1_NREN					6u
	/* NOR bank memory data bus width */
#define EXMC_SNCTL1_NRW_msb					5u
#define EXMC_SNCTL1_NRW_lsb					4u
	/* NOR bank memory type */
#define EXMC_SNCTL1_NRTP_msb					3u
#define EXMC_SNCTL1_NRTP_lsb					2u
	/* NOR bank memory address/data multiplexing */
#define EXMC_SNCTL1_NRMUX					1u
	/* NOR bank enable */
#define EXMC_SNCTL1_NRBKEN					0u

};


#define EXTI ((struct sdk_exti *)0x40010400)

struct sdk_exti {

	/* 0x00: Interrupt enable register */
	uint32_t volatile INTEN;
	/* Enable Interrupt on line 0 */
#define EXTI_INTEN_INTEN0					0u
	/* Enable Interrupt on line 1 */
#define EXTI_INTEN_INTEN1					1u
	/* Enable Interrupt on line 2 */
#define EXTI_INTEN_INTEN2					2u
	/* Enable Interrupt on line 3 */
#define EXTI_INTEN_INTEN3					3u
	/* Enable Interrupt on line 4 */
#define EXTI_INTEN_INTEN4					4u
	/* Enable Interrupt on line 5 */
#define EXTI_INTEN_INTEN5					5u
	/* Enable Interrupt on line 6 */
#define EXTI_INTEN_INTEN6					6u
	/* Enable Interrupt on line 7 */
#define EXTI_INTEN_INTEN7					7u
	/* Enable Interrupt on line 8 */
#define EXTI_INTEN_INTEN8					8u
	/* Enable Interrupt on line 9 */
#define EXTI_INTEN_INTEN9					9u
	/* Enable Interrupt on line 10 */
#define EXTI_INTEN_INTEN10					10u
	/* Enable Interrupt on line 11 */
#define EXTI_INTEN_INTEN11					11u
	/* Enable Interrupt on line 12 */
#define EXTI_INTEN_INTEN12					12u
	/* Enable Interrupt on line 13 */
#define EXTI_INTEN_INTEN13					13u
	/* Enable Interrupt on line 14 */
#define EXTI_INTEN_INTEN14					14u
	/* Enable Interrupt on line 15 */
#define EXTI_INTEN_INTEN15					15u
	/* Enable Interrupt on line 16 */
#define EXTI_INTEN_INTEN16					16u
	/* Enable Interrupt on line 17 */
#define EXTI_INTEN_INTEN17					17u
	/* Enable Interrupt on line 18 */
#define EXTI_INTEN_INTEN18					18u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Event enable register (EXTI_EVEN) */
	uint32_t volatile EVEN;
	/* Enable Event on line 0 */
#define EXTI_EVEN_EVEN0						0u
	/* Enable Event on line 1 */
#define EXTI_EVEN_EVEN1						1u
	/* Enable Event on line 2 */
#define EXTI_EVEN_EVEN2						2u
	/* Enable Event on line 3 */
#define EXTI_EVEN_EVEN3						3u
	/* Enable Event on line 4 */
#define EXTI_EVEN_EVEN4						4u
	/* Enable Event on line 5 */
#define EXTI_EVEN_EVEN5						5u
	/* Enable Event on line 6 */
#define EXTI_EVEN_EVEN6						6u
	/* Enable Event on line 7 */
#define EXTI_EVEN_EVEN7						7u
	/* Enable Event on line 8 */
#define EXTI_EVEN_EVEN8						8u
	/* Enable Event on line 9 */
#define EXTI_EVEN_EVEN9						9u
	/* Enable Event on line 10 */
#define EXTI_EVEN_EVEN10					10u
	/* Enable Event on line 11 */
#define EXTI_EVEN_EVEN11					11u
	/* Enable Event on line 12 */
#define EXTI_EVEN_EVEN12					12u
	/* Enable Event on line 13 */
#define EXTI_EVEN_EVEN13					13u
	/* Enable Event on line 14 */
#define EXTI_EVEN_EVEN14					14u
	/* Enable Event on line 15 */
#define EXTI_EVEN_EVEN15					15u
	/* Enable Event on line 16 */
#define EXTI_EVEN_EVEN16					16u
	/* Enable Event on line 17 */
#define EXTI_EVEN_EVEN17					17u
	/* Enable Event on line 18 */
#define EXTI_EVEN_EVEN18					18u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Rising Edge Trigger Enable register */
	uint32_t volatile RTEN;
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN0						0u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN1						1u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN2						2u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN3						3u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN4						4u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN5						5u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN6						6u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN7						7u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN8						8u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN9						9u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN10					10u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN11					11u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN12					12u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN13					13u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN14					14u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN15					15u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN16					16u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN17					17u
	/* Rising edge trigger enable of */
#define EXTI_RTEN_RTEN18					18u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Falling Egde Trigger Enable register */
	uint32_t volatile FTEN;
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN0						0u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN1						1u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN2						2u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN3						3u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN4						4u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN5						5u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN6						6u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN7						7u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN8						8u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN9						9u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN10					10u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN11					11u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN12					12u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN13					13u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN14					14u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN15					15u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN16					16u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN17					17u
	/* Falling edge trigger enable of */
#define EXTI_FTEN_FTEN18					18u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Software interrupt event register */
	uint32_t volatile SWIEV;
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV0					0u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV1					1u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV2					2u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV3					3u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV4					4u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV5					5u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV6					6u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV7					7u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV8					8u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV9					9u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV10					10u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV11					11u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV12					12u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV13					13u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV14					14u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV15					15u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV16					16u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV17					17u
	/* Interrupt/Event software trigger on line */
#define EXTI_SWIEV_SWIEV18					18u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Pending register (EXTI_PD) */
	uint32_t volatile PD;
	/* Interrupt pending status of line 0 */
#define EXTI_PD_PD0						0u
	/* Interrupt pending status of line 1 */
#define EXTI_PD_PD1						1u
	/* Interrupt pending status of line 2 */
#define EXTI_PD_PD2						2u
	/* Interrupt pending status of line 3 */
#define EXTI_PD_PD3						3u
	/* Interrupt pending status of line 4 */
#define EXTI_PD_PD4						4u
	/* Interrupt pending status of line 5 */
#define EXTI_PD_PD5						5u
	/* Interrupt pending status of line 6 */
#define EXTI_PD_PD6						6u
	/* Interrupt pending status of line 7 */
#define EXTI_PD_PD7						7u
	/* Interrupt pending status of line 8 */
#define EXTI_PD_PD8						8u
	/* Interrupt pending status of line 9 */
#define EXTI_PD_PD9						9u
	/* Interrupt pending status of line 10 */
#define EXTI_PD_PD10						10u
	/* Interrupt pending status of line 11 */
#define EXTI_PD_PD11						11u
	/* Interrupt pending status of line 12 */
#define EXTI_PD_PD12						12u
	/* Interrupt pending status of line 13 */
#define EXTI_PD_PD13						13u
	/* Interrupt pending status of line 14 */
#define EXTI_PD_PD14						14u
	/* Interrupt pending status of line 15 */
#define EXTI_PD_PD15						15u
	/* Interrupt pending status of line 16 */
#define EXTI_PD_PD16						16u
	/* Interrupt pending status of line 17 */
#define EXTI_PD_PD17						17u
	/* Interrupt pending status of line 18 */
#define EXTI_PD_PD18						18u

};


#define FMC ((struct sdk_fmc *)0x40022000)

struct sdk_fmc {

	/* 0x00: wait state counter register */
	uint32_t volatile WS;
	/* wait state counter register */
#define FMC_WS_WSCNT_msb					2u
#define FMC_WS_WSCNT_lsb					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Unlock key register 0 */
	uint32_t volatile KEY0;
	/* FMC_CTL0 unlock key */
#define FMC_KEY0_KEY_msb					31u
#define FMC_KEY0_KEY_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Option byte unlock key register */
	uint32_t volatile OBKEY;
	/* FMC_ CTL0 option byte operation unlock register */
#define FMC_OBKEY_OBKEY_msb					31u
#define FMC_OBKEY_OBKEY_lsb					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Status register 0 */
	uint32_t volatile STAT0;
	/* End of operation flag bit */
#define FMC_STAT0_ENDF						5u
	/* Erase/Program protection error flag bit */
#define FMC_STAT0_WPERR						4u
	/* Program error flag bit */
#define FMC_STAT0_PGERR						2u
	/* The flash is busy bit */
#define FMC_STAT0_BUSY						0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Control register 0 */
	uint32_t volatile CTL0;
	/* End of operation interrupt enable bit */
#define FMC_CTL0_ENDIE						12u
	/* Error interrupt enable bit */
#define FMC_CTL0_ERRIE						10u
	/* Option byte erase/program enable bit */
#define FMC_CTL0_OBWEN						9u
	/* FMC_CTL0 lock bit */
#define FMC_CTL0_LK						7u
	/* Send erase command to FMC bit */
#define FMC_CTL0_START						6u
	/* Option bytes erase command bit */
#define FMC_CTL0_OBER						5u
	/* Option bytes program command bit */
#define FMC_CTL0_OBPG						4u
	/* Main flash mass erase for bank0 command bit */
#define FMC_CTL0_MER						2u
	/* Main flash page erase for bank0 command bit */
#define FMC_CTL0_PER						1u
	/* Main flash program for bank0 command bit */
#define FMC_CTL0_PG						0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Address register 0 */
	uint32_t volatile ADDR0;
	/* Flash erase/program command address bits */
#define FMC_ADDR0_ADDR_msb					31u
#define FMC_ADDR0_ADDR_lsb					0u

	/* 0x14 */
	uint8_t RESERVED5[0x1Cu-0x14u];

	/* 0x1C: Option byte status register */
	uint32_t volatile OBSTAT;
	/* Option bytes read error bit */
#define FMC_OBSTAT_OBERR					0u
	/* Option bytes security protection code */
#define FMC_OBSTAT_SPC						1u
	/* Store USER of option bytes block after system reset */
#define FMC_OBSTAT_USER_msb					9u
#define FMC_OBSTAT_USER_lsb					2u
	/* Store DATA[15:0] of option bytes block after system reset */
#define FMC_OBSTAT_DATA_msb					25u
#define FMC_OBSTAT_DATA_lsb					10u

	/* 0x1C */
	uint8_t RESERVED6[0x20u-0x1Cu];

	/* 0x20: Erase/Program Protection register */
	uint32_t volatile WP;
	/* Store WP[31:0] of option bytes block after system reset */
#define FMC_WP_WP_msb						31u
#define FMC_WP_WP_lsb						0u

	/* 0x20 */
	uint8_t RESERVED7[0x100u-0x20u];

	/* 0x100: Product ID register */
	uint32_t volatile PID;
	/* Product reserved ID code register */
#define FMC_PID_PID_msb						31u
#define FMC_PID_PID_lsb						0u

};


#define FWDGT ((struct sdk_fwdgt *)0x40003000)

struct sdk_fwdgt {

	/* 0x00: Control register */
	uint32_t volatile CTL;
	/* Key value */
#define FWDGT_CTL_CMD_msb					15u
#define FWDGT_CTL_CMD_lsb					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Prescaler register */
	uint32_t volatile PSC;
	/* Free watchdog timer prescaler selection */
#define FWDGT_PSC_PSC_msb					2u
#define FWDGT_PSC_PSC_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Reload register */
	uint32_t volatile RLD;
	/* Free watchdog timer counter reload value */
#define FWDGT_RLD_RLD_msb					11u
#define FWDGT_RLD_RLD_lsb					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Status register */
	uint32_t volatile STAT;
	/* Free watchdog timer prescaler value update */
#define FWDGT_STAT_PUD						0u
	/* Free watchdog timer counter reload value update */
#define FWDGT_STAT_RUD						1u

};


#define GPIOA ((struct sdk_gpioa *)0x40010800)
#define GPIOB ((struct sdk_gpiob *)0x40010C00)
#define GPIOC ((struct sdk_gpioc *)0x40011000)
#define GPIOD ((struct sdk_gpiod *)0x40011400)
#define GPIOE ((struct sdk_gpioe *)0x40011800)

struct sdk_gpioa {

	/* 0x00: port control register 0 */
	uint32_t volatile CTL0;
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL7_msb					31u
#define GPIO_CTL0_CTL7_lsb					30u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD7_msb					29u
#define GPIO_CTL0_MD7_lsb					28u
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL6_msb					27u
#define GPIO_CTL0_CTL6_lsb					26u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD6_msb					25u
#define GPIO_CTL0_MD6_lsb					24u
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL5_msb					23u
#define GPIO_CTL0_CTL5_lsb					22u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD5_msb					21u
#define GPIO_CTL0_MD5_lsb					20u
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL4_msb					19u
#define GPIO_CTL0_CTL4_lsb					18u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD4_msb					17u
#define GPIO_CTL0_MD4_lsb					16u
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL3_msb					15u
#define GPIO_CTL0_CTL3_lsb					14u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD3_msb					13u
#define GPIO_CTL0_MD3_lsb					12u
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL2_msb					11u
#define GPIO_CTL0_CTL2_lsb					10u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD2_msb					9u
#define GPIO_CTL0_MD2_lsb					8u
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL1_msb					7u
#define GPIO_CTL0_CTL1_lsb					6u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD1_msb					5u
#define GPIO_CTL0_MD1_lsb					4u
	/* Port x configuration bits (x = */
#define GPIO_CTL0_CTL0_msb					3u
#define GPIO_CTL0_CTL0_lsb					2u
	/* Port x mode bits (x = */
#define GPIO_CTL0_MD0_msb					1u
#define GPIO_CTL0_MD0_lsb					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: port control register 1 */
	uint32_t volatile CTL1;
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL15_msb					31u
#define GPIO_CTL1_CTL15_lsb					30u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD15_msb					29u
#define GPIO_CTL1_MD15_lsb					28u
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL14_msb					27u
#define GPIO_CTL1_CTL14_lsb					26u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD14_msb					25u
#define GPIO_CTL1_MD14_lsb					24u
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL13_msb					23u
#define GPIO_CTL1_CTL13_lsb					22u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD13_msb					21u
#define GPIO_CTL1_MD13_lsb					20u
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL12_msb					19u
#define GPIO_CTL1_CTL12_lsb					18u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD12_msb					17u
#define GPIO_CTL1_MD12_lsb					16u
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL11_msb					15u
#define GPIO_CTL1_CTL11_lsb					14u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD11_msb					13u
#define GPIO_CTL1_MD11_lsb					12u
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL10_msb					11u
#define GPIO_CTL1_CTL10_lsb					10u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD10_msb					9u
#define GPIO_CTL1_MD10_lsb					8u
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL9_msb					7u
#define GPIO_CTL1_CTL9_lsb					6u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD9_msb					5u
#define GPIO_CTL1_MD9_lsb					4u
	/* Port x configuration bits (x = */
#define GPIO_CTL1_CTL8_msb					3u
#define GPIO_CTL1_CTL8_lsb					2u
	/* Port x mode bits (x = */
#define GPIO_CTL1_MD8_msb					1u
#define GPIO_CTL1_MD8_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Port input status register */
	uint32_t volatile ISTAT;
	/* Port input status */
#define GPIO_ISTAT_ISTAT15					15u
	/* Port input status */
#define GPIO_ISTAT_ISTAT14					14u
	/* Port input status */
#define GPIO_ISTAT_ISTAT13					13u
	/* Port input status */
#define GPIO_ISTAT_ISTAT12					12u
	/* Port input status */
#define GPIO_ISTAT_ISTAT11					11u
	/* Port input status */
#define GPIO_ISTAT_ISTAT10					10u
	/* Port input status */
#define GPIO_ISTAT_ISTAT9					9u
	/* Port input status */
#define GPIO_ISTAT_ISTAT8					8u
	/* Port input status */
#define GPIO_ISTAT_ISTAT7					7u
	/* Port input status */
#define GPIO_ISTAT_ISTAT6					6u
	/* Port input status */
#define GPIO_ISTAT_ISTAT5					5u
	/* Port input status */
#define GPIO_ISTAT_ISTAT4					4u
	/* Port input status */
#define GPIO_ISTAT_ISTAT3					3u
	/* Port input status */
#define GPIO_ISTAT_ISTAT2					2u
	/* Port input status */
#define GPIO_ISTAT_ISTAT1					1u
	/* Port input status */
#define GPIO_ISTAT_ISTAT0					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Port output control register */
	uint32_t volatile OCTL;
	/* Port output control */
#define GPIO_OCTL_OCTL15					15u
	/* Port output control */
#define GPIO_OCTL_OCTL14					14u
	/* Port output control */
#define GPIO_OCTL_OCTL13					13u
	/* Port output control */
#define GPIO_OCTL_OCTL12					12u
	/* Port output control */
#define GPIO_OCTL_OCTL11					11u
	/* Port output control */
#define GPIO_OCTL_OCTL10					10u
	/* Port output control */
#define GPIO_OCTL_OCTL9					9u
	/* Port output control */
#define GPIO_OCTL_OCTL8					8u
	/* Port output control */
#define GPIO_OCTL_OCTL7					7u
	/* Port output control */
#define GPIO_OCTL_OCTL6					6u
	/* Port output control */
#define GPIO_OCTL_OCTL5					5u
	/* Port output control */
#define GPIO_OCTL_OCTL4					4u
	/* Port output control */
#define GPIO_OCTL_OCTL3					3u
	/* Port output control */
#define GPIO_OCTL_OCTL2					2u
	/* Port output control */
#define GPIO_OCTL_OCTL1					1u
	/* Port output control */
#define GPIO_OCTL_OCTL0					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Port bit operate register */
	uint32_t volatile BOP;
	/* Port 15 Clear bit */
#define GPIO_BOP_CR15						31u
	/* Port 14 Clear bit */
#define GPIO_BOP_CR14						30u
	/* Port 13 Clear bit */
#define GPIO_BOP_CR13						29u
	/* Port 12 Clear bit */
#define GPIO_BOP_CR12						28u
	/* Port 11 Clear bit */
#define GPIO_BOP_CR11						27u
	/* Port 10 Clear bit */
#define GPIO_BOP_CR10						26u
	/* Port 9 Clear bit */
#define GPIO_BOP_CR9						25u
	/* Port 8 Clear bit */
#define GPIO_BOP_CR8						24u
	/* Port 7 Clear bit */
#define GPIO_BOP_CR7						23u
	/* Port 6 Clear bit */
#define GPIO_BOP_CR6						22u
	/* Port 5 Clear bit */
#define GPIO_BOP_CR5						21u
	/* Port 4 Clear bit */
#define GPIO_BOP_CR4						20u
	/* Port 3 Clear bit */
#define GPIO_BOP_CR3						19u
	/* Port 2 Clear bit */
#define GPIO_BOP_CR2						18u
	/* Port 1 Clear bit */
#define GPIO_BOP_CR1						17u
	/* Port 0 Clear bit */
#define GPIO_BOP_CR0						16u
	/* Port 15 Set bit */
#define GPIO_BOP_BOP15						15u
	/* Port 14 Set bit */
#define GPIO_BOP_BOP14						14u
	/* Port 13 Set bit */
#define GPIO_BOP_BOP13						13u
	/* Port 12 Set bit */
#define GPIO_BOP_BOP12						12u
	/* Port 11 Set bit */
#define GPIO_BOP_BOP11						11u
	/* Port 10 Set bit */
#define GPIO_BOP_BOP10						10u
	/* Port 9 Set bit */
#define GPIO_BOP_BOP9						9u
	/* Port 8 Set bit */
#define GPIO_BOP_BOP8						8u
	/* Port 7 Set bit */
#define GPIO_BOP_BOP7						7u
	/* Port 6 Set bit */
#define GPIO_BOP_BOP6						6u
	/* Port 5 Set bit */
#define GPIO_BOP_BOP5						5u
	/* Port 4 Set bit */
#define GPIO_BOP_BOP4						4u
	/* Port 3 Set bit */
#define GPIO_BOP_BOP3						3u
	/* Port 2 Set bit */
#define GPIO_BOP_BOP2						2u
	/* Port 1 Set bit */
#define GPIO_BOP_BOP1						1u
	/* Port 0 Set bit */
#define GPIO_BOP_BOP0						0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Port bit clear register */
	uint32_t volatile BC;
	/* Port 15 Clear bit */
#define GPIO_BC_CR15						15u
	/* Port 14 Clear bit */
#define GPIO_BC_CR14						14u
	/* Port 13 Clear bit */
#define GPIO_BC_CR13						13u
	/* Port 12 Clear bit */
#define GPIO_BC_CR12						12u
	/* Port 11 Clear bit */
#define GPIO_BC_CR11						11u
	/* Port 10 Clear bit */
#define GPIO_BC_CR10						10u
	/* Port 9 Clear bit */
#define GPIO_BC_CR9						9u
	/* Port 8 Clear bit */
#define GPIO_BC_CR8						8u
	/* Port 7 Clear bit */
#define GPIO_BC_CR7						7u
	/* Port 6 Clear bit */
#define GPIO_BC_CR6						6u
	/* Port 5 Clear bit */
#define GPIO_BC_CR5						5u
	/* Port 4 Clear bit */
#define GPIO_BC_CR4						4u
	/* Port 3 Clear bit */
#define GPIO_BC_CR3						3u
	/* Port 2 Clear bit */
#define GPIO_BC_CR2						2u
	/* Port 1 Clear bit */
#define GPIO_BC_CR1						1u
	/* Port 0 Clear bit */
#define GPIO_BC_CR0						0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: GPIO port configuration lock */
	uint32_t volatile LOCK;
	/* Lock sequence key */
#define GPIO_LOCK_LKK						16u
	/* Port Lock bit 15 */
#define GPIO_LOCK_LK15						15u
	/* Port Lock bit 14 */
#define GPIO_LOCK_LK14						14u
	/* Port Lock bit 13 */
#define GPIO_LOCK_LK13						13u
	/* Port Lock bit 12 */
#define GPIO_LOCK_LK12						12u
	/* Port Lock bit 11 */
#define GPIO_LOCK_LK11						11u
	/* Port Lock bit 10 */
#define GPIO_LOCK_LK10						10u
	/* Port Lock bit 9 */
#define GPIO_LOCK_LK9						9u
	/* Port Lock bit 8 */
#define GPIO_LOCK_LK8						8u
	/* Port Lock bit 7 */
#define GPIO_LOCK_LK7						7u
	/* Port Lock bit 6 */
#define GPIO_LOCK_LK6						6u
	/* Port Lock bit 5 */
#define GPIO_LOCK_LK5						5u
	/* Port Lock bit 4 */
#define GPIO_LOCK_LK4						4u
	/* Port Lock bit 3 */
#define GPIO_LOCK_LK3						3u
	/* Port Lock bit 2 */
#define GPIO_LOCK_LK2						2u
	/* Port Lock bit 1 */
#define GPIO_LOCK_LK1						1u
	/* Port Lock bit 0 */
#define GPIO_LOCK_LK0						0u

};


#define I2C0 ((struct sdk_i2c *)0x40005400)
#define I2C1 ((struct sdk_i2c *)0x40005800)

struct sdk_i2c {

	/* 0x00: Control register 0 */
	uint32_t volatile CTL0;
	/* Software reset */
#define I2C_CTL0_SRESET					15u
	/* SMBus alert */
#define I2C_CTL0_SALT						13u
	/* PEC Transfer */
#define I2C_CTL0_PECTRANS					12u
	/* Position of ACK and PEC when receiving */
#define I2C_CTL0_POAP						11u
	/* Whether or not to send an ACK */
#define I2C_CTL0_ACKEN						10u
	/* Generate a STOP condition on I2C bus */
#define I2C_CTL0_STOP						9u
	/* Generate a START condition on I2C bus */
#define I2C_CTL0_START						8u
	/* Whether to stretch SCL low when data is not ready in slave mode */
#define I2C_CTL0_SS						7u
	/* Whether or not to response to a General Call (0x00) */
#define I2C_CTL0_GCEN						6u
	/* PEC Calculation Switch */
#define I2C_CTL0_PECEN						5u
	/* ARP protocol in SMBus switch */
#define I2C_CTL0_ARPEN						4u
	/* SMBusType Selection */
#define I2C_CTL0_SMBSEL					3u
	/* SMBus/I2C mode switch */
#define I2C_CTL0_SMBEN						1u
	/* I2C peripheral enable */
#define I2C_CTL0_I2CEN						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Control register 1 */
	uint32_t volatile CTL1;
	/* Flag indicating DMA last transfer */
#define I2C_CTL1_DMALST					12u
	/* DMA mode switch */
#define I2C_CTL1_DMAON						11u
	/* Buffer interrupt enable */
#define I2C_CTL1_BUFIE						10u
	/* Event interrupt enable */
#define I2C_CTL1_EVIE						9u
	/* Error interrupt enable */
#define I2C_CTL1_ERRIE						8u
	/* I2C Peripheral clock frequency */
#define I2C_CTL1_I2CCLK_msb					5u
#define I2C_CTL1_I2CCLK_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Slave address register 0 */
	uint32_t volatile SADDR0;
	/* Address mode for the I2C slave */
#define I2C_SADDR0_ADDFORMAT					15u
	/* Highest two bits of a 10-bit address */
#define I2C_SADDR0_ADDRESS9_8_msb				9u
#define I2C_SADDR0_ADDRESS9_8_lsb				8u
	/* 7-bit address or bits 7:1 of a 10-bit address */
#define I2C_SADDR0_ADDRESS7_1_msb				7u
#define I2C_SADDR0_ADDRESS7_1_lsb				1u
	/* Bit 0 of a 10-bit address */
#define I2C_SADDR0_ADDRESS0					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Slave address register 1 */
	uint32_t volatile SADDR1;
	/* Second I2C address for the slave in Dual-Address mode */
#define I2C_SADDR1_ADDRESS2_msb				7u
#define I2C_SADDR1_ADDRESS2_lsb				1u
	/* Dual-Address mode switch */
#define I2C_SADDR1_DUADEN					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Transfer buffer register */
	uint32_t volatile DATA;
	/* Transmission or reception data buffer register */
#define I2C_DATA_TRB_msb					7u
#define I2C_DATA_TRB_lsb					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Transfer status register 0 */
	uint32_t volatile STAT0;
	/* SMBus Alert status */
#define I2C_STAT0_SMBALT					15u
	/* Timeout signal in SMBus mode */
#define I2C_STAT0_SMBTO					14u
	/* PEC error when receiving data */
#define I2C_STAT0_PECERR					12u
	/* Over-run or under-run situation occurs in slave mode */
#define I2C_STAT0_OUERR					11u
	/* Acknowledge error */
#define I2C_STAT0_AERR						10u
	/* Arbitration Lost in master mode */
#define I2C_STAT0_LOSTARB					9u
	/* A bus error occurs indication a unexpected START or STOP condition on I2C bus */
#define I2C_STAT0_BERR						8u
	/* I2C_DATA is Empty during transmitting */
#define I2C_STAT0_TBE						7u
	/* I2C_DATA is not Empty during receiving */
#define I2C_STAT0_RBNE						6u
	/* STOP condition detected in slave mode */
#define I2C_STAT0_STPDET					4u
	/* Header of 10-bit address is sent in master mode */
#define I2C_STAT0_ADD10SEND					3u
	/* Byte transmission completed */
#define I2C_STAT0_BTC						2u
	/* Address is sent in master mode or received and matches in slave mode */
#define I2C_STAT0_ADDSEND					1u
	/* START condition sent out in master mode */
#define I2C_STAT0_SBSEND					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Transfer status register 1 */
	uint32_t volatile STAT1;
	/* Packet Error Checking Value that calculated by hardware when PEC is enabled */
#define I2C_STAT1_PECV_msb					15u
#define I2C_STAT1_PECV_lsb					8u
	/* Dual Flag in slave mode */
#define I2C_STAT1_DUMODF					7u
	/* SMBus Host Header detected in slave mode */
#define I2C_STAT1_HSTSMB					6u
	/* Default address of SMBusDevice */
#define I2C_STAT1_DEFSMB					5u
	/* General call address (00h) received */
#define I2C_STAT1_RXGC						4u
	/* Whether the I2C is a transmitter or a receiver */
#define I2C_STAT1_TR						2u
	/* Busy flag */
#define I2C_STAT1_I2CBSY					1u
	/* A flag indicating whether I2C block is in master or slave mode */
#define I2C_STAT1_MASTER					0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: Clock configure register */
	uint32_t volatile CKCFG;
	/* I2C speed selection in master mode */
#define I2C_CKCFG_FAST						15u
	/* Duty cycle in fast mode */
#define I2C_CKCFG_DTCY						14u
	/* I2C Clock control in master mode */
#define I2C_CKCFG_CLKC_msb					11u
#define I2C_CKCFG_CLKC_lsb					0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Rise time register */
	uint32_t volatile RT;
	/* Maximum rise time in master mode */
#define I2C_RT_RISETIME_msb					5u
#define I2C_RT_RISETIME_lsb					0u

};


#define ECLIC ((struct sdk_eclic *)0xD2000000)

struct sdk_eclic {

	/* 0x00: cliccfg Register */
	uint32_t volatile CLICCFG;
	/* NLBITS */
#define ECLIC_CLICCFG_NLBITS_msb				4u
#define ECLIC_CLICCFG_NLBITS_lsb				1u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: clicinfo Register */
	uint32_t volatile CLICINFO;
	/* NUM_INTERRUPT */
#define ECLIC_CLICINFO_NUM_INTERRUPT_msb			12u
#define ECLIC_CLICINFO_NUM_INTERRUPT_lsb			0u
	/* VERSION */
#define ECLIC_CLICINFO_VERSION_msb				20u
#define ECLIC_CLICINFO_VERSION_lsb				13u
	/* CLICINTCTLBITS */
#define ECLIC_CLICINFO_CLICINTCTLBITS_msb			24u
#define ECLIC_CLICINFO_CLICINTCTLBITS_lsb			21u

	/* 0x04 */
	uint8_t RESERVED1[0x0Bu-0x04u];

	/* 0x0B: MTH Register */
	uint32_t volatile MTH;
	/* MTH */
#define ECLIC_MTH_MTH_msb					7u
#define ECLIC_MTH_MTH_lsb					0u

	/* 0x0B */
	uint8_t RESERVED2[0x1000u-0x0Bu];

	/* 0x1000: clicintip  Register */
	uint32_t volatile CLICINTIP_0;
	/* IP */
#define ECLIC_CLICINTIP_0_IP					0u

	/* 0x1000 */
	uint8_t RESERVED3[0x1004u-0x1000u];

	/* 0x1004: clicintip  Register */
	uint32_t volatile CLICINTIP_1;
	/* IP */
#define ECLIC_CLICINTIP_1_IP					0u

	/* 0x1004 */
	uint8_t RESERVED4[0x1008u-0x1004u];

	/* 0x1008: clicintip  Register */
	uint32_t volatile CLICINTIP_2;
	/* IP */
#define ECLIC_CLICINTIP_2_IP					0u

	/* 0x1008 */
	uint8_t RESERVED5[0x100Cu-0x1008u];

	/* 0x100C: clicintip  Register */
	uint32_t volatile CLICINTIP_3;
	/* IP */
#define ECLIC_CLICINTIP_3_IP					0u

	/* 0x100C */
	uint8_t RESERVED6[0x1010u-0x100Cu];

	/* 0x1010: clicintip  Register */
	uint32_t volatile CLICINTIP_4;
	/* IP */
#define ECLIC_CLICINTIP_4_IP					0u

	/* 0x1010 */
	uint8_t RESERVED7[0x1014u-0x1010u];

	/* 0x1014: clicintip  Register */
	uint32_t volatile CLICINTIP_5;
	/* IP */
#define ECLIC_CLICINTIP_5_IP					0u

	/* 0x1014 */
	uint8_t RESERVED8[0x1018u-0x1014u];

	/* 0x1018: clicintip  Register */
	uint32_t volatile CLICINTIP_6;
	/* IP */
#define ECLIC_CLICINTIP_6_IP					0u

	/* 0x1018 */
	uint8_t RESERVED9[0x101Cu-0x1018u];

	/* 0x101C: clicintip  Register */
	uint32_t volatile CLICINTIP_7;
	/* IP */
#define ECLIC_CLICINTIP_7_IP					0u

	/* 0x101C */
	uint8_t RESERVED10[0x1020u-0x101Cu];

	/* 0x1020: clicintip  Register */
	uint32_t volatile CLICINTIP_8;
	/* IP */
#define ECLIC_CLICINTIP_8_IP					0u

	/* 0x1020 */
	uint8_t RESERVED11[0x1024u-0x1020u];

	/* 0x1024: clicintip  Register */
	uint32_t volatile CLICINTIP_9;
	/* IP */
#define ECLIC_CLICINTIP_9_IP					0u

	/* 0x1024 */
	uint8_t RESERVED12[0x1028u-0x1024u];

	/* 0x1028: clicintip  Register */
	uint32_t volatile CLICINTIP_10;
	/* IP */
#define ECLIC_CLICINTIP_10_IP					0u

	/* 0x1028 */
	uint8_t RESERVED13[0x102Cu-0x1028u];

	/* 0x102C: clicintip  Register */
	uint32_t volatile CLICINTIP_11;
	/* IP */
#define ECLIC_CLICINTIP_11_IP					0u

	/* 0x102C */
	uint8_t RESERVED14[0x1030u-0x102Cu];

	/* 0x1030: clicintip  Register */
	uint32_t volatile CLICINTIP_12;
	/* IP */
#define ECLIC_CLICINTIP_12_IP					0u

	/* 0x1030 */
	uint8_t RESERVED15[0x1034u-0x1030u];

	/* 0x1034: clicintip  Register */
	uint32_t volatile CLICINTIP_13;
	/* IP */
#define ECLIC_CLICINTIP_13_IP					0u

	/* 0x1034 */
	uint8_t RESERVED16[0x1038u-0x1034u];

	/* 0x1038: clicintip  Register */
	uint32_t volatile CLICINTIP_14;
	/* IP */
#define ECLIC_CLICINTIP_14_IP					0u

	/* 0x1038 */
	uint8_t RESERVED17[0x103Cu-0x1038u];

	/* 0x103C: clicintip  Register */
	uint32_t volatile CLICINTIP_15;
	/* IP */
#define ECLIC_CLICINTIP_15_IP					0u

	/* 0x103C */
	uint8_t RESERVED18[0x1040u-0x103Cu];

	/* 0x1040: clicintip  Register */
	uint32_t volatile CLICINTIP_16;
	/* IP */
#define ECLIC_CLICINTIP_16_IP					0u

	/* 0x1040 */
	uint8_t RESERVED19[0x1044u-0x1040u];

	/* 0x1044: clicintip  Register */
	uint32_t volatile CLICINTIP_17;
	/* IP */
#define ECLIC_CLICINTIP_17_IP					0u

	/* 0x1044 */
	uint8_t RESERVED20[0x1048u-0x1044u];

	/* 0x1048: clicintip  Register */
	uint32_t volatile CLICINTIP_18;
	/* IP */
#define ECLIC_CLICINTIP_18_IP					0u

	/* 0x1048 */
	uint8_t RESERVED21[0x104Cu-0x1048u];

	/* 0x104C: clicintip  Register */
	uint32_t volatile CLICINTIP_19;
	/* IP */
#define ECLIC_CLICINTIP_19_IP					0u

	/* 0x104C */
	uint8_t RESERVED22[0x1050u-0x104Cu];

	/* 0x1050: clicintip  Register */
	uint32_t volatile CLICINTIP_20;
	/* IP */
#define ECLIC_CLICINTIP_20_IP					0u

	/* 0x1050 */
	uint8_t RESERVED23[0x1054u-0x1050u];

	/* 0x1054: clicintip  Register */
	uint32_t volatile CLICINTIP_21;
	/* IP */
#define ECLIC_CLICINTIP_21_IP					0u

	/* 0x1054 */
	uint8_t RESERVED24[0x1058u-0x1054u];

	/* 0x1058: clicintip  Register */
	uint32_t volatile CLICINTIP_22;
	/* IP */
#define ECLIC_CLICINTIP_22_IP					0u

	/* 0x1058 */
	uint8_t RESERVED25[0x105Cu-0x1058u];

	/* 0x105C: clicintip  Register */
	uint32_t volatile CLICINTIP_23;
	/* IP */
#define ECLIC_CLICINTIP_23_IP					0u

	/* 0x105C */
	uint8_t RESERVED26[0x1060u-0x105Cu];

	/* 0x1060: clicintip  Register */
	uint32_t volatile CLICINTIP_24;
	/* IP */
#define ECLIC_CLICINTIP_24_IP					0u

	/* 0x1060 */
	uint8_t RESERVED27[0x1064u-0x1060u];

	/* 0x1064: clicintip  Register */
	uint32_t volatile CLICINTIP_25;
	/* IP */
#define ECLIC_CLICINTIP_25_IP					0u

	/* 0x1064 */
	uint8_t RESERVED28[0x1068u-0x1064u];

	/* 0x1068: clicintip  Register */
	uint32_t volatile CLICINTIP_26;
	/* IP */
#define ECLIC_CLICINTIP_26_IP					0u

	/* 0x1068 */
	uint8_t RESERVED29[0x106Cu-0x1068u];

	/* 0x106C: clicintip  Register */
	uint32_t volatile CLICINTIP_27;
	/* IP */
#define ECLIC_CLICINTIP_27_IP					0u

	/* 0x106C */
	uint8_t RESERVED30[0x1070u-0x106Cu];

	/* 0x1070: clicintip  Register */
	uint32_t volatile CLICINTIP_28;
	/* IP */
#define ECLIC_CLICINTIP_28_IP					0u

	/* 0x1070 */
	uint8_t RESERVED31[0x1074u-0x1070u];

	/* 0x1074: clicintip  Register */
	uint32_t volatile CLICINTIP_29;
	/* IP */
#define ECLIC_CLICINTIP_29_IP					0u

	/* 0x1074 */
	uint8_t RESERVED32[0x1078u-0x1074u];

	/* 0x1078: clicintip  Register */
	uint32_t volatile CLICINTIP_30;
	/* IP */
#define ECLIC_CLICINTIP_30_IP					0u

	/* 0x1078 */
	uint8_t RESERVED33[0x107Cu-0x1078u];

	/* 0x107C: clicintip  Register */
	uint32_t volatile CLICINTIP_31;
	/* IP */
#define ECLIC_CLICINTIP_31_IP					0u

	/* 0x107C */
	uint8_t RESERVED34[0x1080u-0x107Cu];

	/* 0x1080: clicintip  Register */
	uint32_t volatile CLICINTIP_32;
	/* IP */
#define ECLIC_CLICINTIP_32_IP					0u

	/* 0x1080 */
	uint8_t RESERVED35[0x1084u-0x1080u];

	/* 0x1084: clicintip  Register */
	uint32_t volatile CLICINTIP_33;
	/* IP */
#define ECLIC_CLICINTIP_33_IP					0u

	/* 0x1084 */
	uint8_t RESERVED36[0x1088u-0x1084u];

	/* 0x1088: clicintip  Register */
	uint32_t volatile CLICINTIP_34;
	/* IP */
#define ECLIC_CLICINTIP_34_IP					0u

	/* 0x1088 */
	uint8_t RESERVED37[0x108Cu-0x1088u];

	/* 0x108C: clicintip  Register */
	uint32_t volatile CLICINTIP_35;
	/* IP */
#define ECLIC_CLICINTIP_35_IP					0u

	/* 0x108C */
	uint8_t RESERVED38[0x1090u-0x108Cu];

	/* 0x1090: clicintip  Register */
	uint32_t volatile CLICINTIP_36;
	/* IP */
#define ECLIC_CLICINTIP_36_IP					0u

	/* 0x1090 */
	uint8_t RESERVED39[0x1094u-0x1090u];

	/* 0x1094: clicintip  Register */
	uint32_t volatile CLICINTIP_37;
	/* IP */
#define ECLIC_CLICINTIP_37_IP					0u

	/* 0x1094 */
	uint8_t RESERVED40[0x1098u-0x1094u];

	/* 0x1098: clicintip  Register */
	uint32_t volatile CLICINTIP_38;
	/* IP */
#define ECLIC_CLICINTIP_38_IP					0u

	/* 0x1098 */
	uint8_t RESERVED41[0x109Cu-0x1098u];

	/* 0x109C: clicintip  Register */
	uint32_t volatile CLICINTIP_39;
	/* IP */
#define ECLIC_CLICINTIP_39_IP					0u

	/* 0x109C */
	uint8_t RESERVED42[0x10A0u-0x109Cu];

	/* 0x10A0: clicintip  Register */
	uint32_t volatile CLICINTIP_40;
	/* IP */
#define ECLIC_CLICINTIP_40_IP					0u

	/* 0x10A0 */
	uint8_t RESERVED43[0x10A4u-0x10A0u];

	/* 0x10A4: clicintip  Register */
	uint32_t volatile CLICINTIP_41;
	/* IP */
#define ECLIC_CLICINTIP_41_IP					0u

	/* 0x10A4 */
	uint8_t RESERVED44[0x10A8u-0x10A4u];

	/* 0x10A8: clicintip  Register */
	uint32_t volatile CLICINTIP_42;
	/* IP */
#define ECLIC_CLICINTIP_42_IP					0u

	/* 0x10A8 */
	uint8_t RESERVED45[0x10ACu-0x10A8u];

	/* 0x10AC: clicintip  Register */
	uint32_t volatile CLICINTIP_43;
	/* IP */
#define ECLIC_CLICINTIP_43_IP					0u

	/* 0x10AC */
	uint8_t RESERVED46[0x10B0u-0x10ACu];

	/* 0x10B0: clicintip  Register */
	uint32_t volatile CLICINTIP_44;
	/* IP */
#define ECLIC_CLICINTIP_44_IP					0u

	/* 0x10B0 */
	uint8_t RESERVED47[0x10B4u-0x10B0u];

	/* 0x10B4: clicintip  Register */
	uint32_t volatile CLICINTIP_45;
	/* IP */
#define ECLIC_CLICINTIP_45_IP					0u

	/* 0x10B4 */
	uint8_t RESERVED48[0x10B8u-0x10B4u];

	/* 0x10B8: clicintip  Register */
	uint32_t volatile CLICINTIP_46;
	/* IP */
#define ECLIC_CLICINTIP_46_IP					0u

	/* 0x10B8 */
	uint8_t RESERVED49[0x10BCu-0x10B8u];

	/* 0x10BC: clicintip  Register */
	uint32_t volatile CLICINTIP_47;
	/* IP */
#define ECLIC_CLICINTIP_47_IP					0u

	/* 0x10BC */
	uint8_t RESERVED50[0x10C0u-0x10BCu];

	/* 0x10C0: clicintip  Register */
	uint32_t volatile CLICINTIP_48;
	/* IP */
#define ECLIC_CLICINTIP_48_IP					0u

	/* 0x10C0 */
	uint8_t RESERVED51[0x10C4u-0x10C0u];

	/* 0x10C4: clicintip  Register */
	uint32_t volatile CLICINTIP_49;
	/* IP */
#define ECLIC_CLICINTIP_49_IP					0u

	/* 0x10C4 */
	uint8_t RESERVED52[0x10C8u-0x10C4u];

	/* 0x10C8: clicintip  Register */
	uint32_t volatile CLICINTIP_50;
	/* IP */
#define ECLIC_CLICINTIP_50_IP					0u

	/* 0x10C8 */
	uint8_t RESERVED53[0x10CCu-0x10C8u];

	/* 0x10CC: clicintip  Register */
	uint32_t volatile CLICINTIP_51;
	/* IP */
#define ECLIC_CLICINTIP_51_IP					0u

	/* 0x10CC */
	uint8_t RESERVED54[0x10D0u-0x10CCu];

	/* 0x10D0: clicintip  Register */
	uint32_t volatile CLICINTIP_52;
	/* IP */
#define ECLIC_CLICINTIP_52_IP					0u

	/* 0x10D0 */
	uint8_t RESERVED55[0x10D4u-0x10D0u];

	/* 0x10D4: clicintip  Register */
	uint32_t volatile CLICINTIP_53;
	/* IP */
#define ECLIC_CLICINTIP_53_IP					0u

	/* 0x10D4 */
	uint8_t RESERVED56[0x10D8u-0x10D4u];

	/* 0x10D8: clicintip  Register */
	uint32_t volatile CLICINTIP_54;
	/* IP */
#define ECLIC_CLICINTIP_54_IP					0u

	/* 0x10D8 */
	uint8_t RESERVED57[0x10DCu-0x10D8u];

	/* 0x10DC: clicintip  Register */
	uint32_t volatile CLICINTIP_55;
	/* IP */
#define ECLIC_CLICINTIP_55_IP					0u

	/* 0x10DC */
	uint8_t RESERVED58[0x10E0u-0x10DCu];

	/* 0x10E0: clicintip  Register */
	uint32_t volatile CLICINTIP_56;
	/* IP */
#define ECLIC_CLICINTIP_56_IP					0u

	/* 0x10E0 */
	uint8_t RESERVED59[0x10E4u-0x10E0u];

	/* 0x10E4: clicintip  Register */
	uint32_t volatile CLICINTIP_57;
	/* IP */
#define ECLIC_CLICINTIP_57_IP					0u

	/* 0x10E4 */
	uint8_t RESERVED60[0x10E8u-0x10E4u];

	/* 0x10E8: clicintip  Register */
	uint32_t volatile CLICINTIP_58;
	/* IP */
#define ECLIC_CLICINTIP_58_IP					0u

	/* 0x10E8 */
	uint8_t RESERVED61[0x10ECu-0x10E8u];

	/* 0x10EC: clicintip  Register */
	uint32_t volatile CLICINTIP_59;
	/* IP */
#define ECLIC_CLICINTIP_59_IP					0u

	/* 0x10EC */
	uint8_t RESERVED62[0x10F0u-0x10ECu];

	/* 0x10F0: clicintip  Register */
	uint32_t volatile CLICINTIP_60;
	/* IP */
#define ECLIC_CLICINTIP_60_IP					0u

	/* 0x10F0 */
	uint8_t RESERVED63[0x10F4u-0x10F0u];

	/* 0x10F4: clicintip  Register */
	uint32_t volatile CLICINTIP_61;
	/* IP */
#define ECLIC_CLICINTIP_61_IP					0u

	/* 0x10F4 */
	uint8_t RESERVED64[0x10F8u-0x10F4u];

	/* 0x10F8: clicintip  Register */
	uint32_t volatile CLICINTIP_62;
	/* IP */
#define ECLIC_CLICINTIP_62_IP					0u

	/* 0x10F8 */
	uint8_t RESERVED65[0x10FCu-0x10F8u];

	/* 0x10FC: clicintip  Register */
	uint32_t volatile CLICINTIP_63;
	/* IP */
#define ECLIC_CLICINTIP_63_IP					0u

	/* 0x10FC */
	uint8_t RESERVED66[0x1100u-0x10FCu];

	/* 0x1100: clicintip  Register */
	uint32_t volatile CLICINTIP_64;
	/* IP */
#define ECLIC_CLICINTIP_64_IP					0u

	/* 0x1100 */
	uint8_t RESERVED67[0x1104u-0x1100u];

	/* 0x1104: clicintip  Register */
	uint32_t volatile CLICINTIP_65;
	/* IP */
#define ECLIC_CLICINTIP_65_IP					0u

	/* 0x1104 */
	uint8_t RESERVED68[0x1108u-0x1104u];

	/* 0x1108: clicintip  Register */
	uint32_t volatile CLICINTIP_66;
	/* IP */
#define ECLIC_CLICINTIP_66_IP					0u

	/* 0x1108 */
	uint8_t RESERVED69[0x110Cu-0x1108u];

	/* 0x110C: clicintip  Register */
	uint32_t volatile CLICINTIP_67;
	/* IP */
#define ECLIC_CLICINTIP_67_IP					0u

	/* 0x110C */
	uint8_t RESERVED70[0x1110u-0x110Cu];

	/* 0x1110: clicintip  Register */
	uint32_t volatile CLICINTIP_68;
	/* IP */
#define ECLIC_CLICINTIP_68_IP					0u

	/* 0x1110 */
	uint8_t RESERVED71[0x1114u-0x1110u];

	/* 0x1114: clicintip  Register */
	uint32_t volatile CLICINTIP_69;
	/* IP */
#define ECLIC_CLICINTIP_69_IP					0u

	/* 0x1114 */
	uint8_t RESERVED72[0x1118u-0x1114u];

	/* 0x1118: clicintip  Register */
	uint32_t volatile CLICINTIP_70;
	/* IP */
#define ECLIC_CLICINTIP_70_IP					0u

	/* 0x1118 */
	uint8_t RESERVED73[0x111Cu-0x1118u];

	/* 0x111C: clicintip  Register */
	uint32_t volatile CLICINTIP_71;
	/* IP */
#define ECLIC_CLICINTIP_71_IP					0u

	/* 0x111C */
	uint8_t RESERVED74[0x1120u-0x111Cu];

	/* 0x1120: clicintip  Register */
	uint32_t volatile CLICINTIP_72;
	/* IP */
#define ECLIC_CLICINTIP_72_IP					0u

	/* 0x1120 */
	uint8_t RESERVED75[0x1124u-0x1120u];

	/* 0x1124: clicintip  Register */
	uint32_t volatile CLICINTIP_73;
	/* IP */
#define ECLIC_CLICINTIP_73_IP					0u

	/* 0x1124 */
	uint8_t RESERVED76[0x1128u-0x1124u];

	/* 0x1128: clicintip  Register */
	uint32_t volatile CLICINTIP_74;
	/* IP */
#define ECLIC_CLICINTIP_74_IP					0u

	/* 0x1128 */
	uint8_t RESERVED77[0x112Cu-0x1128u];

	/* 0x112C: clicintip  Register */
	uint32_t volatile CLICINTIP_75;
	/* IP */
#define ECLIC_CLICINTIP_75_IP					0u

	/* 0x112C */
	uint8_t RESERVED78[0x1130u-0x112Cu];

	/* 0x1130: clicintip  Register */
	uint32_t volatile CLICINTIP_76;
	/* IP */
#define ECLIC_CLICINTIP_76_IP					0u

	/* 0x1130 */
	uint8_t RESERVED79[0x1134u-0x1130u];

	/* 0x1134: clicintip  Register */
	uint32_t volatile CLICINTIP_77;
	/* IP */
#define ECLIC_CLICINTIP_77_IP					0u

	/* 0x1134 */
	uint8_t RESERVED80[0x1138u-0x1134u];

	/* 0x1138: clicintip  Register */
	uint32_t volatile CLICINTIP_78;
	/* IP */
#define ECLIC_CLICINTIP_78_IP					0u

	/* 0x1138 */
	uint8_t RESERVED81[0x113Cu-0x1138u];

	/* 0x113C: clicintip  Register */
	uint32_t volatile CLICINTIP_79;
	/* IP */
#define ECLIC_CLICINTIP_79_IP					0u

	/* 0x113C */
	uint8_t RESERVED82[0x1140u-0x113Cu];

	/* 0x1140: clicintip  Register */
	uint32_t volatile CLICINTIP_80;
	/* IP */
#define ECLIC_CLICINTIP_80_IP					0u

	/* 0x1140 */
	uint8_t RESERVED83[0x1144u-0x1140u];

	/* 0x1144: clicintip  Register */
	uint32_t volatile CLICINTIP_81;
	/* IP */
#define ECLIC_CLICINTIP_81_IP					0u

	/* 0x1144 */
	uint8_t RESERVED84[0x1148u-0x1144u];

	/* 0x1148: clicintip  Register */
	uint32_t volatile CLICINTIP_82;
	/* IP */
#define ECLIC_CLICINTIP_82_IP					0u

	/* 0x1148 */
	uint8_t RESERVED85[0x114Cu-0x1148u];

	/* 0x114C: clicintip  Register */
	uint32_t volatile CLICINTIP_83;
	/* IP */
#define ECLIC_CLICINTIP_83_IP					0u

	/* 0x114C */
	uint8_t RESERVED86[0x1150u-0x114Cu];

	/* 0x1150: clicintip  Register */
	uint32_t volatile CLICINTIP_84;
	/* IP */
#define ECLIC_CLICINTIP_84_IP					0u

	/* 0x1150 */
	uint8_t RESERVED87[0x1158u-0x1150u];

	/* 0x1158: clicintip  Register */
	uint32_t volatile CLICINTIP_85;
	/* IP */
#define ECLIC_CLICINTIP_85_IP					0u

	/* 0x1158 */
	uint8_t RESERVED88[0x115Cu-0x1158u];

	/* 0x115C: clicintip  Register */
	uint32_t volatile CLICINTIP_86;
	/* IP */
#define ECLIC_CLICINTIP_86_IP					0u

	/* 0x1001: clicintie Register */
	uint32_t volatile CLICINTIE_0;
	/* IE */
#define ECLIC_CLICINTIE_0_IE					0u

	/* 0x1001 */
	uint8_t RESERVED89[0x1005u-0x1001u];

	/* 0x1005: clicintie Register */
	uint32_t volatile CLICINTIE_1;
	/* IE */
#define ECLIC_CLICINTIE_1_IE					0u

	/* 0x1005 */
	uint8_t RESERVED90[0x1009u-0x1005u];

	/* 0x1009: clicintie Register */
	uint32_t volatile CLICINTIE_2;
	/* IE */
#define ECLIC_CLICINTIE_2_IE					0u

	/* 0x1009 */
	uint8_t RESERVED91[0x100Du-0x1009u];

	/* 0x100D: clicintie Register */
	uint32_t volatile CLICINTIE_3;
	/* IE */
#define ECLIC_CLICINTIE_3_IE					0u

	/* 0x100D */
	uint8_t RESERVED92[0x1011u-0x100Du];

	/* 0x1011: clicintie Register */
	uint32_t volatile CLICINTIE_4;
	/* IE */
#define ECLIC_CLICINTIE_4_IE					0u

	/* 0x1011 */
	uint8_t RESERVED93[0x1015u-0x1011u];

	/* 0x1015: clicintie Register */
	uint32_t volatile CLICINTIE_5;
	/* IE */
#define ECLIC_CLICINTIE_5_IE					0u

	/* 0x1015 */
	uint8_t RESERVED94[0x1019u-0x1015u];

	/* 0x1019: clicintie Register */
	uint32_t volatile CLICINTIE_6;
	/* IE */
#define ECLIC_CLICINTIE_6_IE					0u

	/* 0x1019 */
	uint8_t RESERVED95[0x101Du-0x1019u];

	/* 0x101D: clicintie Register */
	uint32_t volatile CLICINTIE_7;
	/* IE */
#define ECLIC_CLICINTIE_7_IE					0u

	/* 0x101D */
	uint8_t RESERVED96[0x1021u-0x101Du];

	/* 0x1021: clicintie Register */
	uint32_t volatile CLICINTIE_8;
	/* IE */
#define ECLIC_CLICINTIE_8_IE					0u

	/* 0x1021 */
	uint8_t RESERVED97[0x1025u-0x1021u];

	/* 0x1025: clicintie Register */
	uint32_t volatile CLICINTIE_9;
	/* IE */
#define ECLIC_CLICINTIE_9_IE					0u

	/* 0x1025 */
	uint8_t RESERVED98[0x1029u-0x1025u];

	/* 0x1029: clicintie Register */
	uint32_t volatile CLICINTIE_10;
	/* IE */
#define ECLIC_CLICINTIE_10_IE					0u

	/* 0x1029 */
	uint8_t RESERVED99[0x102Du-0x1029u];

	/* 0x102D: clicintie Register */
	uint32_t volatile CLICINTIE_11;
	/* IE */
#define ECLIC_CLICINTIE_11_IE					0u

	/* 0x102D */
	uint8_t RESERVED100[0x1031u-0x102Du];

	/* 0x1031: clicintie Register */
	uint32_t volatile CLICINTIE_12;
	/* IE */
#define ECLIC_CLICINTIE_12_IE					0u

	/* 0x1031 */
	uint8_t RESERVED101[0x1035u-0x1031u];

	/* 0x1035: clicintie Register */
	uint32_t volatile CLICINTIE_13;
	/* IE */
#define ECLIC_CLICINTIE_13_IE					0u

	/* 0x1035 */
	uint8_t RESERVED102[0x1039u-0x1035u];

	/* 0x1039: clicintie Register */
	uint32_t volatile CLICINTIE_14;
	/* IE */
#define ECLIC_CLICINTIE_14_IE					0u

	/* 0x1039 */
	uint8_t RESERVED103[0x103Du-0x1039u];

	/* 0x103D: clicintie Register */
	uint32_t volatile CLICINTIE_15;
	/* IE */
#define ECLIC_CLICINTIE_15_IE					0u

	/* 0x103D */
	uint8_t RESERVED104[0x1041u-0x103Du];

	/* 0x1041: clicintie Register */
	uint32_t volatile CLICINTIE_16;
	/* IE */
#define ECLIC_CLICINTIE_16_IE					0u

	/* 0x1041 */
	uint8_t RESERVED105[0x1045u-0x1041u];

	/* 0x1045: clicintie Register */
	uint32_t volatile CLICINTIE_17;
	/* IE */
#define ECLIC_CLICINTIE_17_IE					0u

	/* 0x1045 */
	uint8_t RESERVED106[0x1049u-0x1045u];

	/* 0x1049: clicintie Register */
	uint32_t volatile CLICINTIE_18;
	/* IE */
#define ECLIC_CLICINTIE_18_IE					0u

	/* 0x1049 */
	uint8_t RESERVED107[0x104Du-0x1049u];

	/* 0x104D: clicintie Register */
	uint32_t volatile CLICINTIE_19;
	/* IE */
#define ECLIC_CLICINTIE_19_IE					0u

	/* 0x104D */
	uint8_t RESERVED108[0x1051u-0x104Du];

	/* 0x1051: clicintie Register */
	uint32_t volatile CLICINTIE_20;
	/* IE */
#define ECLIC_CLICINTIE_20_IE					0u

	/* 0x1051 */
	uint8_t RESERVED109[0x1055u-0x1051u];

	/* 0x1055: clicintie Register */
	uint32_t volatile CLICINTIE_21;
	/* IE */
#define ECLIC_CLICINTIE_21_IE					0u

	/* 0x1055 */
	uint8_t RESERVED110[0x1059u-0x1055u];

	/* 0x1059: clicintie Register */
	uint32_t volatile CLICINTIE_22;
	/* IE */
#define ECLIC_CLICINTIE_22_IE					0u

	/* 0x1059 */
	uint8_t RESERVED111[0x105Du-0x1059u];

	/* 0x105D: clicintie Register */
	uint32_t volatile CLICINTIE_23;
	/* IE */
#define ECLIC_CLICINTIE_23_IE					0u

	/* 0x105D */
	uint8_t RESERVED112[0x1061u-0x105Du];

	/* 0x1061: clicintie Register */
	uint32_t volatile CLICINTIE_24;
	/* IE */
#define ECLIC_CLICINTIE_24_IE					0u

	/* 0x1061 */
	uint8_t RESERVED113[0x1065u-0x1061u];

	/* 0x1065: clicintie Register */
	uint32_t volatile CLICINTIE_25;
	/* IE */
#define ECLIC_CLICINTIE_25_IE					0u

	/* 0x1065 */
	uint8_t RESERVED114[0x1069u-0x1065u];

	/* 0x1069: clicintie Register */
	uint32_t volatile CLICINTIE_26;
	/* IE */
#define ECLIC_CLICINTIE_26_IE					0u

	/* 0x1069 */
	uint8_t RESERVED115[0x106Du-0x1069u];

	/* 0x106D: clicintie Register */
	uint32_t volatile CLICINTIE_27;
	/* IE */
#define ECLIC_CLICINTIE_27_IE					0u

	/* 0x106D */
	uint8_t RESERVED116[0x1071u-0x106Du];

	/* 0x1071: clicintie Register */
	uint32_t volatile CLICINTIE_28;
	/* IE */
#define ECLIC_CLICINTIE_28_IE					0u

	/* 0x1071 */
	uint8_t RESERVED117[0x1075u-0x1071u];

	/* 0x1075: clicintie Register */
	uint32_t volatile CLICINTIE_29;
	/* IE */
#define ECLIC_CLICINTIE_29_IE					0u

	/* 0x1075 */
	uint8_t RESERVED118[0x1079u-0x1075u];

	/* 0x1079: clicintie Register */
	uint32_t volatile CLICINTIE_30;
	/* IE */
#define ECLIC_CLICINTIE_30_IE					0u

	/* 0x1079 */
	uint8_t RESERVED119[0x107Du-0x1079u];

	/* 0x107D: clicintie Register */
	uint32_t volatile CLICINTIE_31;
	/* IE */
#define ECLIC_CLICINTIE_31_IE					0u

	/* 0x107D */
	uint8_t RESERVED120[0x1081u-0x107Du];

	/* 0x1081: clicintie Register */
	uint32_t volatile CLICINTIE_32;
	/* IE */
#define ECLIC_CLICINTIE_32_IE					0u

	/* 0x1081 */
	uint8_t RESERVED121[0x1085u-0x1081u];

	/* 0x1085: clicintie Register */
	uint32_t volatile CLICINTIE_33;
	/* IE */
#define ECLIC_CLICINTIE_33_IE					0u

	/* 0x1085 */
	uint8_t RESERVED122[0x1089u-0x1085u];

	/* 0x1089: clicintie Register */
	uint32_t volatile CLICINTIE_34;
	/* IE */
#define ECLIC_CLICINTIE_34_IE					0u

	/* 0x1089 */
	uint8_t RESERVED123[0x108Du-0x1089u];

	/* 0x108D: clicintie Register */
	uint32_t volatile CLICINTIE_35;
	/* IE */
#define ECLIC_CLICINTIE_35_IE					0u

	/* 0x108D */
	uint8_t RESERVED124[0x1091u-0x108Du];

	/* 0x1091: clicintie Register */
	uint32_t volatile CLICINTIE_36;
	/* IE */
#define ECLIC_CLICINTIE_36_IE					0u

	/* 0x1091 */
	uint8_t RESERVED125[0x1095u-0x1091u];

	/* 0x1095: clicintie Register */
	uint32_t volatile CLICINTIE_37;
	/* IE */
#define ECLIC_CLICINTIE_37_IE					0u

	/* 0x1095 */
	uint8_t RESERVED126[0x1099u-0x1095u];

	/* 0x1099: clicintie Register */
	uint32_t volatile CLICINTIE_38;
	/* IE */
#define ECLIC_CLICINTIE_38_IE					0u

	/* 0x1099 */
	uint8_t RESERVED127[0x109Du-0x1099u];

	/* 0x109D: clicintie Register */
	uint32_t volatile CLICINTIE_39;
	/* IE */
#define ECLIC_CLICINTIE_39_IE					0u

	/* 0x109D */
	uint8_t RESERVED128[0x10A1u-0x109Du];

	/* 0x10A1: clicintie Register */
	uint32_t volatile CLICINTIE_40;
	/* IE */
#define ECLIC_CLICINTIE_40_IE					0u

	/* 0x10A1 */
	uint8_t RESERVED129[0x10A5u-0x10A1u];

	/* 0x10A5: clicintie Register */
	uint32_t volatile CLICINTIE_41;
	/* IE */
#define ECLIC_CLICINTIE_41_IE					0u

	/* 0x10A5 */
	uint8_t RESERVED130[0x10A9u-0x10A5u];

	/* 0x10A9: clicintie Register */
	uint32_t volatile CLICINTIE_42;
	/* IE */
#define ECLIC_CLICINTIE_42_IE					0u

	/* 0x10A9 */
	uint8_t RESERVED131[0x10ADu-0x10A9u];

	/* 0x10AD: clicintie Register */
	uint32_t volatile CLICINTIE_43;
	/* IE */
#define ECLIC_CLICINTIE_43_IE					0u

	/* 0x10AD */
	uint8_t RESERVED132[0x10B1u-0x10ADu];

	/* 0x10B1: clicintie Register */
	uint32_t volatile CLICINTIE_44;
	/* IE */
#define ECLIC_CLICINTIE_44_IE					0u

	/* 0x10B1 */
	uint8_t RESERVED133[0x10B5u-0x10B1u];

	/* 0x10B5: clicintie Register */
	uint32_t volatile CLICINTIE_45;
	/* IE */
#define ECLIC_CLICINTIE_45_IE					0u

	/* 0x10B5 */
	uint8_t RESERVED134[0x10B9u-0x10B5u];

	/* 0x10B9: clicintie Register */
	uint32_t volatile CLICINTIE_46;
	/* IE */
#define ECLIC_CLICINTIE_46_IE					0u

	/* 0x10B9 */
	uint8_t RESERVED135[0x10BDu-0x10B9u];

	/* 0x10BD: clicintie Register */
	uint32_t volatile CLICINTIE_47;
	/* IE */
#define ECLIC_CLICINTIE_47_IE					0u

	/* 0x10BD */
	uint8_t RESERVED136[0x10C1u-0x10BDu];

	/* 0x10C1: clicintie Register */
	uint32_t volatile CLICINTIE_48;
	/* IE */
#define ECLIC_CLICINTIE_48_IE					0u

	/* 0x10C1 */
	uint8_t RESERVED137[0x10C5u-0x10C1u];

	/* 0x10C5: clicintie Register */
	uint32_t volatile CLICINTIE_49;
	/* IE */
#define ECLIC_CLICINTIE_49_IE					0u

	/* 0x10C5 */
	uint8_t RESERVED138[0x10C9u-0x10C5u];

	/* 0x10C9: clicintie Register */
	uint32_t volatile CLICINTIE_50;
	/* IE */
#define ECLIC_CLICINTIE_50_IE					0u

	/* 0x10C9 */
	uint8_t RESERVED139[0x10CDu-0x10C9u];

	/* 0x10CD: clicintie Register */
	uint32_t volatile CLICINTIE_51;
	/* IE */
#define ECLIC_CLICINTIE_51_IE					0u

	/* 0x10CD */
	uint8_t RESERVED140[0x10D1u-0x10CDu];

	/* 0x10D1: clicintie Register */
	uint32_t volatile CLICINTIE_52;
	/* IE */
#define ECLIC_CLICINTIE_52_IE					0u

	/* 0x10D1 */
	uint8_t RESERVED141[0x10D5u-0x10D1u];

	/* 0x10D5: clicintie Register */
	uint32_t volatile CLICINTIE_53;
	/* IE */
#define ECLIC_CLICINTIE_53_IE					0u

	/* 0x10D5 */
	uint8_t RESERVED142[0x10D9u-0x10D5u];

	/* 0x10D9: clicintie Register */
	uint32_t volatile CLICINTIE_54;
	/* IE */
#define ECLIC_CLICINTIE_54_IE					0u

	/* 0x10D9 */
	uint8_t RESERVED143[0x10DDu-0x10D9u];

	/* 0x10DD: clicintie Register */
	uint32_t volatile CLICINTIE_55;
	/* IE */
#define ECLIC_CLICINTIE_55_IE					0u

	/* 0x10DD */
	uint8_t RESERVED144[0x10E1u-0x10DDu];

	/* 0x10E1: clicintie Register */
	uint32_t volatile CLICINTIE_56;
	/* IE */
#define ECLIC_CLICINTIE_56_IE					0u

	/* 0x10E1 */
	uint8_t RESERVED145[0x10E5u-0x10E1u];

	/* 0x10E5: clicintie Register */
	uint32_t volatile CLICINTIE_57;
	/* IE */
#define ECLIC_CLICINTIE_57_IE					0u

	/* 0x10E5 */
	uint8_t RESERVED146[0x10E9u-0x10E5u];

	/* 0x10E9: clicintie Register */
	uint32_t volatile CLICINTIE_58;
	/* IE */
#define ECLIC_CLICINTIE_58_IE					0u

	/* 0x10E9 */
	uint8_t RESERVED147[0x10EDu-0x10E9u];

	/* 0x10ED: clicintie Register */
	uint32_t volatile CLICINTIE_59;
	/* IE */
#define ECLIC_CLICINTIE_59_IE					0u

	/* 0x10ED */
	uint8_t RESERVED148[0x10F1u-0x10EDu];

	/* 0x10F1: clicintie Register */
	uint32_t volatile CLICINTIE_60;
	/* IE */
#define ECLIC_CLICINTIE_60_IE					0u

	/* 0x10F1 */
	uint8_t RESERVED149[0x10F5u-0x10F1u];

	/* 0x10F5: clicintie Register */
	uint32_t volatile CLICINTIE_61;
	/* IE */
#define ECLIC_CLICINTIE_61_IE					0u

	/* 0x10F5 */
	uint8_t RESERVED150[0x10F9u-0x10F5u];

	/* 0x10F9: clicintie Register */
	uint32_t volatile CLICINTIE_62;
	/* IE */
#define ECLIC_CLICINTIE_62_IE					0u

	/* 0x10F9 */
	uint8_t RESERVED151[0x10FDu-0x10F9u];

	/* 0x10FD: clicintie Register */
	uint32_t volatile CLICINTIE_63;
	/* IE */
#define ECLIC_CLICINTIE_63_IE					0u

	/* 0x10FD */
	uint8_t RESERVED152[0x1101u-0x10FDu];

	/* 0x1101: clicintie Register */
	uint32_t volatile CLICINTIE_64;
	/* IE */
#define ECLIC_CLICINTIE_64_IE					0u

	/* 0x1101 */
	uint8_t RESERVED153[0x1105u-0x1101u];

	/* 0x1105: clicintie Register */
	uint32_t volatile CLICINTIE_65;
	/* IE */
#define ECLIC_CLICINTIE_65_IE					0u

	/* 0x1105 */
	uint8_t RESERVED154[0x1109u-0x1105u];

	/* 0x1109: clicintie Register */
	uint32_t volatile CLICINTIE_66;
	/* IE */
#define ECLIC_CLICINTIE_66_IE					0u

	/* 0x1109 */
	uint8_t RESERVED155[0x110Du-0x1109u];

	/* 0x110D: clicintie Register */
	uint32_t volatile CLICINTIE_67;
	/* IE */
#define ECLIC_CLICINTIE_67_IE					0u

	/* 0x110D */
	uint8_t RESERVED156[0x1111u-0x110Du];

	/* 0x1111: clicintie Register */
	uint32_t volatile CLICINTIE_68;
	/* IE */
#define ECLIC_CLICINTIE_68_IE					0u

	/* 0x1111 */
	uint8_t RESERVED157[0x1115u-0x1111u];

	/* 0x1115: clicintie Register */
	uint32_t volatile CLICINTIE_69;
	/* IE */
#define ECLIC_CLICINTIE_69_IE					0u

	/* 0x1115 */
	uint8_t RESERVED158[0x1119u-0x1115u];

	/* 0x1119: clicintie Register */
	uint32_t volatile CLICINTIE_70;
	/* IE */
#define ECLIC_CLICINTIE_70_IE					0u

	/* 0x1119 */
	uint8_t RESERVED159[0x111Du-0x1119u];

	/* 0x111D: clicintie Register */
	uint32_t volatile CLICINTIE_71;
	/* IE */
#define ECLIC_CLICINTIE_71_IE					0u

	/* 0x111D */
	uint8_t RESERVED160[0x1121u-0x111Du];

	/* 0x1121: clicintie Register */
	uint32_t volatile CLICINTIE_72;
	/* IE */
#define ECLIC_CLICINTIE_72_IE					0u

	/* 0x1121 */
	uint8_t RESERVED161[0x1125u-0x1121u];

	/* 0x1125: clicintie Register */
	uint32_t volatile CLICINTIE_73;
	/* IE */
#define ECLIC_CLICINTIE_73_IE					0u

	/* 0x1125 */
	uint8_t RESERVED162[0x1129u-0x1125u];

	/* 0x1129: clicintie Register */
	uint32_t volatile CLICINTIE_74;
	/* IE */
#define ECLIC_CLICINTIE_74_IE					0u

	/* 0x1129 */
	uint8_t RESERVED163[0x112Du-0x1129u];

	/* 0x112D: clicintie Register */
	uint32_t volatile CLICINTIE_75;
	/* IE */
#define ECLIC_CLICINTIE_75_IE					0u

	/* 0x112D */
	uint8_t RESERVED164[0x1131u-0x112Du];

	/* 0x1131: clicintie Register */
	uint32_t volatile CLICINTIE_76;
	/* IE */
#define ECLIC_CLICINTIE_76_IE					0u

	/* 0x1131 */
	uint8_t RESERVED165[0x1135u-0x1131u];

	/* 0x1135: clicintie Register */
	uint32_t volatile CLICINTIE_77;
	/* IE */
#define ECLIC_CLICINTIE_77_IE					0u

	/* 0x1135 */
	uint8_t RESERVED166[0x1139u-0x1135u];

	/* 0x1139: clicintie Register */
	uint32_t volatile CLICINTIE_78;
	/* IE */
#define ECLIC_CLICINTIE_78_IE					0u

	/* 0x1139 */
	uint8_t RESERVED167[0x113Du-0x1139u];

	/* 0x113D: clicintie Register */
	uint32_t volatile CLICINTIE_79;
	/* IE */
#define ECLIC_CLICINTIE_79_IE					0u

	/* 0x113D */
	uint8_t RESERVED168[0x1141u-0x113Du];

	/* 0x1141: clicintie Register */
	uint32_t volatile CLICINTIE_80;
	/* IE */
#define ECLIC_CLICINTIE_80_IE					0u

	/* 0x1141 */
	uint8_t RESERVED169[0x1145u-0x1141u];

	/* 0x1145: clicintie Register */
	uint32_t volatile CLICINTIE_81;
	/* IE */
#define ECLIC_CLICINTIE_81_IE					0u

	/* 0x1145 */
	uint8_t RESERVED170[0x1149u-0x1145u];

	/* 0x1149: clicintie Register */
	uint32_t volatile CLICINTIE_82;
	/* IE */
#define ECLIC_CLICINTIE_82_IE					0u

	/* 0x1149 */
	uint8_t RESERVED171[0x114Du-0x1149u];

	/* 0x114D: clicintie Register */
	uint32_t volatile CLICINTIE_83;
	/* IE */
#define ECLIC_CLICINTIE_83_IE					0u

	/* 0x114D */
	uint8_t RESERVED172[0x1151u-0x114Du];

	/* 0x1151: clicintie Register */
	uint32_t volatile CLICINTIE_84;
	/* IE */
#define ECLIC_CLICINTIE_84_IE					0u

	/* 0x1151 */
	uint8_t RESERVED173[0x1155u-0x1151u];

	/* 0x1155: clicintie Register */
	uint32_t volatile CLICINTIE_85;
	/* IE */
#define ECLIC_CLICINTIE_85_IE					0u

	/* 0x1155 */
	uint8_t RESERVED174[0x1159u-0x1155u];

	/* 0x1159: clicintie Register */
	uint32_t volatile CLICINTIE_86;
	/* IE */
#define ECLIC_CLICINTIE_86_IE					0u

	/* 0x1002: clicintattr Register */
	uint32_t volatile CLICINTATTR_0;
	/* SHV */
#define ECLIC_CLICINTATTR_0_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_0_TRIG_msb				2u
#define ECLIC_CLICINTATTR_0_TRIG_lsb				1u

	/* 0x1002 */
	uint8_t RESERVED175[0x1006u-0x1002u];

	/* 0x1006: clicintattr Register */
	uint32_t volatile CLICINTATTR_1;
	/* SHV */
#define ECLIC_CLICINTATTR_1_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_1_TRIG_msb				2u
#define ECLIC_CLICINTATTR_1_TRIG_lsb				1u

	/* 0x1006 */
	uint8_t RESERVED176[0x100Au-0x1006u];

	/* 0x100A: clicintattr Register */
	uint32_t volatile CLICINTATTR_2;
	/* SHV */
#define ECLIC_CLICINTATTR_2_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_2_TRIG_msb				2u
#define ECLIC_CLICINTATTR_2_TRIG_lsb				1u

	/* 0x100A */
	uint8_t RESERVED177[0x100Eu-0x100Au];

	/* 0x100E: clicintattr Register */
	uint32_t volatile CLICINTATTR_3;
	/* SHV */
#define ECLIC_CLICINTATTR_3_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_3_TRIG_msb				2u
#define ECLIC_CLICINTATTR_3_TRIG_lsb				1u

	/* 0x100E */
	uint8_t RESERVED178[0x1012u-0x100Eu];

	/* 0x1012: clicintattr Register */
	uint32_t volatile CLICINTATTR_4;
	/* SHV */
#define ECLIC_CLICINTATTR_4_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_4_TRIG_msb				2u
#define ECLIC_CLICINTATTR_4_TRIG_lsb				1u

	/* 0x1012 */
	uint8_t RESERVED179[0x1016u-0x1012u];

	/* 0x1016: clicintattr Register */
	uint32_t volatile CLICINTATTR_5;
	/* SHV */
#define ECLIC_CLICINTATTR_5_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_5_TRIG_msb				2u
#define ECLIC_CLICINTATTR_5_TRIG_lsb				1u

	/* 0x1016 */
	uint8_t RESERVED180[0x101Au-0x1016u];

	/* 0x101A: clicintattr Register */
	uint32_t volatile CLICINTATTR_6;
	/* SHV */
#define ECLIC_CLICINTATTR_6_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_6_TRIG_msb				2u
#define ECLIC_CLICINTATTR_6_TRIG_lsb				1u

	/* 0x101A */
	uint8_t RESERVED181[0x101Eu-0x101Au];

	/* 0x101E: clicintattr Register */
	uint32_t volatile CLICINTATTR_7;
	/* SHV */
#define ECLIC_CLICINTATTR_7_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_7_TRIG_msb				2u
#define ECLIC_CLICINTATTR_7_TRIG_lsb				1u

	/* 0x101E */
	uint8_t RESERVED182[0x1022u-0x101Eu];

	/* 0x1022: clicintattr Register */
	uint32_t volatile CLICINTATTR_8;
	/* SHV */
#define ECLIC_CLICINTATTR_8_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_8_TRIG_msb				2u
#define ECLIC_CLICINTATTR_8_TRIG_lsb				1u

	/* 0x1022 */
	uint8_t RESERVED183[0x1026u-0x1022u];

	/* 0x1026: clicintattr Register */
	uint32_t volatile CLICINTATTR_9;
	/* SHV */
#define ECLIC_CLICINTATTR_9_SHV					0u
	/* TRIG */
#define ECLIC_CLICINTATTR_9_TRIG_msb				2u
#define ECLIC_CLICINTATTR_9_TRIG_lsb				1u

	/* 0x1026 */
	uint8_t RESERVED184[0x102Au-0x1026u];

	/* 0x102A: clicintattr Register */
	uint32_t volatile CLICINTATTR_10;
	/* SHV */
#define ECLIC_CLICINTATTR_10_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_10_TRIG_msb				2u
#define ECLIC_CLICINTATTR_10_TRIG_lsb				1u

	/* 0x102A */
	uint8_t RESERVED185[0x102Eu-0x102Au];

	/* 0x102E: clicintattr Register */
	uint32_t volatile CLICINTATTR_11;
	/* SHV */
#define ECLIC_CLICINTATTR_11_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_11_TRIG_msb				2u
#define ECLIC_CLICINTATTR_11_TRIG_lsb				1u

	/* 0x102E */
	uint8_t RESERVED186[0x1032u-0x102Eu];

	/* 0x1032: clicintattr Register */
	uint32_t volatile CLICINTATTR_12;
	/* SHV */
#define ECLIC_CLICINTATTR_12_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_12_TRIG_msb				2u
#define ECLIC_CLICINTATTR_12_TRIG_lsb				1u

	/* 0x1032 */
	uint8_t RESERVED187[0x1036u-0x1032u];

	/* 0x1036: clicintattr Register */
	uint32_t volatile CLICINTATTR_13;
	/* SHV */
#define ECLIC_CLICINTATTR_13_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_13_TRIG_msb				2u
#define ECLIC_CLICINTATTR_13_TRIG_lsb				1u

	/* 0x1036 */
	uint8_t RESERVED188[0x103Au-0x1036u];

	/* 0x103A: clicintattr Register */
	uint32_t volatile CLICINTATTR_14;
	/* SHV */
#define ECLIC_CLICINTATTR_14_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_14_TRIG_msb				2u
#define ECLIC_CLICINTATTR_14_TRIG_lsb				1u

	/* 0x103A */
	uint8_t RESERVED189[0x103Eu-0x103Au];

	/* 0x103E: clicintattr Register */
	uint32_t volatile CLICINTATTR_15;
	/* SHV */
#define ECLIC_CLICINTATTR_15_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_15_TRIG_msb				2u
#define ECLIC_CLICINTATTR_15_TRIG_lsb				1u

	/* 0x103E */
	uint8_t RESERVED190[0x1042u-0x103Eu];

	/* 0x1042: clicintattr Register */
	uint32_t volatile CLICINTATTR_16;
	/* SHV */
#define ECLIC_CLICINTATTR_16_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_16_TRIG_msb				2u
#define ECLIC_CLICINTATTR_16_TRIG_lsb				1u

	/* 0x1042 */
	uint8_t RESERVED191[0x1046u-0x1042u];

	/* 0x1046: clicintattr Register */
	uint32_t volatile CLICINTATTR_17;
	/* SHV */
#define ECLIC_CLICINTATTR_17_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_17_TRIG_msb				2u
#define ECLIC_CLICINTATTR_17_TRIG_lsb				1u

	/* 0x1046 */
	uint8_t RESERVED192[0x104Au-0x1046u];

	/* 0x104A: clicintattr Register */
	uint32_t volatile CLICINTATTR_18;
	/* SHV */
#define ECLIC_CLICINTATTR_18_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_18_TRIG_msb				2u
#define ECLIC_CLICINTATTR_18_TRIG_lsb				1u

	/* 0x104A */
	uint8_t RESERVED193[0x104Eu-0x104Au];

	/* 0x104E: clicintattr Register */
	uint32_t volatile CLICINTATTR_19;
	/* SHV */
#define ECLIC_CLICINTATTR_19_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_19_TRIG_msb				2u
#define ECLIC_CLICINTATTR_19_TRIG_lsb				1u

	/* 0x104E */
	uint8_t RESERVED194[0x1052u-0x104Eu];

	/* 0x1052: clicintattr Register */
	uint32_t volatile CLICINTATTR_20;
	/* SHV */
#define ECLIC_CLICINTATTR_20_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_20_TRIG_msb				2u
#define ECLIC_CLICINTATTR_20_TRIG_lsb				1u

	/* 0x1052 */
	uint8_t RESERVED195[0x1056u-0x1052u];

	/* 0x1056: clicintattr Register */
	uint32_t volatile CLICINTATTR_21;
	/* SHV */
#define ECLIC_CLICINTATTR_21_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_21_TRIG_msb				2u
#define ECLIC_CLICINTATTR_21_TRIG_lsb				1u

	/* 0x1056 */
	uint8_t RESERVED196[0x105Au-0x1056u];

	/* 0x105A: clicintattr Register */
	uint32_t volatile CLICINTATTR_22;
	/* SHV */
#define ECLIC_CLICINTATTR_22_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_22_TRIG_msb				2u
#define ECLIC_CLICINTATTR_22_TRIG_lsb				1u

	/* 0x105A */
	uint8_t RESERVED197[0x105Eu-0x105Au];

	/* 0x105E: clicintattr Register */
	uint32_t volatile CLICINTATTR_23;
	/* SHV */
#define ECLIC_CLICINTATTR_23_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_23_TRIG_msb				2u
#define ECLIC_CLICINTATTR_23_TRIG_lsb				1u

	/* 0x105E */
	uint8_t RESERVED198[0x1062u-0x105Eu];

	/* 0x1062: clicintattr Register */
	uint32_t volatile CLICINTATTR_24;
	/* SHV */
#define ECLIC_CLICINTATTR_24_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_24_TRIG_msb				2u
#define ECLIC_CLICINTATTR_24_TRIG_lsb				1u

	/* 0x1062 */
	uint8_t RESERVED199[0x1066u-0x1062u];

	/* 0x1066: clicintattr Register */
	uint32_t volatile CLICINTATTR_25;
	/* SHV */
#define ECLIC_CLICINTATTR_25_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_25_TRIG_msb				2u
#define ECLIC_CLICINTATTR_25_TRIG_lsb				1u

	/* 0x1066 */
	uint8_t RESERVED200[0x106Au-0x1066u];

	/* 0x106A: clicintattr Register */
	uint32_t volatile CLICINTATTR_26;
	/* SHV */
#define ECLIC_CLICINTATTR_26_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_26_TRIG_msb				2u
#define ECLIC_CLICINTATTR_26_TRIG_lsb				1u

	/* 0x106A */
	uint8_t RESERVED201[0x106Eu-0x106Au];

	/* 0x106E: clicintattr Register */
	uint32_t volatile CLICINTATTR_27;
	/* SHV */
#define ECLIC_CLICINTATTR_27_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_27_TRIG_msb				2u
#define ECLIC_CLICINTATTR_27_TRIG_lsb				1u

	/* 0x106E */
	uint8_t RESERVED202[0x1072u-0x106Eu];

	/* 0x1072: clicintattr Register */
	uint32_t volatile CLICINTATTR_28;
	/* SHV */
#define ECLIC_CLICINTATTR_28_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_28_TRIG_msb				2u
#define ECLIC_CLICINTATTR_28_TRIG_lsb				1u

	/* 0x1072 */
	uint8_t RESERVED203[0x1076u-0x1072u];

	/* 0x1076: clicintattr Register */
	uint32_t volatile CLICINTATTR_29;
	/* SHV */
#define ECLIC_CLICINTATTR_29_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_29_TRIG_msb				2u
#define ECLIC_CLICINTATTR_29_TRIG_lsb				1u

	/* 0x1076 */
	uint8_t RESERVED204[0x107Au-0x1076u];

	/* 0x107A: clicintattr Register */
	uint32_t volatile CLICINTATTR_30;
	/* SHV */
#define ECLIC_CLICINTATTR_30_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_30_TRIG_msb				2u
#define ECLIC_CLICINTATTR_30_TRIG_lsb				1u

	/* 0x107A */
	uint8_t RESERVED205[0x107Eu-0x107Au];

	/* 0x107E: clicintattr Register */
	uint32_t volatile CLICINTATTR_31;
	/* SHV */
#define ECLIC_CLICINTATTR_31_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_31_TRIG_msb				2u
#define ECLIC_CLICINTATTR_31_TRIG_lsb				1u

	/* 0x107E */
	uint8_t RESERVED206[0x1082u-0x107Eu];

	/* 0x1082: clicintattr Register */
	uint32_t volatile CLICINTATTR_32;
	/* SHV */
#define ECLIC_CLICINTATTR_32_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_32_TRIG_msb				2u
#define ECLIC_CLICINTATTR_32_TRIG_lsb				1u

	/* 0x1082 */
	uint8_t RESERVED207[0x1086u-0x1082u];

	/* 0x1086: clicintattr Register */
	uint32_t volatile CLICINTATTR_33;
	/* SHV */
#define ECLIC_CLICINTATTR_33_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_33_TRIG_msb				2u
#define ECLIC_CLICINTATTR_33_TRIG_lsb				1u

	/* 0x1086 */
	uint8_t RESERVED208[0x108Au-0x1086u];

	/* 0x108A: clicintattr Register */
	uint32_t volatile CLICINTATTR_34;
	/* SHV */
#define ECLIC_CLICINTATTR_34_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_34_TRIG_msb				2u
#define ECLIC_CLICINTATTR_34_TRIG_lsb				1u

	/* 0x108A */
	uint8_t RESERVED209[0x108Eu-0x108Au];

	/* 0x108E: clicintattr Register */
	uint32_t volatile CLICINTATTR_35;
	/* SHV */
#define ECLIC_CLICINTATTR_35_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_35_TRIG_msb				2u
#define ECLIC_CLICINTATTR_35_TRIG_lsb				1u

	/* 0x108E */
	uint8_t RESERVED210[0x1092u-0x108Eu];

	/* 0x1092: clicintattr Register */
	uint32_t volatile CLICINTATTR_36;
	/* SHV */
#define ECLIC_CLICINTATTR_36_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_36_TRIG_msb				2u
#define ECLIC_CLICINTATTR_36_TRIG_lsb				1u

	/* 0x1092 */
	uint8_t RESERVED211[0x1096u-0x1092u];

	/* 0x1096: clicintattr Register */
	uint32_t volatile CLICINTATTR_37;
	/* SHV */
#define ECLIC_CLICINTATTR_37_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_37_TRIG_msb				2u
#define ECLIC_CLICINTATTR_37_TRIG_lsb				1u

	/* 0x1096 */
	uint8_t RESERVED212[0x109Au-0x1096u];

	/* 0x109A: clicintattr Register */
	uint32_t volatile CLICINTATTR_38;
	/* SHV */
#define ECLIC_CLICINTATTR_38_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_38_TRIG_msb				2u
#define ECLIC_CLICINTATTR_38_TRIG_lsb				1u

	/* 0x109A */
	uint8_t RESERVED213[0x109Eu-0x109Au];

	/* 0x109E: clicintattr Register */
	uint32_t volatile CLICINTATTR_39;
	/* SHV */
#define ECLIC_CLICINTATTR_39_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_39_TRIG_msb				2u
#define ECLIC_CLICINTATTR_39_TRIG_lsb				1u

	/* 0x109E */
	uint8_t RESERVED214[0x10A2u-0x109Eu];

	/* 0x10A2: clicintattr Register */
	uint32_t volatile CLICINTATTR_40;
	/* SHV */
#define ECLIC_CLICINTATTR_40_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_40_TRIG_msb				2u
#define ECLIC_CLICINTATTR_40_TRIG_lsb				1u

	/* 0x10A2 */
	uint8_t RESERVED215[0x10A6u-0x10A2u];

	/* 0x10A6: clicintattr Register */
	uint32_t volatile CLICINTATTR_41;
	/* SHV */
#define ECLIC_CLICINTATTR_41_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_41_TRIG_msb				2u
#define ECLIC_CLICINTATTR_41_TRIG_lsb				1u

	/* 0x10A6 */
	uint8_t RESERVED216[0x10AAu-0x10A6u];

	/* 0x10AA: clicintattr Register */
	uint32_t volatile CLICINTATTR_42;
	/* SHV */
#define ECLIC_CLICINTATTR_42_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_42_TRIG_msb				2u
#define ECLIC_CLICINTATTR_42_TRIG_lsb				1u

	/* 0x10AA */
	uint8_t RESERVED217[0x10AEu-0x10AAu];

	/* 0x10AE: clicintattr Register */
	uint32_t volatile CLICINTATTR_43;
	/* SHV */
#define ECLIC_CLICINTATTR_43_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_43_TRIG_msb				2u
#define ECLIC_CLICINTATTR_43_TRIG_lsb				1u

	/* 0x10AE */
	uint8_t RESERVED218[0x10B2u-0x10AEu];

	/* 0x10B2: clicintattr Register */
	uint32_t volatile CLICINTATTR_44;
	/* SHV */
#define ECLIC_CLICINTATTR_44_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_44_TRIG_msb				2u
#define ECLIC_CLICINTATTR_44_TRIG_lsb				1u

	/* 0x10B2 */
	uint8_t RESERVED219[0x10B6u-0x10B2u];

	/* 0x10B6: clicintattr Register */
	uint32_t volatile CLICINTATTR_45;
	/* SHV */
#define ECLIC_CLICINTATTR_45_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_45_TRIG_msb				2u
#define ECLIC_CLICINTATTR_45_TRIG_lsb				1u

	/* 0x10B6 */
	uint8_t RESERVED220[0x10BAu-0x10B6u];

	/* 0x10BA: clicintattr Register */
	uint32_t volatile CLICINTATTR_46;
	/* SHV */
#define ECLIC_CLICINTATTR_46_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_46_TRIG_msb				2u
#define ECLIC_CLICINTATTR_46_TRIG_lsb				1u

	/* 0x10BA */
	uint8_t RESERVED221[0x10BEu-0x10BAu];

	/* 0x10BE: clicintattr Register */
	uint32_t volatile CLICINTATTR_47;
	/* SHV */
#define ECLIC_CLICINTATTR_47_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_47_TRIG_msb				2u
#define ECLIC_CLICINTATTR_47_TRIG_lsb				1u

	/* 0x10BE */
	uint8_t RESERVED222[0x10C2u-0x10BEu];

	/* 0x10C2: clicintattr Register */
	uint32_t volatile CLICINTATTR_48;
	/* SHV */
#define ECLIC_CLICINTATTR_48_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_48_TRIG_msb				2u
#define ECLIC_CLICINTATTR_48_TRIG_lsb				1u

	/* 0x10C2 */
	uint8_t RESERVED223[0x10C6u-0x10C2u];

	/* 0x10C6: clicintattr Register */
	uint32_t volatile CLICINTATTR_49;
	/* SHV */
#define ECLIC_CLICINTATTR_49_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_49_TRIG_msb				2u
#define ECLIC_CLICINTATTR_49_TRIG_lsb				1u

	/* 0x10C6 */
	uint8_t RESERVED224[0x10CAu-0x10C6u];

	/* 0x10CA: clicintattr Register */
	uint32_t volatile CLICINTATTR_50;
	/* SHV */
#define ECLIC_CLICINTATTR_50_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_50_TRIG_msb				2u
#define ECLIC_CLICINTATTR_50_TRIG_lsb				1u

	/* 0x10CA */
	uint8_t RESERVED225[0x10CEu-0x10CAu];

	/* 0x10CE: clicintattr Register */
	uint32_t volatile CLICINTATTR_51;
	/* SHV */
#define ECLIC_CLICINTATTR_51_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_51_TRIG_msb				2u
#define ECLIC_CLICINTATTR_51_TRIG_lsb				1u

	/* 0x10CE */
	uint8_t RESERVED226[0x10D2u-0x10CEu];

	/* 0x10D2: clicintattr Register */
	uint32_t volatile CLICINTATTR_52;
	/* SHV */
#define ECLIC_CLICINTATTR_52_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_52_TRIG_msb				2u
#define ECLIC_CLICINTATTR_52_TRIG_lsb				1u

	/* 0x10D2 */
	uint8_t RESERVED227[0x10D6u-0x10D2u];

	/* 0x10D6: clicintattr Register */
	uint32_t volatile CLICINTATTR_53;
	/* SHV */
#define ECLIC_CLICINTATTR_53_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_53_TRIG_msb				2u
#define ECLIC_CLICINTATTR_53_TRIG_lsb				1u

	/* 0x10D6 */
	uint8_t RESERVED228[0x10DAu-0x10D6u];

	/* 0x10DA: clicintattr Register */
	uint32_t volatile CLICINTATTR_54;
	/* SHV */
#define ECLIC_CLICINTATTR_54_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_54_TRIG_msb				2u
#define ECLIC_CLICINTATTR_54_TRIG_lsb				1u

	/* 0x10DA */
	uint8_t RESERVED229[0x10DEu-0x10DAu];

	/* 0x10DE: clicintattr Register */
	uint32_t volatile CLICINTATTR_55;
	/* SHV */
#define ECLIC_CLICINTATTR_55_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_55_TRIG_msb				2u
#define ECLIC_CLICINTATTR_55_TRIG_lsb				1u

	/* 0x10DE */
	uint8_t RESERVED230[0x10E2u-0x10DEu];

	/* 0x10E2: clicintattr Register */
	uint32_t volatile CLICINTATTR_56;
	/* SHV */
#define ECLIC_CLICINTATTR_56_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_56_TRIG_msb				2u
#define ECLIC_CLICINTATTR_56_TRIG_lsb				1u

	/* 0x10E2 */
	uint8_t RESERVED231[0x10E6u-0x10E2u];

	/* 0x10E6: clicintattr Register */
	uint32_t volatile CLICINTATTR_57;
	/* SHV */
#define ECLIC_CLICINTATTR_57_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_57_TRIG_msb				2u
#define ECLIC_CLICINTATTR_57_TRIG_lsb				1u

	/* 0x10E6 */
	uint8_t RESERVED232[0x10EAu-0x10E6u];

	/* 0x10EA: clicintattr Register */
	uint32_t volatile CLICINTATTR_58;
	/* SHV */
#define ECLIC_CLICINTATTR_58_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_58_TRIG_msb				2u
#define ECLIC_CLICINTATTR_58_TRIG_lsb				1u

	/* 0x10EA */
	uint8_t RESERVED233[0x10EEu-0x10EAu];

	/* 0x10EE: clicintattr Register */
	uint32_t volatile CLICINTATTR_59;
	/* SHV */
#define ECLIC_CLICINTATTR_59_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_59_TRIG_msb				2u
#define ECLIC_CLICINTATTR_59_TRIG_lsb				1u

	/* 0x10EE */
	uint8_t RESERVED234[0x10F2u-0x10EEu];

	/* 0x10F2: clicintattr Register */
	uint32_t volatile CLICINTATTR_60;
	/* SHV */
#define ECLIC_CLICINTATTR_60_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_60_TRIG_msb				2u
#define ECLIC_CLICINTATTR_60_TRIG_lsb				1u

	/* 0x10F2 */
	uint8_t RESERVED235[0x10F6u-0x10F2u];

	/* 0x10F6: clicintattr Register */
	uint32_t volatile CLICINTATTR_61;
	/* SHV */
#define ECLIC_CLICINTATTR_61_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_61_TRIG_msb				2u
#define ECLIC_CLICINTATTR_61_TRIG_lsb				1u

	/* 0x10F6 */
	uint8_t RESERVED236[0x10FAu-0x10F6u];

	/* 0x10FA: clicintattr Register */
	uint32_t volatile CLICINTATTR_62;
	/* SHV */
#define ECLIC_CLICINTATTR_62_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_62_TRIG_msb				2u
#define ECLIC_CLICINTATTR_62_TRIG_lsb				1u

	/* 0x10FA */
	uint8_t RESERVED237[0x10FEu-0x10FAu];

	/* 0x10FE: clicintattr Register */
	uint32_t volatile CLICINTATTR_63;
	/* SHV */
#define ECLIC_CLICINTATTR_63_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_63_TRIG_msb				2u
#define ECLIC_CLICINTATTR_63_TRIG_lsb				1u

	/* 0x10FE */
	uint8_t RESERVED238[0x1102u-0x10FEu];

	/* 0x1102: clicintattr Register */
	uint32_t volatile CLICINTATTR_64;
	/* SHV */
#define ECLIC_CLICINTATTR_64_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_64_TRIG_msb				2u
#define ECLIC_CLICINTATTR_64_TRIG_lsb				1u

	/* 0x1102 */
	uint8_t RESERVED239[0x1106u-0x1102u];

	/* 0x1106: clicintattr Register */
	uint32_t volatile CLICINTATTR_65;
	/* SHV */
#define ECLIC_CLICINTATTR_65_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_65_TRIG_msb				2u
#define ECLIC_CLICINTATTR_65_TRIG_lsb				1u

	/* 0x1106 */
	uint8_t RESERVED240[0x110Au-0x1106u];

	/* 0x110A: clicintattr Register */
	uint32_t volatile CLICINTATTR_66;
	/* SHV */
#define ECLIC_CLICINTATTR_66_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_66_TRIG_msb				2u
#define ECLIC_CLICINTATTR_66_TRIG_lsb				1u

	/* 0x110A */
	uint8_t RESERVED241[0x110Eu-0x110Au];

	/* 0x110E: clicintattr Register */
	uint32_t volatile CLICINTATTR_67;
	/* SHV */
#define ECLIC_CLICINTATTR_67_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_67_TRIG_msb				2u
#define ECLIC_CLICINTATTR_67_TRIG_lsb				1u

	/* 0x110E */
	uint8_t RESERVED242[0x1112u-0x110Eu];

	/* 0x1112: clicintattr Register */
	uint32_t volatile CLICINTATTR_68;
	/* SHV */
#define ECLIC_CLICINTATTR_68_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_68_TRIG_msb				2u
#define ECLIC_CLICINTATTR_68_TRIG_lsb				1u

	/* 0x1112 */
	uint8_t RESERVED243[0x1116u-0x1112u];

	/* 0x1116: clicintattr Register */
	uint32_t volatile CLICINTATTR_69;
	/* SHV */
#define ECLIC_CLICINTATTR_69_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_69_TRIG_msb				2u
#define ECLIC_CLICINTATTR_69_TRIG_lsb				1u

	/* 0x1116 */
	uint8_t RESERVED244[0x111Au-0x1116u];

	/* 0x111A: clicintattr Register */
	uint32_t volatile CLICINTATTR_70;
	/* SHV */
#define ECLIC_CLICINTATTR_70_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_70_TRIG_msb				2u
#define ECLIC_CLICINTATTR_70_TRIG_lsb				1u

	/* 0x111A */
	uint8_t RESERVED245[0x111Eu-0x111Au];

	/* 0x111E: clicintattr Register */
	uint32_t volatile CLICINTATTR_71;
	/* SHV */
#define ECLIC_CLICINTATTR_71_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_71_TRIG_msb				2u
#define ECLIC_CLICINTATTR_71_TRIG_lsb				1u

	/* 0x111E */
	uint8_t RESERVED246[0x1122u-0x111Eu];

	/* 0x1122: clicintattr Register */
	uint32_t volatile CLICINTATTR_72;
	/* SHV */
#define ECLIC_CLICINTATTR_72_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_72_TRIG_msb				2u
#define ECLIC_CLICINTATTR_72_TRIG_lsb				1u

	/* 0x1122 */
	uint8_t RESERVED247[0x1126u-0x1122u];

	/* 0x1126: clicintattr Register */
	uint32_t volatile CLICINTATTR_73;
	/* SHV */
#define ECLIC_CLICINTATTR_73_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_73_TRIG_msb				2u
#define ECLIC_CLICINTATTR_73_TRIG_lsb				1u

	/* 0x1126 */
	uint8_t RESERVED248[0x112Au-0x1126u];

	/* 0x112A: clicintattr Register */
	uint32_t volatile CLICINTATTR_74;
	/* SHV */
#define ECLIC_CLICINTATTR_74_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_74_TRIG_msb				2u
#define ECLIC_CLICINTATTR_74_TRIG_lsb				1u

	/* 0x112A */
	uint8_t RESERVED249[0x112Eu-0x112Au];

	/* 0x112E: clicintattr Register */
	uint32_t volatile CLICINTATTR_75;
	/* SHV */
#define ECLIC_CLICINTATTR_75_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_75_TRIG_msb				2u
#define ECLIC_CLICINTATTR_75_TRIG_lsb				1u

	/* 0x112E */
	uint8_t RESERVED250[0x1132u-0x112Eu];

	/* 0x1132: clicintattr Register */
	uint32_t volatile CLICINTATTR_76;
	/* SHV */
#define ECLIC_CLICINTATTR_76_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_76_TRIG_msb				2u
#define ECLIC_CLICINTATTR_76_TRIG_lsb				1u

	/* 0x1132 */
	uint8_t RESERVED251[0x1136u-0x1132u];

	/* 0x1136: clicintattr Register */
	uint32_t volatile CLICINTATTR_77;
	/* SHV */
#define ECLIC_CLICINTATTR_77_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_77_TRIG_msb				2u
#define ECLIC_CLICINTATTR_77_TRIG_lsb				1u

	/* 0x1136 */
	uint8_t RESERVED252[0x113Au-0x1136u];

	/* 0x113A: clicintattr Register */
	uint32_t volatile CLICINTATTR_78;
	/* SHV */
#define ECLIC_CLICINTATTR_78_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_78_TRIG_msb				2u
#define ECLIC_CLICINTATTR_78_TRIG_lsb				1u

	/* 0x113A */
	uint8_t RESERVED253[0x113Eu-0x113Au];

	/* 0x113E: clicintattr Register */
	uint32_t volatile CLICINTATTR_79;
	/* SHV */
#define ECLIC_CLICINTATTR_79_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_79_TRIG_msb				2u
#define ECLIC_CLICINTATTR_79_TRIG_lsb				1u

	/* 0x113E */
	uint8_t RESERVED254[0x1142u-0x113Eu];

	/* 0x1142: clicintattr Register */
	uint32_t volatile CLICINTATTR_80;
	/* SHV */
#define ECLIC_CLICINTATTR_80_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_80_TRIG_msb				2u
#define ECLIC_CLICINTATTR_80_TRIG_lsb				1u

	/* 0x1142 */
	uint8_t RESERVED255[0x1146u-0x1142u];

	/* 0x1146: clicintattr Register */
	uint32_t volatile CLICINTATTR_81;
	/* SHV */
#define ECLIC_CLICINTATTR_81_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_81_TRIG_msb				2u
#define ECLIC_CLICINTATTR_81_TRIG_lsb				1u

	/* 0x1146 */
	uint8_t RESERVED256[0x114Au-0x1146u];

	/* 0x114A: clicintattr Register */
	uint32_t volatile CLICINTATTR_82;
	/* SHV */
#define ECLIC_CLICINTATTR_82_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_82_TRIG_msb				2u
#define ECLIC_CLICINTATTR_82_TRIG_lsb				1u

	/* 0x114A */
	uint8_t RESERVED257[0x114Eu-0x114Au];

	/* 0x114E: clicintattr Register */
	uint32_t volatile CLICINTATTR_83;
	/* SHV */
#define ECLIC_CLICINTATTR_83_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_83_TRIG_msb				2u
#define ECLIC_CLICINTATTR_83_TRIG_lsb				1u

	/* 0x114E */
	uint8_t RESERVED258[0x1152u-0x114Eu];

	/* 0x1152: clicintattr Register */
	uint32_t volatile CLICINTATTR_84;
	/* SHV */
#define ECLIC_CLICINTATTR_84_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_84_TRIG_msb				2u
#define ECLIC_CLICINTATTR_84_TRIG_lsb				1u

	/* 0x1152 */
	uint8_t RESERVED259[0x1156u-0x1152u];

	/* 0x1156: clicintattr Register */
	uint32_t volatile CLICINTATTR_85;
	/* SHV */
#define ECLIC_CLICINTATTR_85_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_85_TRIG_msb				2u
#define ECLIC_CLICINTATTR_85_TRIG_lsb				1u

	/* 0x1156 */
	uint8_t RESERVED260[0x115Au-0x1156u];

	/* 0x115A: clicintattr Register */
	uint32_t volatile CLICINTATTR_86;
	/* SHV */
#define ECLIC_CLICINTATTR_86_SHV				0u
	/* TRIG */
#define ECLIC_CLICINTATTR_86_TRIG_msb				2u
#define ECLIC_CLICINTATTR_86_TRIG_lsb				1u

	/* 0x1003: clicintctl Register */
	uint32_t volatile CLICINTCTL_0;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_0_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_0_LEVEL_PRIORITY_lsb			0u

	/* 0x1003 */
	uint8_t RESERVED261[0x1007u-0x1003u];

	/* 0x1007: clicintctl Register */
	uint32_t volatile CLICINTCTL_1;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_1_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_1_LEVEL_PRIORITY_lsb			0u

	/* 0x1007 */
	uint8_t RESERVED262[0x100Bu-0x1007u];

	/* 0x100B: clicintctl Register */
	uint32_t volatile CLICINTCTL_2;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_2_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_2_LEVEL_PRIORITY_lsb			0u

	/* 0x100B */
	uint8_t RESERVED263[0x100Fu-0x100Bu];

	/* 0x100F: clicintctl Register */
	uint32_t volatile CLICINTCTL_3;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_3_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_3_LEVEL_PRIORITY_lsb			0u

	/* 0x100F */
	uint8_t RESERVED264[0x1013u-0x100Fu];

	/* 0x1013: clicintctl Register */
	uint32_t volatile CLICINTCTL_4;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_4_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_4_LEVEL_PRIORITY_lsb			0u

	/* 0x1013 */
	uint8_t RESERVED265[0x1017u-0x1013u];

	/* 0x1017: clicintctl Register */
	uint32_t volatile CLICINTCTL_5;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_5_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_5_LEVEL_PRIORITY_lsb			0u

	/* 0x1017 */
	uint8_t RESERVED266[0x101Bu-0x1017u];

	/* 0x101B: clicintctl Register */
	uint32_t volatile CLICINTCTL_6;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_6_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_6_LEVEL_PRIORITY_lsb			0u

	/* 0x101B */
	uint8_t RESERVED267[0x101Fu-0x101Bu];

	/* 0x101F: clicintctl Register */
	uint32_t volatile CLICINTCTL_7;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_7_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_7_LEVEL_PRIORITY_lsb			0u

	/* 0x101F */
	uint8_t RESERVED268[0x1023u-0x101Fu];

	/* 0x1023: clicintctl Register */
	uint32_t volatile CLICINTCTL_8;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_8_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_8_LEVEL_PRIORITY_lsb			0u

	/* 0x1023 */
	uint8_t RESERVED269[0x1027u-0x1023u];

	/* 0x1027: clicintctl Register */
	uint32_t volatile CLICINTCTL_9;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_9_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_9_LEVEL_PRIORITY_lsb			0u

	/* 0x1027 */
	uint8_t RESERVED270[0x102Bu-0x1027u];

	/* 0x102B: clicintctl Register */
	uint32_t volatile CLICINTCTL_10;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_10_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_10_LEVEL_PRIORITY_lsb			0u

	/* 0x102B */
	uint8_t RESERVED271[0x102Fu-0x102Bu];

	/* 0x102F: clicintctl Register */
	uint32_t volatile CLICINTCTL_11;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_11_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_11_LEVEL_PRIORITY_lsb			0u

	/* 0x102F */
	uint8_t RESERVED272[0x1033u-0x102Fu];

	/* 0x1033: clicintctl Register */
	uint32_t volatile CLICINTCTL_12;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_12_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_12_LEVEL_PRIORITY_lsb			0u

	/* 0x1033 */
	uint8_t RESERVED273[0x1037u-0x1033u];

	/* 0x1037: clicintctl Register */
	uint32_t volatile CLICINTCTL_13;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_13_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_13_LEVEL_PRIORITY_lsb			0u

	/* 0x1037 */
	uint8_t RESERVED274[0x103Bu-0x1037u];

	/* 0x103B: clicintctl Register */
	uint32_t volatile CLICINTCTL_14;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_14_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_14_LEVEL_PRIORITY_lsb			0u

	/* 0x103B */
	uint8_t RESERVED275[0x103Fu-0x103Bu];

	/* 0x103F: clicintctl Register */
	uint32_t volatile CLICINTCTL_15;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_15_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_15_LEVEL_PRIORITY_lsb			0u

	/* 0x103F */
	uint8_t RESERVED276[0x1043u-0x103Fu];

	/* 0x1043: clicintctl Register */
	uint32_t volatile CLICINTCTL_16;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_16_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_16_LEVEL_PRIORITY_lsb			0u

	/* 0x1043 */
	uint8_t RESERVED277[0x1047u-0x1043u];

	/* 0x1047: clicintctl Register */
	uint32_t volatile CLICINTCTL_17;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_17_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_17_LEVEL_PRIORITY_lsb			0u

	/* 0x1047 */
	uint8_t RESERVED278[0x104Bu-0x1047u];

	/* 0x104B: clicintctl Register */
	uint32_t volatile CLICINTCTL_18;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_18_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_18_LEVEL_PRIORITY_lsb			0u

	/* 0x104B */
	uint8_t RESERVED279[0x104Fu-0x104Bu];

	/* 0x104F: clicintctl Register */
	uint32_t volatile CLICINTCTL_19;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_19_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_19_LEVEL_PRIORITY_lsb			0u

	/* 0x104F */
	uint8_t RESERVED280[0x1053u-0x104Fu];

	/* 0x1053: clicintctl Register */
	uint32_t volatile CLICINTCTL_20;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_20_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_20_LEVEL_PRIORITY_lsb			0u

	/* 0x1053 */
	uint8_t RESERVED281[0x1057u-0x1053u];

	/* 0x1057: clicintctl Register */
	uint32_t volatile CLICINTCTL_21;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_21_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_21_LEVEL_PRIORITY_lsb			0u

	/* 0x1057 */
	uint8_t RESERVED282[0x105Bu-0x1057u];

	/* 0x105B: clicintctl Register */
	uint32_t volatile CLICINTCTL_22;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_22_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_22_LEVEL_PRIORITY_lsb			0u

	/* 0x105B */
	uint8_t RESERVED283[0x105Fu-0x105Bu];

	/* 0x105F: clicintctl Register */
	uint32_t volatile CLICINTCTL_23;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_23_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_23_LEVEL_PRIORITY_lsb			0u

	/* 0x105F */
	uint8_t RESERVED284[0x1063u-0x105Fu];

	/* 0x1063: clicintctl Register */
	uint32_t volatile CLICINTCTL_24;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_24_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_24_LEVEL_PRIORITY_lsb			0u

	/* 0x1063 */
	uint8_t RESERVED285[0x1067u-0x1063u];

	/* 0x1067: clicintctl Register */
	uint32_t volatile CLICINTCTL_25;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_25_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_25_LEVEL_PRIORITY_lsb			0u

	/* 0x1067 */
	uint8_t RESERVED286[0x106Bu-0x1067u];

	/* 0x106B: clicintctl Register */
	uint32_t volatile CLICINTCTL_26;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_26_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_26_LEVEL_PRIORITY_lsb			0u

	/* 0x106B */
	uint8_t RESERVED287[0x106Fu-0x106Bu];

	/* 0x106F: clicintctl Register */
	uint32_t volatile CLICINTCTL_27;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_27_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_27_LEVEL_PRIORITY_lsb			0u

	/* 0x106F */
	uint8_t RESERVED288[0x1073u-0x106Fu];

	/* 0x1073: clicintctl Register */
	uint32_t volatile CLICINTCTL_28;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_28_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_28_LEVEL_PRIORITY_lsb			0u

	/* 0x1073 */
	uint8_t RESERVED289[0x1077u-0x1073u];

	/* 0x1077: clicintctl Register */
	uint32_t volatile CLICINTCTL_29;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_29_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_29_LEVEL_PRIORITY_lsb			0u

	/* 0x1077 */
	uint8_t RESERVED290[0x107Bu-0x1077u];

	/* 0x107B: clicintctl Register */
	uint32_t volatile CLICINTCTL_30;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_30_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_30_LEVEL_PRIORITY_lsb			0u

	/* 0x107B */
	uint8_t RESERVED291[0x107Fu-0x107Bu];

	/* 0x107F: clicintctl Register */
	uint32_t volatile CLICINTCTL_31;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_31_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_31_LEVEL_PRIORITY_lsb			0u

	/* 0x107F */
	uint8_t RESERVED292[0x1083u-0x107Fu];

	/* 0x1083: clicintctl Register */
	uint32_t volatile CLICINTCTL_32;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_32_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_32_LEVEL_PRIORITY_lsb			0u

	/* 0x1083 */
	uint8_t RESERVED293[0x1087u-0x1083u];

	/* 0x1087: clicintctl Register */
	uint32_t volatile CLICINTCTL_33;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_33_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_33_LEVEL_PRIORITY_lsb			0u

	/* 0x1087 */
	uint8_t RESERVED294[0x108Bu-0x1087u];

	/* 0x108B: clicintctl Register */
	uint32_t volatile CLICINTCTL_34;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_34_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_34_LEVEL_PRIORITY_lsb			0u

	/* 0x108B */
	uint8_t RESERVED295[0x108Fu-0x108Bu];

	/* 0x108F: clicintctl Register */
	uint32_t volatile CLICINTCTL_35;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_35_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_35_LEVEL_PRIORITY_lsb			0u

	/* 0x108F */
	uint8_t RESERVED296[0x1093u-0x108Fu];

	/* 0x1093: clicintctl Register */
	uint32_t volatile CLICINTCTL_36;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_36_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_36_LEVEL_PRIORITY_lsb			0u

	/* 0x1093 */
	uint8_t RESERVED297[0x1097u-0x1093u];

	/* 0x1097: clicintctl Register */
	uint32_t volatile CLICINTCTL_37;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_37_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_37_LEVEL_PRIORITY_lsb			0u

	/* 0x1097 */
	uint8_t RESERVED298[0x109Bu-0x1097u];

	/* 0x109B: clicintctl Register */
	uint32_t volatile CLICINTCTL_38;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_38_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_38_LEVEL_PRIORITY_lsb			0u

	/* 0x109B */
	uint8_t RESERVED299[0x109Fu-0x109Bu];

	/* 0x109F: clicintctl Register */
	uint32_t volatile CLICINTCTL_39;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_39_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_39_LEVEL_PRIORITY_lsb			0u

	/* 0x109F */
	uint8_t RESERVED300[0x10A3u-0x109Fu];

	/* 0x10A3: clicintctl Register */
	uint32_t volatile CLICINTCTL_40;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_40_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_40_LEVEL_PRIORITY_lsb			0u

	/* 0x10A3 */
	uint8_t RESERVED301[0x10A7u-0x10A3u];

	/* 0x10A7: clicintctl Register */
	uint32_t volatile CLICINTCTL_41;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_41_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_41_LEVEL_PRIORITY_lsb			0u

	/* 0x10A7 */
	uint8_t RESERVED302[0x10ABu-0x10A7u];

	/* 0x10AB: clicintctl Register */
	uint32_t volatile CLICINTCTL_42;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_42_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_42_LEVEL_PRIORITY_lsb			0u

	/* 0x10AB */
	uint8_t RESERVED303[0x10AFu-0x10ABu];

	/* 0x10AF: clicintctl Register */
	uint32_t volatile CLICINTCTL_43;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_43_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_43_LEVEL_PRIORITY_lsb			0u

	/* 0x10AF */
	uint8_t RESERVED304[0x10B3u-0x10AFu];

	/* 0x10B3: clicintctl Register */
	uint32_t volatile CLICINTCTL_44;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_44_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_44_LEVEL_PRIORITY_lsb			0u

	/* 0x10B3 */
	uint8_t RESERVED305[0x10B7u-0x10B3u];

	/* 0x10B7: clicintctl Register */
	uint32_t volatile CLICINTCTL_45;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_45_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_45_LEVEL_PRIORITY_lsb			0u

	/* 0x10B7 */
	uint8_t RESERVED306[0x10BBu-0x10B7u];

	/* 0x10BB: clicintctl Register */
	uint32_t volatile CLICINTCTL_46;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_46_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_46_LEVEL_PRIORITY_lsb			0u

	/* 0x10BB */
	uint8_t RESERVED307[0x10BFu-0x10BBu];

	/* 0x10BF: clicintctl Register */
	uint32_t volatile CLICINTCTL_47;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_47_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_47_LEVEL_PRIORITY_lsb			0u

	/* 0x10BF */
	uint8_t RESERVED308[0x10C3u-0x10BFu];

	/* 0x10C3: clicintctl Register */
	uint32_t volatile CLICINTCTL_48;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_48_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_48_LEVEL_PRIORITY_lsb			0u

	/* 0x10C3 */
	uint8_t RESERVED309[0x10C7u-0x10C3u];

	/* 0x10C7: clicintctl Register */
	uint32_t volatile CLICINTCTL_49;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_49_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_49_LEVEL_PRIORITY_lsb			0u

	/* 0x10C7 */
	uint8_t RESERVED310[0x10CBu-0x10C7u];

	/* 0x10CB: clicintctl Register */
	uint32_t volatile CLICINTCTL_50;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_50_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_50_LEVEL_PRIORITY_lsb			0u

	/* 0x10CB */
	uint8_t RESERVED311[0x10CFu-0x10CBu];

	/* 0x10CF: clicintctl Register */
	uint32_t volatile CLICINTCTL_51;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_51_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_51_LEVEL_PRIORITY_lsb			0u

	/* 0x10CF */
	uint8_t RESERVED312[0x10D3u-0x10CFu];

	/* 0x10D3: clicintctl Register */
	uint32_t volatile CLICINTCTL_52;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_52_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_52_LEVEL_PRIORITY_lsb			0u

	/* 0x10D3 */
	uint8_t RESERVED313[0x10D7u-0x10D3u];

	/* 0x10D7: clicintctl Register */
	uint32_t volatile CLICINTCTL_53;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_53_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_53_LEVEL_PRIORITY_lsb			0u

	/* 0x10D7 */
	uint8_t RESERVED314[0x10DBu-0x10D7u];

	/* 0x10DB: clicintctl Register */
	uint32_t volatile CLICINTCTL_54;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_54_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_54_LEVEL_PRIORITY_lsb			0u

	/* 0x10DB */
	uint8_t RESERVED315[0x10DFu-0x10DBu];

	/* 0x10DF: clicintctl Register */
	uint32_t volatile CLICINTCTL_55;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_55_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_55_LEVEL_PRIORITY_lsb			0u

	/* 0x10DF */
	uint8_t RESERVED316[0x10E3u-0x10DFu];

	/* 0x10E3: clicintctl Register */
	uint32_t volatile CLICINTCTL_56;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_56_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_56_LEVEL_PRIORITY_lsb			0u

	/* 0x10E3 */
	uint8_t RESERVED317[0x10E7u-0x10E3u];

	/* 0x10E7: clicintctl Register */
	uint32_t volatile CLICINTCTL_57;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_57_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_57_LEVEL_PRIORITY_lsb			0u

	/* 0x10E7 */
	uint8_t RESERVED318[0x10EBu-0x10E7u];

	/* 0x10EB: clicintctl Register */
	uint32_t volatile CLICINTCTL_58;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_58_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_58_LEVEL_PRIORITY_lsb			0u

	/* 0x10EB */
	uint8_t RESERVED319[0x10EFu-0x10EBu];

	/* 0x10EF: clicintctl Register */
	uint32_t volatile CLICINTCTL_59;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_59_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_59_LEVEL_PRIORITY_lsb			0u

	/* 0x10EF */
	uint8_t RESERVED320[0x10F3u-0x10EFu];

	/* 0x10F3: clicintctl Register */
	uint32_t volatile CLICINTCTL_60;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_60_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_60_LEVEL_PRIORITY_lsb			0u

	/* 0x10F3 */
	uint8_t RESERVED321[0x10F7u-0x10F3u];

	/* 0x10F7: clicintctl Register */
	uint32_t volatile CLICINTCTL_61;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_61_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_61_LEVEL_PRIORITY_lsb			0u

	/* 0x10F7 */
	uint8_t RESERVED322[0x10FBu-0x10F7u];

	/* 0x10FB: clicintctl Register */
	uint32_t volatile CLICINTCTL_62;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_62_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_62_LEVEL_PRIORITY_lsb			0u

	/* 0x10FB */
	uint8_t RESERVED323[0x10FFu-0x10FBu];

	/* 0x10FF: clicintctl Register */
	uint32_t volatile CLICINTCTL_63;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_63_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_63_LEVEL_PRIORITY_lsb			0u

	/* 0x10FF */
	uint8_t RESERVED324[0x1103u-0x10FFu];

	/* 0x1103: clicintctl Register */
	uint32_t volatile CLICINTCTL_64;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_64_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_64_LEVEL_PRIORITY_lsb			0u

	/* 0x1103 */
	uint8_t RESERVED325[0x1107u-0x1103u];

	/* 0x1107: clicintctl Register */
	uint32_t volatile CLICINTCTL_65;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_65_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_65_LEVEL_PRIORITY_lsb			0u

	/* 0x1107 */
	uint8_t RESERVED326[0x110Bu-0x1107u];

	/* 0x110B: clicintctl Register */
	uint32_t volatile CLICINTCTL_66;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_66_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_66_LEVEL_PRIORITY_lsb			0u

	/* 0x110B */
	uint8_t RESERVED327[0x110Fu-0x110Bu];

	/* 0x110F: clicintctl Register */
	uint32_t volatile CLICINTCTL_67;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_67_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_67_LEVEL_PRIORITY_lsb			0u

	/* 0x110F */
	uint8_t RESERVED328[0x1113u-0x110Fu];

	/* 0x1113: clicintctl Register */
	uint32_t volatile CLICINTCTL_68;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_68_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_68_LEVEL_PRIORITY_lsb			0u

	/* 0x1113 */
	uint8_t RESERVED329[0x1117u-0x1113u];

	/* 0x1117: clicintctl Register */
	uint32_t volatile CLICINTCTL_69;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_69_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_69_LEVEL_PRIORITY_lsb			0u

	/* 0x1117 */
	uint8_t RESERVED330[0x111Bu-0x1117u];

	/* 0x111B: clicintctl Register */
	uint32_t volatile CLICINTCTL_70;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_70_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_70_LEVEL_PRIORITY_lsb			0u

	/* 0x111B */
	uint8_t RESERVED331[0x111Fu-0x111Bu];

	/* 0x111F: clicintctl Register */
	uint32_t volatile CLICINTCTL_71;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_71_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_71_LEVEL_PRIORITY_lsb			0u

	/* 0x111F */
	uint8_t RESERVED332[0x1123u-0x111Fu];

	/* 0x1123: clicintctl Register */
	uint32_t volatile CLICINTCTL_72;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_72_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_72_LEVEL_PRIORITY_lsb			0u

	/* 0x1123 */
	uint8_t RESERVED333[0x1127u-0x1123u];

	/* 0x1127: clicintctl Register */
	uint32_t volatile CLICINTCTL_73;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_73_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_73_LEVEL_PRIORITY_lsb			0u

	/* 0x1127 */
	uint8_t RESERVED334[0x112Bu-0x1127u];

	/* 0x112B: clicintctl Register */
	uint32_t volatile CLICINTCTL_74;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_74_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_74_LEVEL_PRIORITY_lsb			0u

	/* 0x112B */
	uint8_t RESERVED335[0x112Fu-0x112Bu];

	/* 0x112F: clicintctl Register */
	uint32_t volatile CLICINTCTL_75;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_75_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_75_LEVEL_PRIORITY_lsb			0u

	/* 0x112F */
	uint8_t RESERVED336[0x1133u-0x112Fu];

	/* 0x1133: clicintctl Register */
	uint32_t volatile CLICINTCTL_76;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_76_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_76_LEVEL_PRIORITY_lsb			0u

	/* 0x1133 */
	uint8_t RESERVED337[0x1137u-0x1133u];

	/* 0x1137: clicintctl Register */
	uint32_t volatile CLICINTCTL_77;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_77_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_77_LEVEL_PRIORITY_lsb			0u

	/* 0x1137 */
	uint8_t RESERVED338[0x113Bu-0x1137u];

	/* 0x113B: clicintctl Register */
	uint32_t volatile CLICINTCTL_78;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_78_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_78_LEVEL_PRIORITY_lsb			0u

	/* 0x113B */
	uint8_t RESERVED339[0x113Fu-0x113Bu];

	/* 0x113F: clicintctl Register */
	uint32_t volatile CLICINTCTL_79;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_79_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_79_LEVEL_PRIORITY_lsb			0u

	/* 0x113F */
	uint8_t RESERVED340[0x1143u-0x113Fu];

	/* 0x1143: clicintctl Register */
	uint32_t volatile CLICINTCTL_80;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_80_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_80_LEVEL_PRIORITY_lsb			0u

	/* 0x1143 */
	uint8_t RESERVED341[0x1147u-0x1143u];

	/* 0x1147: clicintctl Register */
	uint32_t volatile CLICINTCTL_81;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_81_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_81_LEVEL_PRIORITY_lsb			0u

	/* 0x1147 */
	uint8_t RESERVED342[0x114Bu-0x1147u];

	/* 0x114B: clicintctl Register */
	uint32_t volatile CLICINTCTL_82;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_82_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_82_LEVEL_PRIORITY_lsb			0u

	/* 0x114B */
	uint8_t RESERVED343[0x114Fu-0x114Bu];

	/* 0x114F: clicintctl Register */
	uint32_t volatile CLICINTCTL_83;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_83_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_83_LEVEL_PRIORITY_lsb			0u

	/* 0x114F */
	uint8_t RESERVED344[0x1153u-0x114Fu];

	/* 0x1153: clicintctl Register */
	uint32_t volatile CLICINTCTL_84;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_84_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_84_LEVEL_PRIORITY_lsb			0u

	/* 0x1153 */
	uint8_t RESERVED345[0x1157u-0x1153u];

	/* 0x1157: clicintctl Register */
	uint32_t volatile CLICINTCTL_85;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_85_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_85_LEVEL_PRIORITY_lsb			0u

	/* 0x1157 */
	uint8_t RESERVED346[0x115Bu-0x1157u];

	/* 0x115B: clicintctl Register */
	uint32_t volatile CLICINTCTL_86;
	/* LEVEL_PRIORITY */
#define ECLIC_CLICINTCTL_86_LEVEL_PRIORITY_msb			7u
#define ECLIC_CLICINTCTL_86_LEVEL_PRIORITY_lsb			0u

};


#define PMU ((struct sdk_pmu *)0x40007000)

struct sdk_pmu {

	/* 0x00: power control register */
	uint32_t volatile CTL;
	/* Backup Domain Write Enable */
#define PMU_CTL_BKPWEN						8u
	/* Low Voltage Detector Threshold */
#define PMU_CTL_LVDT_msb					7u
#define PMU_CTL_LVDT_lsb					5u
	/* Low Voltage Detector Enable */
#define PMU_CTL_LVDEN						4u
	/* Standby Flag Reset */
#define PMU_CTL_STBRST						3u
	/* Wakeup Flag Reset */
#define PMU_CTL_WURST						2u
	/* Standby Mode */
#define PMU_CTL_STBMOD						1u
	/* LDO Low Power Mode */
#define PMU_CTL_LDOLP						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: power control/status register */
	uint32_t volatile CS;
	/* Enable WKUP pin */
#define PMU_CS_WUPEN						8u
	/* Low Voltage Detector Status Flag */
#define PMU_CS_LVDF						2u
	/* Standby flag */
#define PMU_CS_STBF						1u
	/* Wakeup flag */
#define PMU_CS_WUF						0u

};


#define RCU ((struct sdk_rcu *)0x40021000)

struct sdk_rcu {

	/* 0x00: Control register */
	uint32_t volatile CTL;
	/* Internal 8MHz RC oscillator Enable */
#define RCU_CTL_IRC8MEN						0u
	/* IRC8M Internal 8MHz RC Oscillator stabilization Flag */
#define RCU_CTL_IRC8MSTB					1u
	/* Internal 8MHz RC Oscillator clock trim adjust value */
#define RCU_CTL_IRC8MADJ_msb					7u
#define RCU_CTL_IRC8MADJ_lsb					3u
	/* Internal 8MHz RC Oscillator calibration value register */
#define RCU_CTL_IRC8MCALIB_msb					15u
#define RCU_CTL_IRC8MCALIB_lsb					8u
	/* External High Speed oscillator Enable */
#define RCU_CTL_HXTALEN						16u
	/* External crystal oscillator (HXTAL) clock stabilization flag */
#define RCU_CTL_HXTALSTB					17u
	/* External crystal oscillator (HXTAL) clock bypass mode enable */
#define RCU_CTL_HXTALBPS					18u
	/* HXTAL Clock Monitor Enable */
#define RCU_CTL_CKMEN						19u
	/* PLL enable */
#define RCU_CTL_PLLEN						24u
	/* PLL Clock Stabilization Flag */
#define RCU_CTL_PLLSTB						25u
	/* PLL1 enable */
#define RCU_CTL_PLL1EN						26u
	/* PLL1 Clock Stabilization Flag */
#define RCU_CTL_PLL1STB						27u
	/* PLL2 enable */
#define RCU_CTL_PLL2EN						28u
	/* PLL2 Clock Stabilization Flag */
#define RCU_CTL_PLL2STB						29u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Clock configuration register 0 */
	uint32_t volatile CFG0;
	/* System clock switch */
#define RCU_CFG0_SCS_msb					1u
#define RCU_CFG0_SCS_lsb					0u
	/* System clock switch status */
#define RCU_CFG0_SCSS_msb					3u
#define RCU_CFG0_SCSS_lsb					2u
	/* AHB prescaler selection */
#define RCU_CFG0_AHBPSC_msb					7u
#define RCU_CFG0_AHBPSC_lsb					4u
	/* APB1 prescaler selection */
#define RCU_CFG0_APB1PSC_msb					10u
#define RCU_CFG0_APB1PSC_lsb					8u
	/* APB2 prescaler selection */
#define RCU_CFG0_APB2PSC_msb					13u
#define RCU_CFG0_APB2PSC_lsb					11u
	/* ADC clock prescaler selection */
#define RCU_CFG0_ADCPSC_1_0_msb					15u
#define RCU_CFG0_ADCPSC_1_0_lsb					14u
	/* PLL Clock Source Selection */
#define RCU_CFG0_PLLSEL						16u
	/* The LSB of PREDV0 division factor */
#define RCU_CFG0_PREDV0_LSB					17u
	/* The PLL clock multiplication factor */
#define RCU_CFG0_PLLMF_3_0_msb					21u
#define RCU_CFG0_PLLMF_3_0_lsb					18u
	/* USBFS clock prescaler selection */
#define RCU_CFG0_USBFSPSC_msb					23u
#define RCU_CFG0_USBFSPSC_lsb					22u
	/* CKOUT0 Clock Source Selection */
#define RCU_CFG0_CKOUT0SEL_msb					27u
#define RCU_CFG0_CKOUT0SEL_lsb					24u
	/* Bit 2 of ADCPSC */
#define RCU_CFG0_ADCPSC_2					28u
	/* Bit 4 of PLLMF */
#define RCU_CFG0_PLLMF_4					29u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Clock interrupt register */
	uint32_t volatile INT;
	/* IRC40K stabilization interrupt flag */
#define RCU_INT_IRC40KSTBIF					0u
	/* LXTAL stabilization interrupt flag */
#define RCU_INT_LXTALSTBIF					1u
	/* IRC8M stabilization interrupt flag */
#define RCU_INT_IRC8MSTBIF					2u
	/* HXTAL stabilization interrupt flag */
#define RCU_INT_HXTALSTBIF					3u
	/* PLL stabilization interrupt flag */
#define RCU_INT_PLLSTBIF					4u
	/* PLL1 stabilization interrupt flag */
#define RCU_INT_PLL1STBIF					5u
	/* PLL2 stabilization interrupt flag */
#define RCU_INT_PLL2STBIF					6u
	/* HXTAL Clock Stuck Interrupt Flag */
#define RCU_INT_CKMIF						7u
	/* IRC40K Stabilization interrupt enable */
#define RCU_INT_IRC40KSTBIE					8u
	/* LXTAL Stabilization Interrupt Enable */
#define RCU_INT_LXTALSTBIE					9u
	/* IRC8M Stabilization Interrupt Enable */
#define RCU_INT_IRC8MSTBIE					10u
	/* HXTAL Stabilization Interrupt Enable */
#define RCU_INT_HXTALSTBIE					11u
	/* PLL Stabilization Interrupt Enable */
#define RCU_INT_PLLSTBIE					12u
	/* PLL1 Stabilization Interrupt Enable */
#define RCU_INT_PLL1STBIE					13u
	/* PLL2 Stabilization Interrupt Enable */
#define RCU_INT_PLL2STBIE					14u
	/* IRC40K Stabilization Interrupt Clear */
#define RCU_INT_IRC40KSTBIC					16u
	/* LXTAL Stabilization Interrupt Clear */
#define RCU_INT_LXTALSTBIC					17u
	/* IRC8M Stabilization Interrupt Clear */
#define RCU_INT_IRC8MSTBIC					18u
	/* HXTAL Stabilization Interrupt Clear */
#define RCU_INT_HXTALSTBIC					19u
	/* PLL stabilization Interrupt Clear */
#define RCU_INT_PLLSTBIC					20u
	/* PLL1 stabilization Interrupt Clear */
#define RCU_INT_PLL1STBIC					21u
	/* PLL2 stabilization Interrupt Clear */
#define RCU_INT_PLL2STBIC					22u
	/* HXTAL Clock Stuck Interrupt Clear */
#define RCU_INT_CKMIC						23u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: APB2 reset register */
	uint32_t volatile APB2RST;
	/* Alternate function I/O reset */
#define RCU_APB2RST_AFRST					0u
	/* GPIO port A reset */
#define RCU_APB2RST_PARST					2u
	/* GPIO port B reset */
#define RCU_APB2RST_PBRST					3u
	/* GPIO port C reset */
#define RCU_APB2RST_PCRST					4u
	/* GPIO port D reset */
#define RCU_APB2RST_PDRST					5u
	/* GPIO port E reset */
#define RCU_APB2RST_PERST					6u
	/* ADC0 reset */
#define RCU_APB2RST_ADC0RST					9u
	/* ADC1 reset */
#define RCU_APB2RST_ADC1RST					10u
	/* Timer 0 reset */
#define RCU_APB2RST_TIMER0RST					11u
	/* SPI0 reset */
#define RCU_APB2RST_SPI0RST					12u
	/* USART0 Reset */
#define RCU_APB2RST_USART0RST					14u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: APB1 reset register */
	uint32_t volatile APB1RST;
	/* TIMER1 timer reset */
#define RCU_APB1RST_TIMER1RST					0u
	/* TIMER2 timer reset */
#define RCU_APB1RST_TIMER2RST					1u
	/* TIMER3 timer reset */
#define RCU_APB1RST_TIMER3RST					2u
	/* TIMER4 timer reset */
#define RCU_APB1RST_TIMER4RST					3u
	/* TIMER5 timer reset */
#define RCU_APB1RST_TIMER5RST					4u
	/* TIMER6 timer reset */
#define RCU_APB1RST_TIMER6RST					5u
	/* Window watchdog timer reset */
#define RCU_APB1RST_WWDGTRST					11u
	/* SPI1 reset */
#define RCU_APB1RST_SPI1RST					14u
	/* SPI2 reset */
#define RCU_APB1RST_SPI2RST					15u
	/* USART1 reset */
#define RCU_APB1RST_USART1RST					17u
	/* USART2 reset */
#define RCU_APB1RST_USART2RST					18u
	/* UART3 reset */
#define RCU_APB1RST_UART3RST					19u
	/* UART4 reset */
#define RCU_APB1RST_UART4RST					20u
	/* I2C0 reset */
#define RCU_APB1RST_I2C0RST					21u
	/* I2C1 reset */
#define RCU_APB1RST_I2C1RST					22u
	/* CAN0 reset */
#define RCU_APB1RST_CAN0RST					25u
	/* CAN1 reset */
#define RCU_APB1RST_CAN1RST					26u
	/* Backup interface reset */
#define RCU_APB1RST_BKPIRST					27u
	/* Power control reset */
#define RCU_APB1RST_PMURST					28u
	/* DAC reset */
#define RCU_APB1RST_DACRST					29u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: AHB enable register */
	uint32_t volatile AHBEN;
	/* DMA0 clock enable */
#define RCU_AHBEN_DMA0EN					0u
	/* DMA1 clock enable */
#define RCU_AHBEN_DMA1EN					1u
	/* SRAM interface clock enable when sleep mode */
#define RCU_AHBEN_SRAMSPEN					2u
	/* FMC clock enable when sleep mode */
#define RCU_AHBEN_FMCSPEN					4u
	/* CRC clock enable */
#define RCU_AHBEN_CRCEN						6u
	/* EXMC clock enable */
#define RCU_AHBEN_EXMCEN					8u
	/* USBFS clock enable */
#define RCU_AHBEN_USBFSEN					12u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: APB2 clock enable register */
	uint32_t volatile APB2EN;
	/* Alternate function IO clock enable */
#define RCU_APB2EN_AFEN						0u
	/* GPIO port A clock enable */
#define RCU_APB2EN_PAEN						2u
	/* GPIO port B clock enable */
#define RCU_APB2EN_PBEN						3u
	/* GPIO port C clock enable */
#define RCU_APB2EN_PCEN						4u
	/* GPIO port D clock enable */
#define RCU_APB2EN_PDEN						5u
	/* GPIO port E clock enable */
#define RCU_APB2EN_PEEN						6u
	/* ADC0 clock enable */
#define RCU_APB2EN_ADC0EN					9u
	/* ADC1 clock enable */
#define RCU_APB2EN_ADC1EN					10u
	/* TIMER0 clock enable */
#define RCU_APB2EN_TIMER0EN					11u
	/* SPI0 clock enable */
#define RCU_APB2EN_SPI0EN					12u
	/* USART0 clock enable */
#define RCU_APB2EN_USART0EN					14u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: APB1 clock enable register */
	uint32_t volatile APB1EN;
	/* TIMER1 timer clock enable */
#define RCU_APB1EN_TIMER1EN					0u
	/* TIMER2 timer clock enable */
#define RCU_APB1EN_TIMER2EN					1u
	/* TIMER3 timer clock enable */
#define RCU_APB1EN_TIMER3EN					2u
	/* TIMER4 timer clock enable */
#define RCU_APB1EN_TIMER4EN					3u
	/* TIMER5 timer clock enable */
#define RCU_APB1EN_TIMER5EN					4u
	/* TIMER6 timer clock enable */
#define RCU_APB1EN_TIMER6EN					5u
	/* Window watchdog timer clock enable */
#define RCU_APB1EN_WWDGTEN					11u
	/* SPI1 clock enable */
#define RCU_APB1EN_SPI1EN					14u
	/* SPI2 clock enable */
#define RCU_APB1EN_SPI2EN					15u
	/* USART1 clock enable */
#define RCU_APB1EN_USART1EN					17u
	/* USART2 clock enable */
#define RCU_APB1EN_USART2EN					18u
	/* UART3 clock enable */
#define RCU_APB1EN_UART3EN					19u
	/* UART4 clock enable */
#define RCU_APB1EN_UART4EN					20u
	/* I2C0 clock enable */
#define RCU_APB1EN_I2C0EN					21u
	/* I2C1 clock enable */
#define RCU_APB1EN_I2C1EN					22u
	/* CAN0 clock enable */
#define RCU_APB1EN_CAN0EN					25u
	/* CAN1 clock enable */
#define RCU_APB1EN_CAN1EN					26u
	/* Backup interface clock enable */
#define RCU_APB1EN_BKPIEN					27u
	/* Power control clock enable */
#define RCU_APB1EN_PMUEN					28u
	/* DAC clock enable */
#define RCU_APB1EN_DACEN					29u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Backup domain control register */
	uint32_t volatile BDCTL;
	/* LXTAL enable */
#define RCU_BDCTL_LXTALEN					0u
	/* External low-speed oscillator stabilization */
#define RCU_BDCTL_LXTALSTB					1u
	/* LXTAL bypass mode enable */
#define RCU_BDCTL_LXTALBPS					2u
	/* RTC clock entry selection */
#define RCU_BDCTL_RTCSRC_msb					9u
#define RCU_BDCTL_RTCSRC_lsb					8u
	/* RTC clock enable */
#define RCU_BDCTL_RTCEN						15u
	/* Backup domain reset */
#define RCU_BDCTL_BKPRST					16u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: Reset source /clock register */
	uint32_t volatile RSTSCK;
	/* IRC40K enable */
#define RCU_RSTSCK_IRC40KEN					0u
	/* IRC40K stabilization */
#define RCU_RSTSCK_IRC40KSTB					1u
	/* Reset flag clear */
#define RCU_RSTSCK_RSTFC					24u
	/* External PIN reset flag */
#define RCU_RSTSCK_EPRSTF					26u
	/* Power reset flag */
#define RCU_RSTSCK_PORRSTF					27u
	/* Software reset flag */
#define RCU_RSTSCK_SWRSTF					28u
	/* Free Watchdog timer reset flag */
#define RCU_RSTSCK_FWDGTRSTF					29u
	/* Window watchdog timer reset flag */
#define RCU_RSTSCK_WWDGTRSTF					30u
	/* Low-power reset flag */
#define RCU_RSTSCK_LPRSTF					31u

	/* 0x24 */
	uint8_t RESERVED9[0x28u-0x24u];

	/* 0x28: AHB reset register */
	uint32_t volatile AHBRST;
	/* USBFS reset */
#define RCU_AHBRST_USBFSRST					12u

	/* 0x28 */
	uint8_t RESERVED10[0x2Cu-0x28u];

	/* 0x2C: Clock Configuration register 1 */
	uint32_t volatile CFG1;
	/* PREDV0 division factor */
#define RCU_CFG1_PREDV0_msb					3u
#define RCU_CFG1_PREDV0_lsb					0u
	/* PREDV1 division factor */
#define RCU_CFG1_PREDV1_msb					7u
#define RCU_CFG1_PREDV1_lsb					4u
	/* The PLL1 clock multiplication factor */
#define RCU_CFG1_PLL1MF_msb					11u
#define RCU_CFG1_PLL1MF_lsb					8u
	/* The PLL2 clock multiplication factor */
#define RCU_CFG1_PLL2MF_msb					15u
#define RCU_CFG1_PLL2MF_lsb					12u
	/* PREDV0 input Clock Source Selection */
#define RCU_CFG1_PREDV0SEL					16u
	/* I2S1 Clock Source Selection */
#define RCU_CFG1_I2S1SEL					17u
	/* I2S2 Clock Source Selection */
#define RCU_CFG1_I2S2SEL					18u

	/* 0x2C */
	uint8_t RESERVED11[0x34u-0x2Cu];

	/* 0x34: Deep sleep mode Voltage register */
	uint32_t volatile DSV;
	/* Deep-sleep mode voltage select */
#define RCU_DSV_DSLPVS_msb					1u
#define RCU_DSV_DSLPVS_lsb					0u

};


#define RTC ((struct sdk_rtc *)0x40002800)

struct sdk_rtc {

	/* 0x00: RTC interrupt enable register */
	uint32_t volatile INTEN;
	/* Overflow interrupt enable */
#define RTC_INTEN_OVIE						2u
	/* Alarm interrupt enable */
#define RTC_INTEN_ALRMIE					1u
	/* Second interrupt */
#define RTC_INTEN_SCIE						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: control register */
	uint32_t volatile CTL;
	/* Last write operation finished flag */
#define RTC_CTL_LWOFF						5u
	/* Configuration mode flag */
#define RTC_CTL_CMF						4u
	/* Registers synchronized flag */
#define RTC_CTL_RSYNF						3u
	/* Overflow interrupt flag */
#define RTC_CTL_OVIF						2u
	/* Alarm interrupt flag */
#define RTC_CTL_ALRMIF						1u
	/* Sencond interrupt flag */
#define RTC_CTL_SCIF						0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: RTC prescaler high register */
	uint32_t volatile PSCH;
	/* RTC prescaler value high */
#define RTC_PSCH_PSC_msb					3u
#define RTC_PSCH_PSC_lsb					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C:  */
	uint32_t volatile PSCL;
	/* RTC prescaler value low */
#define RTC_PSCL_PSC_msb					15u
#define RTC_PSCL_PSC_lsb					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: RTC divider high register */
	uint32_t volatile DIVH;
	/* RTC divider value high */
#define RTC_DIVH_DIV_msb					3u
#define RTC_DIVH_DIV_lsb					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: RTC divider low register */
	uint32_t volatile DIVL;
	/* RTC divider value low */
#define RTC_DIVL_DIV_msb					15u
#define RTC_DIVL_DIV_lsb					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: RTC counter high register */
	uint32_t volatile CNTH;
	/* RTC counter value high */
#define RTC_CNTH_CNT_msb					15u
#define RTC_CNTH_CNT_lsb					0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: RTC counter low register */
	uint32_t volatile CNTL;
	/* RTC counter value low */
#define RTC_CNTL_CNT_msb					15u
#define RTC_CNTL_CNT_lsb					0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Alarm high register */
	uint32_t volatile ALRMH;
	/* Alarm  value high */
#define RTC_ALRMH_ALRM_msb					15u
#define RTC_ALRMH_ALRM_lsb					0u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: RTC alarm low register */
	uint32_t volatile ALRML;
	/* alarm value low */
#define RTC_ALRML_ALRM_msb					15u
#define RTC_ALRML_ALRM_lsb					0u

};


#define SPI0 ((struct sdk_spi *)0x40013000)
#define SPI1 ((struct sdk_spi *)0x40003800)
#define SPI2 ((struct sdk_spi *)0x40003C00)

struct sdk_spi {

	/* 0x00: control register 0 */
	uint32_t volatile CTL0;
	/* Bidirectional */
#define SPI_CTL0_BDEN						15u
	/* Bidirectional Transmit output enable */
#define SPI_CTL0_BDOEN						14u
	/* CRC Calculation Enable */
#define SPI_CTL0_CRCEN						13u
	/* CRC Next Transfer */
#define SPI_CTL0_CRCNT						12u
	/* Data frame format */
#define SPI_CTL0_FF16						11u
	/* Receive only */
#define SPI_CTL0_RO						10u
	/* NSS Software Mode Selection */
#define SPI_CTL0_SWNSSEN					9u
	/* NSS Pin Selection In NSS Software Mode */
#define SPI_CTL0_SWNSS						8u
	/* LSB First Mode */
#define SPI_CTL0_LF						7u
	/* SPI enable */
#define SPI_CTL0_SPIEN						6u
	/* Master Clock Prescaler Selection */
#define SPI_CTL0_PSC_msb					5u
#define SPI_CTL0_PSC_lsb					3u
	/* Master Mode Enable */
#define SPI_CTL0_MSTMOD					2u
	/* Clock polarity Selection */
#define SPI_CTL0_CKPL						1u
	/* Clock Phase Selection */
#define SPI_CTL0_CKPH						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: control register 1 */
	uint32_t volatile CTL1;
	/* Tx buffer empty interrupt */
#define SPI_CTL1_TBEIE						7u
	/* RX buffer not empty interrupt */
#define SPI_CTL1_RBNEIE					6u
	/* Error interrupt enable */
#define SPI_CTL1_ERRIE						5u
	/* SPI TI mode enable */
#define SPI_CTL1_TMOD						4u
	/* SPI NSS pulse mode enable */
#define SPI_CTL1_NSSP						3u
	/* Drive NSS Output */
#define SPI_CTL1_NSSDRV					2u
	/* Transmit Buffer DMA Enable */
#define SPI_CTL1_DMATEN					1u
	/* Rx buffer DMA enable */
#define SPI_CTL1_DMAREN					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: status register */
	uint32_t volatile STAT;
	/* Format error */
#define SPI_STAT_FERR						8u
	/* Transmitting On-going Bit */
#define SPI_STAT_TRANS						7u
	/* Reception Overrun Error Bit */
#define SPI_STAT_RXORERR					6u
	/* SPI Configuration error */
#define SPI_STAT_CONFERR					5u
	/* SPI CRC Error Bit */
#define SPI_STAT_CRCERR					4u
	/* Transmission underrun error bit */
#define SPI_STAT_TXURERR					3u
	/* I2S channel side */
#define SPI_STAT_I2SCH						2u
	/* Transmit Buffer Empty */
#define SPI_STAT_TBE						1u
	/* Receive Buffer Not Empty */
#define SPI_STAT_RBNE						0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: data register */
	uint32_t volatile DATA;
	/* Data transfer register */
#define SPI_DATA_SPI_DATA_msb					15u
#define SPI_DATA_SPI_DATA_lsb					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: CRC polynomial register */
	uint32_t volatile CRCPOLY;
	/* CRC polynomial value */
#define SPI_CRCPOLY_CRCPOLY_msb				15u
#define SPI_CRCPOLY_CRCPOLY_lsb				0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: RX CRC register */
	uint32_t volatile RCRC;
	/* RX CRC value */
#define SPI_RCRC_RCRC_msb					15u
#define SPI_RCRC_RCRC_lsb					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: TX CRC register */
	uint32_t volatile TCRC;
	/* Tx CRC value */
#define SPI_TCRC_TCRC_msb					15u
#define SPI_TCRC_TCRC_lsb					0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: I2S control register */
	uint32_t volatile I2SCTL;
	/* I2S mode selection */
#define SPI_I2SCTL_I2SSEL					11u
	/* I2S Enable */
#define SPI_I2SCTL_I2SEN					10u
	/* I2S operation mode */
#define SPI_I2SCTL_I2SOPMOD_msb				9u
#define SPI_I2SCTL_I2SOPMOD_lsb				8u
	/* PCM frame synchronization mode */
#define SPI_I2SCTL_PCMSMOD					7u
	/* I2S standard selection */
#define SPI_I2SCTL_I2SSTD_msb					5u
#define SPI_I2SCTL_I2SSTD_lsb					4u
	/* Idle state clock polarity */
#define SPI_I2SCTL_CKPL					3u
	/* Data length */
#define SPI_I2SCTL_DTLEN_msb					2u
#define SPI_I2SCTL_DTLEN_lsb					1u
	/* Channel length (number of bits per audio */
#define SPI_I2SCTL_CHLEN					0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: I2S prescaler register */
	uint32_t volatile I2SPSC;
	/* I2S_MCK output enable */
#define SPI_I2SPSC_MCKOEN					9u
	/* Odd factor for the */
#define SPI_I2SPSC_OF						8u
	/* Dividing factor for the prescaler */
#define SPI_I2SPSC_DIV_msb					7u
#define SPI_I2SPSC_DIV_lsb					0u

};


#define TIMER0 ((struct sdk_timer0 *)0x40012C00)

struct sdk_timer0 {

	/* 0x00: control register 0 */
	uint32_t volatile CTL0;
	/* Clock division */
#define TIMER0_CTL0_CKDIV_msb					9u
#define TIMER0_CTL0_CKDIV_lsb					8u
	/* Auto-reload shadow enable */
#define TIMER0_CTL0_ARSE					7u
	/* Counter aligns mode */
#define TIMER0_CTL0_CAM_msb					6u
#define TIMER0_CTL0_CAM_lsb					5u
	/* Direction */
#define TIMER0_CTL0_DIR						4u
	/* Single pulse mode */
#define TIMER0_CTL0_SPM						3u
	/* Update source */
#define TIMER0_CTL0_UPS						2u
	/* Update disable */
#define TIMER0_CTL0_UPDIS					1u
	/* Counter enable */
#define TIMER0_CTL0_CEN						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: control register 1 */
	uint32_t volatile CTL1;
	/* Idle state of channel 3 output */
#define TIMER0_CTL1_ISO3					14u
	/* Idle state of channel 2 complementary output */
#define TIMER0_CTL1_ISO2N					13u
	/* Idle state of channel 2 output */
#define TIMER0_CTL1_ISO2					12u
	/* Idle state of channel 1 complementary output */
#define TIMER0_CTL1_ISO1N					11u
	/* Idle state of channel 1 output */
#define TIMER0_CTL1_ISO1					10u
	/* Idle state of channel 0 complementary output */
#define TIMER0_CTL1_ISO0N					9u
	/* Idle state of channel 0 output */
#define TIMER0_CTL1_ISO0					8u
	/* Channel 0 trigger input selection */
#define TIMER0_CTL1_TI0S					7u
	/* Master mode control */
#define TIMER0_CTL1_MMC_msb					6u
#define TIMER0_CTL1_MMC_lsb					4u
	/* DMA request source selection */
#define TIMER0_CTL1_DMAS					3u
	/* Commutation control shadow register update control */
#define TIMER0_CTL1_CCUC					2u
	/* Commutation control shadow enable */
#define TIMER0_CTL1_CCSE					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: slave mode configuration register */
	uint32_t volatile SMCFG;
	/* External trigger polarity */
#define TIMER0_SMCFG_ETP					15u
	/* Part of SMC for enable External clock mode1 */
#define TIMER0_SMCFG_SMC1					14u
	/* External trigger prescaler */
#define TIMER0_SMCFG_ETPSC_msb					13u
#define TIMER0_SMCFG_ETPSC_lsb					12u
	/* External trigger filter control */
#define TIMER0_SMCFG_ETFC_msb					11u
#define TIMER0_SMCFG_ETFC_lsb					8u
	/* Master/Slave mode */
#define TIMER0_SMCFG_MSM					7u
	/* Trigger selection */
#define TIMER0_SMCFG_TRGS_msb					6u
#define TIMER0_SMCFG_TRGS_lsb					4u
	/* Slave mode selection */
#define TIMER0_SMCFG_SMC_msb					2u
#define TIMER0_SMCFG_SMC_lsb					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DMAINTEN;
	/* Trigger DMA request enable */
#define TIMER0_DMAINTEN_TRGDEN					14u
	/* Commutation DMA request enable */
#define TIMER0_DMAINTEN_CMTDEN					13u
	/* Channel 3 capture/compare DMA request enable */
#define TIMER0_DMAINTEN_CH3DEN					12u
	/* Channel 2 capture/compare DMA request enable */
#define TIMER0_DMAINTEN_CH2DEN					11u
	/* Channel 1 capture/compare DMA request enable */
#define TIMER0_DMAINTEN_CH1DEN					10u
	/* Channel 0 capture/compare DMA request enable */
#define TIMER0_DMAINTEN_CH0DEN					9u
	/* Update DMA request enable */
#define TIMER0_DMAINTEN_UPDEN					8u
	/* Break interrupt enable */
#define TIMER0_DMAINTEN_BRKIE					7u
	/* Trigger interrupt enable */
#define TIMER0_DMAINTEN_TRGIE					6u
	/* commutation interrupt enable */
#define TIMER0_DMAINTEN_CMTIE					5u
	/* Channel 3 capture/compare interrupt enable */
#define TIMER0_DMAINTEN_CH3IE					4u
	/* Channel 2 capture/compare interrupt enable */
#define TIMER0_DMAINTEN_CH2IE					3u
	/* Channel 1 capture/compare interrupt enable */
#define TIMER0_DMAINTEN_CH1IE					2u
	/* Channel 0 capture/compare interrupt enable */
#define TIMER0_DMAINTEN_CH0IE					1u
	/* Update interrupt enable */
#define TIMER0_DMAINTEN_UPIE					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Interrupt flag register */
	uint32_t volatile INTF;
	/* Channel 3 over capture flag */
#define TIMER0_INTF_CH3OF					12u
	/* Channel 2 over capture flag */
#define TIMER0_INTF_CH2OF					11u
	/* Channel 1 over capture flag */
#define TIMER0_INTF_CH1OF					10u
	/* Channel 0 over capture flag */
#define TIMER0_INTF_CH0OF					9u
	/* Break interrupt flag */
#define TIMER0_INTF_BRKIF					7u
	/* Trigger interrupt flag */
#define TIMER0_INTF_TRGIF					6u
	/* Channel commutation interrupt flag */
#define TIMER0_INTF_CMTIF					5u
	/* Channel 3 capture/compare interrupt flag */
#define TIMER0_INTF_CH3IF					4u
	/*  */
#define TIMER0_INTF_CH2IF					3u
	/* Channel 1  capture/compare interrupt flag */
#define TIMER0_INTF_CH1IF					2u
	/* Channel 0  capture/compare interrupt flag */
#define TIMER0_INTF_CH0IF					1u
	/* Update interrupt flag */
#define TIMER0_INTF_UPIF					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Software event generation register */
	uint32_t volatile SWEVG;
	/* Break event generation */
#define TIMER0_SWEVG_BRKG					7u
	/* Trigger event generation */
#define TIMER0_SWEVG_TRGG					6u
	/* Channel commutation event generation */
#define TIMER0_SWEVG_CMTG					5u
	/* Channel  3 capture or compare event generation */
#define TIMER0_SWEVG_CH3G					4u
	/* Channel 2 capture or compare event generation */
#define TIMER0_SWEVG_CH2G					3u
	/* Channel 1 capture or compare event generation */
#define TIMER0_SWEVG_CH1G					2u
	/* Channel 0 capture or compare event generation */
#define TIMER0_SWEVG_CH0G					1u
	/* Update event generation */
#define TIMER0_SWEVG_UPG					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Channel control register 0 (output */
	uint32_t volatile CHCTL0_OUTPUT;
	/* Channel 1 output compare clear enable */
#define TIMER0_CHCTL0_OUTPUT_CH1COMCEN				15u
	/* Channel 1 compare output control */
#define TIMER0_CHCTL0_OUTPUT_CH1COMCTL_msb			14u
#define TIMER0_CHCTL0_OUTPUT_CH1COMCTL_lsb			12u
	/* Channel 1 output compare shadow enable */
#define TIMER0_CHCTL0_OUTPUT_CH1COMSEN				11u
	/* Channel 1 output compare fast enable */
#define TIMER0_CHCTL0_OUTPUT_CH1COMFEN				10u
	/* Channel 1 mode selection */
#define TIMER0_CHCTL0_OUTPUT_CH1MS_msb				9u
#define TIMER0_CHCTL0_OUTPUT_CH1MS_lsb				8u
	/* Channel 0 output compare clear enable */
#define TIMER0_CHCTL0_OUTPUT_CH0COMCEN				7u
	/* Channel 0 compare output control */
#define TIMER0_CHCTL0_OUTPUT_CH0COMCTL_msb			6u
#define TIMER0_CHCTL0_OUTPUT_CH0COMCTL_lsb			4u
	/* Channel 0 compare output shadow enable */
#define TIMER0_CHCTL0_OUTPUT_CH0COMSEN				3u
	/* Channel 0 output compare fast enable */
#define TIMER0_CHCTL0_OUTPUT_CH0COMFEN				2u
	/* Channel 0 I/O mode selection */
#define TIMER0_CHCTL0_OUTPUT_CH0MS_msb				1u
#define TIMER0_CHCTL0_OUTPUT_CH0MS_lsb				0u

	/* 0x18: Channel control register 0 (input */
	uint32_t volatile CHCTL0_INPUT;
	/* Channel 1 input capture filter control */
#define TIMER0_CHCTL0_INPUT_CH1CAPFLT_msb			15u
#define TIMER0_CHCTL0_INPUT_CH1CAPFLT_lsb			12u
	/* Channel 1 input capture prescaler */
#define TIMER0_CHCTL0_INPUT_CH1CAPPSC_msb			11u
#define TIMER0_CHCTL0_INPUT_CH1CAPPSC_lsb			10u
	/* Channel 1 mode selection */
#define TIMER0_CHCTL0_INPUT_CH1MS_msb				9u
#define TIMER0_CHCTL0_INPUT_CH1MS_lsb				8u
	/* Channel 0 input capture filter control */
#define TIMER0_CHCTL0_INPUT_CH0CAPFLT_msb			7u
#define TIMER0_CHCTL0_INPUT_CH0CAPFLT_lsb			4u
	/* Channel 0 input capture prescaler */
#define TIMER0_CHCTL0_INPUT_CH0CAPPSC_msb			3u
#define TIMER0_CHCTL0_INPUT_CH0CAPPSC_lsb			2u
	/* Channel 0 mode selection */
#define TIMER0_CHCTL0_INPUT_CH0MS_msb				1u
#define TIMER0_CHCTL0_INPUT_CH0MS_lsb				0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: Channel control register 1 (output */
	uint32_t volatile CHCTL1_OUTPUT;
	/* Channel 3 output compare clear enable */
#define TIMER0_CHCTL1_OUTPUT_CH3COMCEN				15u
	/* Channel 3 compare output control */
#define TIMER0_CHCTL1_OUTPUT_CH3COMCTL_msb			14u
#define TIMER0_CHCTL1_OUTPUT_CH3COMCTL_lsb			12u
	/* Channel 3 output compare shadow enable */
#define TIMER0_CHCTL1_OUTPUT_CH3COMSEN				11u
	/* Channel 3 output compare fast enable */
#define TIMER0_CHCTL1_OUTPUT_CH3COMFEN				10u
	/* Channel 3 mode selection */
#define TIMER0_CHCTL1_OUTPUT_CH3MS_msb				9u
#define TIMER0_CHCTL1_OUTPUT_CH3MS_lsb				8u
	/* Channel 2 output compare clear enable */
#define TIMER0_CHCTL1_OUTPUT_CH2COMCEN				7u
	/* Channel 2 compare output control */
#define TIMER0_CHCTL1_OUTPUT_CH2COMCTL_msb			6u
#define TIMER0_CHCTL1_OUTPUT_CH2COMCTL_lsb			4u
	/* Channel 2 compare output shadow enable */
#define TIMER0_CHCTL1_OUTPUT_CH2COMSEN				3u
	/* Channel 2 output compare fast enable */
#define TIMER0_CHCTL1_OUTPUT_CH2COMFEN				2u
	/* Channel 2 I/O mode selection */
#define TIMER0_CHCTL1_OUTPUT_CH2MS_msb				1u
#define TIMER0_CHCTL1_OUTPUT_CH2MS_lsb				0u

	/* 0x1C: Channel control register 1 (input */
	uint32_t volatile CHCTL1_INPUT;
	/* Channel 3 input capture filter control */
#define TIMER0_CHCTL1_INPUT_CH3CAPFLT_msb			15u
#define TIMER0_CHCTL1_INPUT_CH3CAPFLT_lsb			12u
	/* Channel 3 input capture prescaler */
#define TIMER0_CHCTL1_INPUT_CH3CAPPSC_msb			11u
#define TIMER0_CHCTL1_INPUT_CH3CAPPSC_lsb			10u
	/* Channel 3 mode selection */
#define TIMER0_CHCTL1_INPUT_CH3MS_msb				9u
#define TIMER0_CHCTL1_INPUT_CH3MS_lsb				8u
	/* Channel 2 input capture filter control */
#define TIMER0_CHCTL1_INPUT_CH2CAPFLT_msb			7u
#define TIMER0_CHCTL1_INPUT_CH2CAPFLT_lsb			4u
	/* Channel 2 input capture prescaler */
#define TIMER0_CHCTL1_INPUT_CH2CAPPSC_msb			3u
#define TIMER0_CHCTL1_INPUT_CH2CAPPSC_lsb			2u
	/* Channel 2 mode selection */
#define TIMER0_CHCTL1_INPUT_CH2MS_msb				1u
#define TIMER0_CHCTL1_INPUT_CH2MS_lsb				0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Channel control register 2 */
	uint32_t volatile CHCTL2;
	/* Channel 3 capture/compare function polarity */
#define TIMER0_CHCTL2_CH3P					13u
	/* Channel 3 capture/compare function enable */
#define TIMER0_CHCTL2_CH3EN					12u
	/* Channel 2 complementary output polarity */
#define TIMER0_CHCTL2_CH2NP					11u
	/* Channel 2 complementary output enable */
#define TIMER0_CHCTL2_CH2NEN					10u
	/* Channel 2 capture/compare function polarity */
#define TIMER0_CHCTL2_CH2P					9u
	/* Channel 2 capture/compare function enable */
#define TIMER0_CHCTL2_CH2EN					8u
	/* Channel 1 complementary output polarity */
#define TIMER0_CHCTL2_CH1NP					7u
	/* Channel 1 complementary output enable */
#define TIMER0_CHCTL2_CH1NEN					6u
	/* Channel 1 capture/compare function polarity */
#define TIMER0_CHCTL2_CH1P					5u
	/* Channel 1 capture/compare function enable */
#define TIMER0_CHCTL2_CH1EN					4u
	/* Channel 0 complementary output polarity */
#define TIMER0_CHCTL2_CH0NP					3u
	/* Channel 0 complementary output enable */
#define TIMER0_CHCTL2_CH0NEN					2u
	/* Channel 0 capture/compare function polarity */
#define TIMER0_CHCTL2_CH0P					1u
	/* Channel 0 capture/compare function enable */
#define TIMER0_CHCTL2_CH0EN					0u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* current counter value */
#define TIMER0_CNT_CNT_msb					15u
#define TIMER0_CNT_CNT_lsb					0u

	/* 0x24 */
	uint8_t RESERVED9[0x28u-0x24u];

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value of the counter clock */
#define TIMER0_PSC_PSC_msb					15u
#define TIMER0_PSC_PSC_lsb					0u

	/* 0x28 */
	uint8_t RESERVED10[0x2Cu-0x28u];

	/* 0x2C: Counter auto reload register */
	uint32_t volatile CAR;
	/* Counter auto reload value */
#define TIMER0_CAR_CARL_msb					15u
#define TIMER0_CAR_CARL_lsb					0u

	/* 0x2C */
	uint8_t RESERVED11[0x30u-0x2Cu];

	/* 0x30: Counter repetition register */
	uint32_t volatile CREP;
	/* Counter repetition value */
#define TIMER0_CREP_CREP_msb					7u
#define TIMER0_CREP_CREP_lsb					0u

	/* 0x30 */
	uint8_t RESERVED12[0x34u-0x30u];

	/* 0x34: Channel 0 capture/compare value register */
	uint32_t volatile CH0CV;
	/* Capture or compare value of channel0 */
#define TIMER0_CH0CV_CH0VAL_msb					15u
#define TIMER0_CH0CV_CH0VAL_lsb					0u

	/* 0x34 */
	uint8_t RESERVED13[0x38u-0x34u];

	/* 0x38: Channel 1 capture/compare value register */
	uint32_t volatile CH1CV;
	/* Capture or compare value of channel1 */
#define TIMER0_CH1CV_CH1VAL_msb					15u
#define TIMER0_CH1CV_CH1VAL_lsb					0u

	/* 0x38 */
	uint8_t RESERVED14[0x3Cu-0x38u];

	/* 0x3C: Channel 2 capture/compare value register */
	uint32_t volatile CH2CV;
	/* Capture or compare value of channel 2 */
#define TIMER0_CH2CV_CH2VAL_msb					15u
#define TIMER0_CH2CV_CH2VAL_lsb					0u

	/* 0x3C */
	uint8_t RESERVED15[0x40u-0x3Cu];

	/* 0x40: Channel 3 capture/compare value register */
	uint32_t volatile CH3CV;
	/* Capture or compare value of channel 3 */
#define TIMER0_CH3CV_CH3VAL_msb					15u
#define TIMER0_CH3CV_CH3VAL_lsb					0u

	/* 0x40 */
	uint8_t RESERVED16[0x44u-0x40u];

	/* 0x44: channel complementary protection register */
	uint32_t volatile CCHP;
	/* Primary output enable */
#define TIMER0_CCHP_POEN					15u
	/* Output automatic enable */
#define TIMER0_CCHP_OAEN					14u
	/* Break polarity */
#define TIMER0_CCHP_BRKP					13u
	/* Break enable */
#define TIMER0_CCHP_BRKEN					12u
	/* Run mode off-state configure */
#define TIMER0_CCHP_ROS						11u
	/* Idle mode off-state configure */
#define TIMER0_CCHP_IOS						10u
	/* Complementary register protect control */
#define TIMER0_CCHP_PROT_msb					9u
#define TIMER0_CCHP_PROT_lsb					8u
	/* Dead time configure */
#define TIMER0_CCHP_DTCFG_msb					7u
#define TIMER0_CCHP_DTCFG_lsb					0u

	/* 0x44 */
	uint8_t RESERVED17[0x48u-0x44u];

	/* 0x48: DMA configuration register */
	uint32_t volatile DMACFG;
	/* DMA transfer count */
#define TIMER0_DMACFG_DMATC_msb					12u
#define TIMER0_DMACFG_DMATC_lsb					8u
	/* DMA transfer access start address */
#define TIMER0_DMACFG_DMATA_msb					4u
#define TIMER0_DMACFG_DMATA_lsb					0u

	/* 0x48 */
	uint8_t RESERVED18[0x4Cu-0x48u];

	/* 0x4C: DMA transfer buffer register */
	uint32_t volatile DMATB;
	/* DMA transfer buffer */
#define TIMER0_DMATB_DMATB_msb					15u
#define TIMER0_DMATB_DMATB_lsb					0u

};


#define TIMER1 ((struct sdk_timer1 *)0x40000000)
#define TIMER2 ((struct sdk_timer2 *)0x40000400)
#define TIMER3 ((struct sdk_timer3 *)0x40000800)
#define TIMER4 ((struct sdk_timer4 *)0x40000C00)

struct sdk_timer1 {

	/* 0x00: control register 0 */
	uint32_t volatile CTL0;
	/* Clock division */
#define TIMER1_CTL0_CKDIV_msb					9u
#define TIMER1_CTL0_CKDIV_lsb					8u
	/* Auto-reload shadow enable */
#define TIMER1_CTL0_ARSE					7u
	/* Counter aligns mode selection */
#define TIMER1_CTL0_CAM_msb					6u
#define TIMER1_CTL0_CAM_lsb					5u
	/* Direction */
#define TIMER1_CTL0_DIR						4u
	/* Single pulse mode */
#define TIMER1_CTL0_SPM						3u
	/* Update source */
#define TIMER1_CTL0_UPS						2u
	/* Update disable */
#define TIMER1_CTL0_UPDIS					1u
	/* Counter enable */
#define TIMER1_CTL0_CEN						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: control register 1 */
	uint32_t volatile CTL1;
	/* Channel 0 trigger input selection */
#define TIMER1_CTL1_TI0S					7u
	/* Master mode control */
#define TIMER1_CTL1_MMC_msb					6u
#define TIMER1_CTL1_MMC_lsb					4u
	/* DMA request source selection */
#define TIMER1_CTL1_DMAS					3u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: slave mode control register */
	uint32_t volatile SMCFG;
	/* External trigger polarity */
#define TIMER1_SMCFG_ETP					15u
	/* Part of SMC for enable External clock mode1 */
#define TIMER1_SMCFG_SMC1					14u
	/* External trigger prescaler */
#define TIMER1_SMCFG_ETPSC_msb					13u
#define TIMER1_SMCFG_ETPSC_lsb					12u
	/* External trigger filter control */
#define TIMER1_SMCFG_ETFC_msb					11u
#define TIMER1_SMCFG_ETFC_lsb					8u
	/* Master-slave mode */
#define TIMER1_SMCFG_MSM					7u
	/* Trigger selection */
#define TIMER1_SMCFG_TRGS_msb					6u
#define TIMER1_SMCFG_TRGS_lsb					4u
	/* Slave mode control */
#define TIMER1_SMCFG_SMC_msb					2u
#define TIMER1_SMCFG_SMC_lsb					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DMAINTEN;
	/* Trigger DMA request enable */
#define TIMER1_DMAINTEN_TRGDEN					14u
	/* Channel 3 capture/compare DMA request enable */
#define TIMER1_DMAINTEN_CH3DEN					12u
	/* Channel 2 capture/compare DMA request enable */
#define TIMER1_DMAINTEN_CH2DEN					11u
	/* Channel 1 capture/compare DMA request enable */
#define TIMER1_DMAINTEN_CH1DEN					10u
	/* Channel 0 capture/compare DMA request enable */
#define TIMER1_DMAINTEN_CH0DEN					9u
	/* Update DMA request enable */
#define TIMER1_DMAINTEN_UPDEN					8u
	/* Trigger interrupt enable */
#define TIMER1_DMAINTEN_TRGIE					6u
	/* Channel 3 capture/compare interrupt enable */
#define TIMER1_DMAINTEN_CH3IE					4u
	/* Channel 2 capture/compare interrupt enable */
#define TIMER1_DMAINTEN_CH2IE					3u
	/* Channel 1 capture/compare interrupt enable */
#define TIMER1_DMAINTEN_CH1IE					2u
	/* Channel 0 capture/compare interrupt enable */
#define TIMER1_DMAINTEN_CH0IE					1u
	/* Update interrupt enable */
#define TIMER1_DMAINTEN_UPIE					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: interrupt flag register */
	uint32_t volatile INTF;
	/* Channel 3 over capture flag */
#define TIMER1_INTF_CH3OF					12u
	/* Channel 2 over capture flag */
#define TIMER1_INTF_CH2OF					11u
	/* Channel 1 over capture flag */
#define TIMER1_INTF_CH1OF					10u
	/* Channel 0 over capture flag */
#define TIMER1_INTF_CH0OF					9u
	/* Trigger interrupt flag */
#define TIMER1_INTF_TRGIF					6u
	/* Channel 3  capture/compare interrupt enable */
#define TIMER1_INTF_CH3IF					4u
	/* Channel 2  capture/compare interrupt enable */
#define TIMER1_INTF_CH2IF					3u
	/* Channel 1  capture/compare interrupt flag */
#define TIMER1_INTF_CH1IF					2u
	/* Channel 0  capture/compare interrupt flag */
#define TIMER1_INTF_CH0IF					1u
	/* Update interrupt flag */
#define TIMER1_INTF_UPIF					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: event generation register */
	uint32_t volatile SWEVG;
	/* Trigger event generation */
#define TIMER1_SWEVG_TRGG					6u
	/* Channel 3 capture or compare event generation */
#define TIMER1_SWEVG_CH3G					4u
	/* Channel 2 capture or compare event generation */
#define TIMER1_SWEVG_CH2G					3u
	/* Channel 1 capture or compare event generation */
#define TIMER1_SWEVG_CH1G					2u
	/* Channel 0 capture or compare event generation */
#define TIMER1_SWEVG_CH0G					1u
	/* Update generation */
#define TIMER1_SWEVG_UPG					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Channel control register 0 (output */
	uint32_t volatile CHCTL0_OUTPUT;
	/* Channel 1 output compare clear enable */
#define TIMER1_CHCTL0_OUTPUT_CH1COMCEN				15u
	/* Channel 1 compare output control */
#define TIMER1_CHCTL0_OUTPUT_CH1COMCTL_msb			14u
#define TIMER1_CHCTL0_OUTPUT_CH1COMCTL_lsb			12u
	/* Channel 1 output compare shadow enable */
#define TIMER1_CHCTL0_OUTPUT_CH1COMSEN				11u
	/* Channel 1 output compare fast enable */
#define TIMER1_CHCTL0_OUTPUT_CH1COMFEN				10u
	/* Channel 1 mode selection */
#define TIMER1_CHCTL0_OUTPUT_CH1MS_msb				9u
#define TIMER1_CHCTL0_OUTPUT_CH1MS_lsb				8u
	/* Channel 0 output compare clear enable */
#define TIMER1_CHCTL0_OUTPUT_CH0COMCEN				7u
	/*  */
#define TIMER1_CHCTL0_OUTPUT_CH0COMCTL_msb			6u
#define TIMER1_CHCTL0_OUTPUT_CH0COMCTL_lsb			4u
	/* Channel 0 compare output shadow enable */
#define TIMER1_CHCTL0_OUTPUT_CH0COMSEN				3u
	/* Channel 0 output compare fast enable */
#define TIMER1_CHCTL0_OUTPUT_CH0COMFEN				2u
	/* Channel 0 I/O mode selection */
#define TIMER1_CHCTL0_OUTPUT_CH0MS_msb				1u
#define TIMER1_CHCTL0_OUTPUT_CH0MS_lsb				0u

	/* 0x18: Channel control register 0 (input */
	uint32_t volatile CHCTL0_INPUT;
	/* Channel 1 input capture filter control */
#define TIMER1_CHCTL0_INPUT_CH1CAPFLT_msb			15u
#define TIMER1_CHCTL0_INPUT_CH1CAPFLT_lsb			12u
	/* Channel 1 input capture prescaler */
#define TIMER1_CHCTL0_INPUT_CH1CAPPSC_msb			11u
#define TIMER1_CHCTL0_INPUT_CH1CAPPSC_lsb			10u
	/* Channel 1 mode selection */
#define TIMER1_CHCTL0_INPUT_CH1MS_msb				9u
#define TIMER1_CHCTL0_INPUT_CH1MS_lsb				8u
	/* Channel 0 input capture filter control */
#define TIMER1_CHCTL0_INPUT_CH0CAPFLT_msb			7u
#define TIMER1_CHCTL0_INPUT_CH0CAPFLT_lsb			4u
	/* Channel 0 input capture prescaler */
#define TIMER1_CHCTL0_INPUT_CH0CAPPSC_msb			3u
#define TIMER1_CHCTL0_INPUT_CH0CAPPSC_lsb			2u
	/* Channel 0 mode selection */
#define TIMER1_CHCTL0_INPUT_CH0MS_msb				1u
#define TIMER1_CHCTL0_INPUT_CH0MS_lsb				0u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: Channel control register 1 (output mode) */
	uint32_t volatile CHCTL1_OUTPUT;
	/* Channel 3 output compare clear enable */
#define TIMER1_CHCTL1_OUTPUT_CH3COMCEN				15u
	/* Channel 3 compare output control */
#define TIMER1_CHCTL1_OUTPUT_CH3COMCTL_msb			14u
#define TIMER1_CHCTL1_OUTPUT_CH3COMCTL_lsb			12u
	/* Channel 3 output compare shadow enable */
#define TIMER1_CHCTL1_OUTPUT_CH3COMSEN				11u
	/* Channel 3 output compare fast enable */
#define TIMER1_CHCTL1_OUTPUT_CH3COMFEN				10u
	/* Channel 3 mode selection */
#define TIMER1_CHCTL1_OUTPUT_CH3MS_msb				9u
#define TIMER1_CHCTL1_OUTPUT_CH3MS_lsb				8u
	/* Channel 2 output compare clear enable */
#define TIMER1_CHCTL1_OUTPUT_CH2COMCEN				7u
	/* Channel 2 compare output control */
#define TIMER1_CHCTL1_OUTPUT_CH2COMCTL_msb			6u
#define TIMER1_CHCTL1_OUTPUT_CH2COMCTL_lsb			4u
	/* Channel 2 compare output shadow enable */
#define TIMER1_CHCTL1_OUTPUT_CH2COMSEN				3u
	/* Channel 2 output compare fast enable */
#define TIMER1_CHCTL1_OUTPUT_CH2COMFEN				2u
	/* Channel 2 I/O mode selection */
#define TIMER1_CHCTL1_OUTPUT_CH2MS_msb				1u
#define TIMER1_CHCTL1_OUTPUT_CH2MS_lsb				0u

	/* 0x1C: Channel control register 1 (input */
	uint32_t volatile CHCTL1_INPUT;
	/* Channel 3 input capture filter control */
#define TIMER1_CHCTL1_INPUT_CH3CAPFLT_msb			15u
#define TIMER1_CHCTL1_INPUT_CH3CAPFLT_lsb			12u
	/* Channel 3 input capture prescaler */
#define TIMER1_CHCTL1_INPUT_CH3CAPPSC_msb			11u
#define TIMER1_CHCTL1_INPUT_CH3CAPPSC_lsb			10u
	/* Channel 3 mode selection */
#define TIMER1_CHCTL1_INPUT_CH3MS_msb				9u
#define TIMER1_CHCTL1_INPUT_CH3MS_lsb				8u
	/* Channel 2 input capture filter control */
#define TIMER1_CHCTL1_INPUT_CH2CAPFLT_msb			7u
#define TIMER1_CHCTL1_INPUT_CH2CAPFLT_lsb			4u
	/* Channel 2 input capture prescaler */
#define TIMER1_CHCTL1_INPUT_CH2CAPPSC_msb			3u
#define TIMER1_CHCTL1_INPUT_CH2CAPPSC_lsb			2u
	/* Channel 2 mode selection */
#define TIMER1_CHCTL1_INPUT_CH2MS_msb				1u
#define TIMER1_CHCTL1_INPUT_CH2MS_lsb				0u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Channel control register 2 */
	uint32_t volatile CHCTL2;
	/* Channel 3 capture/compare function polarity */
#define TIMER1_CHCTL2_CH3P					13u
	/* Channel 3 capture/compare function enable */
#define TIMER1_CHCTL2_CH3EN					12u
	/* Channel 2 capture/compare function polarity */
#define TIMER1_CHCTL2_CH2P					9u
	/* Channel 2 capture/compare function enable */
#define TIMER1_CHCTL2_CH2EN					8u
	/* Channel 1 capture/compare function polarity */
#define TIMER1_CHCTL2_CH1P					5u
	/* Channel 1 capture/compare function enable */
#define TIMER1_CHCTL2_CH1EN					4u
	/* Channel 0 capture/compare function polarity */
#define TIMER1_CHCTL2_CH0P					1u
	/* Channel 0 capture/compare function enable */
#define TIMER1_CHCTL2_CH0EN					0u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: Counter register */
	uint32_t volatile CNT;
	/* counter value */
#define TIMER1_CNT_CNT_msb					15u
#define TIMER1_CNT_CNT_lsb					0u

	/* 0x24 */
	uint8_t RESERVED9[0x28u-0x24u];

	/* 0x28: Prescaler register */
	uint32_t volatile PSC;
	/* Prescaler value of the counter clock */
#define TIMER1_PSC_PSC_msb					15u
#define TIMER1_PSC_PSC_lsb					0u

	/* 0x28 */
	uint8_t RESERVED10[0x2Cu-0x28u];

	/* 0x2C: Counter auto reload register */
	uint32_t volatile CAR;
	/* Counter auto reload value */
#define TIMER1_CAR_CARL_msb					15u
#define TIMER1_CAR_CARL_lsb					0u

	/* 0x2C */
	uint8_t RESERVED11[0x34u-0x2Cu];

	/* 0x34: Channel 0 capture/compare value register */
	uint32_t volatile CH0CV;
	/* Capture or compare value of channel 0 */
#define TIMER1_CH0CV_CH0VAL_msb					15u
#define TIMER1_CH0CV_CH0VAL_lsb					0u

	/* 0x34 */
	uint8_t RESERVED12[0x38u-0x34u];

	/* 0x38: Channel 1 capture/compare value register */
	uint32_t volatile CH1CV;
	/* Capture or compare value of channel1 */
#define TIMER1_CH1CV_CH1VAL_msb					15u
#define TIMER1_CH1CV_CH1VAL_lsb					0u

	/* 0x38 */
	uint8_t RESERVED13[0x3Cu-0x38u];

	/* 0x3C: Channel 2 capture/compare value register */
	uint32_t volatile CH2CV;
	/* Capture or compare value of channel 2 */
#define TIMER1_CH2CV_CH2VAL_msb					15u
#define TIMER1_CH2CV_CH2VAL_lsb					0u

	/* 0x3C */
	uint8_t RESERVED14[0x40u-0x3Cu];

	/* 0x40: Channel 3 capture/compare value register */
	uint32_t volatile CH3CV;
	/* Capture or compare value of channel 3 */
#define TIMER1_CH3CV_CH3VAL_msb					15u
#define TIMER1_CH3CV_CH3VAL_lsb					0u

	/* 0x40 */
	uint8_t RESERVED15[0x48u-0x40u];

	/* 0x48: DMA configuration register */
	uint32_t volatile DMACFG;
	/* DMA transfer count */
#define TIMER1_DMACFG_DMATC_msb					12u
#define TIMER1_DMACFG_DMATC_lsb					8u
	/* DMA transfer access start address */
#define TIMER1_DMACFG_DMATA_msb					4u
#define TIMER1_DMACFG_DMATA_lsb					0u

	/* 0x48 */
	uint8_t RESERVED16[0x4Cu-0x48u];

	/* 0x4C: DMA transfer buffer register */
	uint32_t volatile DMATB;
	/* DMA transfer buffer */
#define TIMER1_DMATB_DMATB_msb					15u
#define TIMER1_DMATB_DMATB_lsb					0u

};


#define TIMER5 ((struct sdk_timer5 *)0x40001000)
#define TIMER6 ((struct sdk_timer6 *)0x40001400)

struct sdk_timer5 {

	/* 0x00: control register 0 */
	uint32_t volatile CTL0;
	/* Auto-reload shadow enable */
#define TIMER5_CTL0_ARSE					7u
	/* Single pulse mode */
#define TIMER5_CTL0_SPM						3u
	/* Update source */
#define TIMER5_CTL0_UPS						2u
	/* Update disable */
#define TIMER5_CTL0_UPDIS					1u
	/* Counter enable */
#define TIMER5_CTL0_CEN						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: control register 1 */
	uint32_t volatile CTL1;
	/* Master mode control */
#define TIMER5_CTL1_MMC_msb					6u
#define TIMER5_CTL1_MMC_lsb					4u

	/* 0x04 */
	uint8_t RESERVED1[0x0Cu-0x04u];

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DMAINTEN;
	/* Update DMA request enable */
#define TIMER5_DMAINTEN_UPDEN					8u
	/* Update interrupt enable */
#define TIMER5_DMAINTEN_UPIE					0u

	/* 0x0C */
	uint8_t RESERVED2[0x10u-0x0Cu];

	/* 0x10: Interrupt flag register */
	uint32_t volatile INTF;
	/* Update interrupt flag */
#define TIMER5_INTF_UPIF					0u

	/* 0x10 */
	uint8_t RESERVED3[0x14u-0x10u];

	/* 0x14: event generation register */
	uint32_t volatile SWEVG;
	/* Update generation */
#define TIMER5_SWEVG_UPG					0u

	/* 0x14 */
	uint8_t RESERVED4[0x24u-0x14u];

	/* 0x24: Counter register */
	uint32_t volatile CNT;
	/* Low counter value */
#define TIMER5_CNT_CNT_msb					15u
#define TIMER5_CNT_CNT_lsb					0u

	/* 0x24 */
	uint8_t RESERVED5[0x28u-0x24u];

	/* 0x28: Prescaler register */
	uint32_t volatile PSC;
	/* Prescaler value of the counter clock */
#define TIMER5_PSC_PSC_msb					15u
#define TIMER5_PSC_PSC_lsb					0u

	/* 0x28 */
	uint8_t RESERVED6[0x2Cu-0x28u];

	/* 0x2C: Counter auto reload register */
	uint32_t volatile CAR;
	/* Counter auto reload value */
#define TIMER5_CAR_CARL_msb					15u
#define TIMER5_CAR_CARL_lsb					0u

};



#define USART0 ((struct sdk_usart0 *)0x40013800)
#define USART1 ((struct sdk_usart1 *)0x40004400)
#define USART2 ((struct sdk_usart2 *)0x40004800)

struct sdk_usart {

	/* 0x00: Status register */
	uint32_t volatile STAT;
	/* CTS change flag */
#define USART_STAT_CTSF					9u
	/* LIN break detection flag */
#define USART_STAT_LBDF					8u
	/* Transmit data buffer empty */
#define USART_STAT_TBE						7u
	/* Transmission complete */
#define USART_STAT_TC						6u
	/* Read data buffer not empty */
#define USART_STAT_RBNE					5u
	/* IDLE frame detected flag */
#define USART_STAT_IDLEF					4u
	/* Overrun error */
#define USART_STAT_ORERR					3u
	/* Noise error flag */
#define USART_STAT_NERR					2u
	/* Frame error flag */
#define USART_STAT_FERR					1u
	/* Parity error flag */
#define USART_STAT_PERR					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Data register */
	uint32_t volatile DATA;
	/* Transmit or read data value */
#define USART_DATA_DATA_msb					8u
#define USART_DATA_DATA_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Baud rate register */
	uint32_t volatile BAUD;
	/* Integer part of baud-rate divider */
#define USART_BAUD_INTDIV_msb					15u
#define USART_BAUD_INTDIV_lsb					4u
	/* Fraction part of baud-rate divider */
#define USART_BAUD_FRADIV_msb					3u
#define USART_BAUD_FRADIV_lsb					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Control register 0 */
	uint32_t volatile CTL0;
	/* USART enable */
#define USART_CTL0_UEN						13u
	/* Word length */
#define USART_CTL0_WL						12u
	/* Wakeup method in mute mode */
#define USART_CTL0_WM						11u
	/* Parity check function enable */
#define USART_CTL0_PCEN					10u
	/* Parity mode */
#define USART_CTL0_PM						9u
	/* Parity error interrupt enable */
#define USART_CTL0_PERRIE					8u
	/* Transmitter buffer empty interrupt enable */
#define USART_CTL0_TBEIE					7u
	/* Transmission complete interrupt enable */
#define USART_CTL0_TCIE					6u
	/* Read data buffer not empty interrupt and overrun error interrupt enable */
#define USART_CTL0_RBNEIE					5u
	/* IDLE line detected interrupt enable */
#define USART_CTL0_IDLEIE					4u
	/* Transmitter enable */
#define USART_CTL0_TEN						3u
	/* Receiver enable */
#define USART_CTL0_REN						2u
	/* Receiver wakeup from mute mode */
#define USART_CTL0_RWU						1u
	/* Send break command */
#define USART_CTL0_SBKCMD					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Control register 1 */
	uint32_t volatile CTL1;
	/* LIN mode enable */
#define USART_CTL1_LMEN					14u
	/* STOP bits length */
#define USART_CTL1_STB_msb					13u
#define USART_CTL1_STB_lsb					12u
	/* CK pin enable */
#define USART_CTL1_CKEN					11u
	/* Clock polarity */
#define USART_CTL1_CPL						10u
	/* Clock phase */
#define USART_CTL1_CPH						9u
	/* CK Length */
#define USART_CTL1_CLEN					8u
	/* LIN break detection interrupt */
#define USART_CTL1_LBDIE					6u
	/* LIN break frame length */
#define USART_CTL1_LBLEN					5u
	/* Address of the USART */
#define USART_CTL1_ADDR_msb					3u
#define USART_CTL1_ADDR_lsb					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Control register 2 */
	uint32_t volatile CTL2;
	/* CTS interrupt enable */
#define USART_CTL2_CTSIE					10u
	/* CTS enable */
#define USART_CTL2_CTSEN					9u
	/* RTS enable */
#define USART_CTL2_RTSEN					8u
	/* DMA request enable for transmission */
#define USART_CTL2_DENT					7u
	/* DMA request enable for reception */
#define USART_CTL2_DENR					6u
	/* Smartcard mode enable */
#define USART_CTL2_SCEN					5u
	/* Smartcard NACK enable */
#define USART_CTL2_NKEN					4u
	/* Half-duplex selection */
#define USART_CTL2_HDEN					3u
	/* IrDA low-power */
#define USART_CTL2_IRLP					2u
	/* IrDA mode enable */
#define USART_CTL2_IREN					1u
	/* Error interrupt enable */
#define USART_CTL2_ERRIE					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Guard time and prescaler */
	uint32_t volatile GP;
	/* Guard time value in Smartcard mode */
#define USART_GP_GUAT_msb					15u
#define USART_GP_GUAT_lsb					8u
	/* Prescaler value */
#define USART_GP_PSC_msb					7u
#define USART_GP_PSC_lsb					0u

};


#define UART3 ((struct sdk_uart *)0x40004C00)
#define UART4 ((struct sdk_uart *)0x40005000)

struct sdk_uart {

	/* 0x00: Status register */
	uint32_t volatile STAT;
	/* LIN break detection flag */
#define UART_STAT_LBDF						8u
	/* Transmit data buffer empty */
#define UART_STAT_TBE						7u
	/* Transmission complete */
#define UART_STAT_TC						6u
	/* Read data buffer not empty */
#define UART_STAT_RBNE						5u
	/* IDLE frame detected flag */
#define UART_STAT_IDLEF					4u
	/* Overrun error */
#define UART_STAT_ORERR					3u
	/* Noise error flag */
#define UART_STAT_NERR						2u
	/* Frame error flag */
#define UART_STAT_FERR						1u
	/* Parity error flag */
#define UART_STAT_PERR						0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Data register */
	uint32_t volatile DATA;
	/* Transmit or read data value */
#define UART_DATA_DATA_msb					8u
#define UART_DATA_DATA_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Baud rate register */
	uint32_t volatile BAUD;
	/* Integer part of baud-rate divider */
#define UART_BAUD_INTDIV_msb					15u
#define UART_BAUD_INTDIV_lsb					4u
	/* Fraction part of baud-rate divider */
#define UART_BAUD_FRADIV_msb					3u
#define UART_BAUD_FRADIV_lsb					0u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Control register 0 */
	uint32_t volatile CTL0;
	/* USART enable */
#define UART_CTL0_UEN						13u
	/* Word length */
#define UART_CTL0_WL						12u
	/* Wakeup method in mute mode */
#define UART_CTL0_WM						11u
	/* Parity check function enable */
#define UART_CTL0_PCEN						10u
	/* Parity mode */
#define UART_CTL0_PM						9u
	/* Parity error interrupt enable */
#define UART_CTL0_PERRIE					8u
	/* Transmitter buffer empty interrupt enable */
#define UART_CTL0_TBEIE					7u
	/* Transmission complete interrupt enable */
#define UART_CTL0_TCIE						6u
	/* Read data buffer not empty interrupt and overrun error interrupt enable */
#define UART_CTL0_RBNEIE					5u
	/* IDLE line detected interrupt enable */
#define UART_CTL0_IDLEIE					4u
	/* Transmitter enable */
#define UART_CTL0_TEN						3u
	/* Receiver enable */
#define UART_CTL0_REN						2u
	/* Receiver wakeup from mute mode */
#define UART_CTL0_RWU						1u
	/* Send break command */
#define UART_CTL0_SBKCMD					0u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Control register 1 */
	uint32_t volatile CTL1;
	/* LIN mode enable */
#define UART_CTL1_LMEN						14u
	/* STOP bits length */
#define UART_CTL1_STB_msb					13u
#define UART_CTL1_STB_lsb					12u
	/* LIN break detection interrupt */
#define UART_CTL1_LBDIE					6u
	/* LIN break frame length */
#define UART_CTL1_LBLEN					5u
	/* Address of the USART */
#define UART_CTL1_ADDR_msb					3u
#define UART_CTL1_ADDR_lsb					0u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Control register 2 */
	uint32_t volatile CTL2;
	/* DMA request enable for transmission */
#define UART_CTL2_DENT						7u
	/* DMA request enable for reception */
#define UART_CTL2_DENR						6u
	/* Half-duplex selection */
#define UART_CTL2_HDEN						3u
	/* IrDA low-power */
#define UART_CTL2_IRLP						2u
	/* IrDA mode enable */
#define UART_CTL2_IREN						1u
	/* Error interrupt enable */
#define UART_CTL2_ERRIE					0u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Guard time and prescaler */
	uint32_t volatile GP;
	/* Prescaler value */
#define UART_GP_PSC_msb					7u
#define UART_GP_PSC_lsb					0u

};


#define USBFS_GLOBAL ((struct sdk_usbfs_global *)0x50000000)

struct sdk_usbfs_global {

	/* 0x00: Global OTG control and status register */
	uint32_t volatile GOTGCS;
	/* SRP success */
#define USBFS_GLOBAL_GOTGCS_SRPS				0u
	/* SRP request */
#define USBFS_GLOBAL_GOTGCS_SRPREQ				1u
	/* Host success */
#define USBFS_GLOBAL_GOTGCS_HNPS				8u
	/* HNP request */
#define USBFS_GLOBAL_GOTGCS_HNPREQ				9u
	/* Host HNP enable */
#define USBFS_GLOBAL_GOTGCS_HHNPEN				10u
	/* Device HNP enabled */
#define USBFS_GLOBAL_GOTGCS_DHNPEN				11u
	/* ID pin status */
#define USBFS_GLOBAL_GOTGCS_IDPS				16u
	/* Debounce interval */
#define USBFS_GLOBAL_GOTGCS_DI					17u
	/* A-session valid */
#define USBFS_GLOBAL_GOTGCS_ASV					18u
	/* B-session valid */
#define USBFS_GLOBAL_GOTGCS_BSV					19u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Global OTG interrupt flag register */
	uint32_t volatile GOTGINTF;
	/* Session end */
#define USBFS_GLOBAL_GOTGINTF_SESEND				2u
	/* Session request success status */
#define USBFS_GLOBAL_GOTGINTF_SRPEND				8u
	/* HNP end */
#define USBFS_GLOBAL_GOTGINTF_HNPEND				9u
	/* Host negotiation request detected */
#define USBFS_GLOBAL_GOTGINTF_HNPDET				17u
	/* A-device timeout */
#define USBFS_GLOBAL_GOTGINTF_ADTO				18u
	/* Debounce finish */
#define USBFS_GLOBAL_GOTGINTF_DF				19u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Global AHB control and status register */
	uint32_t volatile GAHBCS;
	/* Global interrupt enable */
#define USBFS_GLOBAL_GAHBCS_GINTEN				0u
	/* Tx FIFO threshold */
#define USBFS_GLOBAL_GAHBCS_TXFTH				7u
	/* Periodic Tx FIFO threshold */
#define USBFS_GLOBAL_GAHBCS_PTXFTH				8u

	/* 0x08 */
	uint8_t RESERVED2[0x0Cu-0x08u];

	/* 0x0C: Global USB control and status register */
	uint32_t volatile GUSBCS;
	/* Timeout calibration */
#define USBFS_GLOBAL_GUSBCS_TOC_msb				2u
#define USBFS_GLOBAL_GUSBCS_TOC_lsb				0u
	/* SRP capability enable */
#define USBFS_GLOBAL_GUSBCS_SRPCEN				8u
	/* HNP capability enable */
#define USBFS_GLOBAL_GUSBCS_HNPCEN				9u
	/* USB turnaround time */
#define USBFS_GLOBAL_GUSBCS_UTT_msb				13u
#define USBFS_GLOBAL_GUSBCS_UTT_lsb				10u
	/* Force host mode */
#define USBFS_GLOBAL_GUSBCS_FHM					29u
	/* Force device mode */
#define USBFS_GLOBAL_GUSBCS_FDM					30u

	/* 0x0C */
	uint8_t RESERVED3[0x10u-0x0Cu];

	/* 0x10: Global reset control register (USBFS_GRSTCTL) */
	uint32_t volatile GRSTCTL;
	/* Core soft reset */
#define USBFS_GLOBAL_GRSTCTL_CSRST				0u
	/* HCLK soft reset */
#define USBFS_GLOBAL_GRSTCTL_HCSRST				1u
	/* Host frame counter reset */
#define USBFS_GLOBAL_GRSTCTL_HFCRST				2u
	/* RxFIFO flush */
#define USBFS_GLOBAL_GRSTCTL_RXFF				4u
	/* TxFIFO flush */
#define USBFS_GLOBAL_GRSTCTL_TXFF				5u
	/* TxFIFO number */
#define USBFS_GLOBAL_GRSTCTL_TXFNUM_msb				10u
#define USBFS_GLOBAL_GRSTCTL_TXFNUM_lsb				6u

	/* 0x10 */
	uint8_t RESERVED4[0x14u-0x10u];

	/* 0x14: Global interrupt flag register (USBFS_GINTF) */
	uint32_t volatile GINTF;
	/* Current operation mode */
#define USBFS_GLOBAL_GINTF_COPM					0u
	/* Mode fault interrupt flag */
#define USBFS_GLOBAL_GINTF_MFIF					1u
	/* OTG interrupt flag */
#define USBFS_GLOBAL_GINTF_OTGIF				2u
	/* Start of frame */
#define USBFS_GLOBAL_GINTF_SOF					3u
	/* RxFIFO non-empty interrupt flag */
#define USBFS_GLOBAL_GINTF_RXFNEIF				4u
	/* Non-periodic TxFIFO empty interrupt flag */
#define USBFS_GLOBAL_GINTF_NPTXFEIF				5u
	/* Global Non-Periodic IN NAK effective */
#define USBFS_GLOBAL_GINTF_GNPINAK				6u
	/* Global OUT NAK effective */
#define USBFS_GLOBAL_GINTF_GONAK				7u
	/* Early suspend */
#define USBFS_GLOBAL_GINTF_ESP					10u
	/* USB suspend */
#define USBFS_GLOBAL_GINTF_SP					11u
	/* USB reset */
#define USBFS_GLOBAL_GINTF_RST					12u
	/* Enumeration finished */
#define USBFS_GLOBAL_GINTF_ENUMF				13u
	/* Isochronous OUT packet dropped */
#define USBFS_GLOBAL_GINTF_ISOOPDIF				14u
	/* End of periodic frame */
#define USBFS_GLOBAL_GINTF_EOPFIF				15u
	/* IN endpoint interrupt flag */
#define USBFS_GLOBAL_GINTF_IEPIF				18u
	/* OUT endpoint interrupt flag */
#define USBFS_GLOBAL_GINTF_OEPIF				19u
	/* Isochronous IN transfer Not Complete Interrupt Flag */
#define USBFS_GLOBAL_GINTF_ISOINCIF				20u
	/* periodic transfer not complete interrupt flag(Host */
#define USBFS_GLOBAL_GINTF_PXNCIF_ISOONCIF			21u
	/* Host port interrupt flag */
#define USBFS_GLOBAL_GINTF_HPIF					24u
	/* Host channels interrupt flag */
#define USBFS_GLOBAL_GINTF_HCIF					25u
	/* Periodic TxFIFO empty interrupt flag */
#define USBFS_GLOBAL_GINTF_PTXFEIF				26u
	/* ID pin status change */
#define USBFS_GLOBAL_GINTF_IDPSC				28u
	/* Disconnect interrupt flag */
#define USBFS_GLOBAL_GINTF_DISCIF				29u
	/* Session interrupt flag */
#define USBFS_GLOBAL_GINTF_SESIF				30u
	/* Wakeup interrupt flag */
#define USBFS_GLOBAL_GINTF_WKUPIF				31u

	/* 0x14 */
	uint8_t RESERVED5[0x18u-0x14u];

	/* 0x18: Global interrupt enable register */
	uint32_t volatile GINTEN;
	/* Mode fault interrupt */
#define USBFS_GLOBAL_GINTEN_MFIE				1u
	/* OTG interrupt enable */
#define USBFS_GLOBAL_GINTEN_OTGIE				2u
	/* Start of frame interrupt enable */
#define USBFS_GLOBAL_GINTEN_SOFIE				3u
	/* Receive FIFO non-empty */
#define USBFS_GLOBAL_GINTEN_RXFNEIE				4u
	/* Non-periodic TxFIFO empty */
#define USBFS_GLOBAL_GINTEN_NPTXFEIE				5u
	/* Global non-periodic IN NAK effective interrupt enable */
#define USBFS_GLOBAL_GINTEN_GNPINAKIE				6u
	/* Global OUT NAK effective */
#define USBFS_GLOBAL_GINTEN_GONAKIE				7u
	/* Early suspend interrupt enable */
#define USBFS_GLOBAL_GINTEN_ESPIE				10u
	/* USB suspend interrupt enable */
#define USBFS_GLOBAL_GINTEN_SPIE				11u
	/* USB reset interrupt enable */
#define USBFS_GLOBAL_GINTEN_RSTIE				12u
	/* Enumeration finish interrupt enable */
#define USBFS_GLOBAL_GINTEN_ENUMFIE				13u
	/* Isochronous OUT packet dropped interrupt enable */
#define USBFS_GLOBAL_GINTEN_ISOOPDIE				14u
	/* End of periodic frame interrupt enable */
#define USBFS_GLOBAL_GINTEN_EOPFIE				15u
	/* IN endpoints interrupt enable */
#define USBFS_GLOBAL_GINTEN_IEPIE				18u
	/* OUT endpoints interrupt enable */
#define USBFS_GLOBAL_GINTEN_OEPIE				19u
	/* isochronous IN transfer not complete */
#define USBFS_GLOBAL_GINTEN_ISOINCIE				20u
	/* periodic transfer not compelete Interrupt enable(Host */
#define USBFS_GLOBAL_GINTEN_PXNCIE_ISOONCIE			21u
	/* Host port interrupt enable */
#define USBFS_GLOBAL_GINTEN_HPIE				24u
	/* Host channels interrupt enable */
#define USBFS_GLOBAL_GINTEN_HCIE				25u
	/* Periodic TxFIFO empty interrupt enable */
#define USBFS_GLOBAL_GINTEN_PTXFEIE				26u
	/* ID pin status change interrupt enable */
#define USBFS_GLOBAL_GINTEN_IDPSCIE				28u
	/* Disconnect interrupt enable */
#define USBFS_GLOBAL_GINTEN_DISCIE				29u
	/* Session interrupt enable */
#define USBFS_GLOBAL_GINTEN_SESIE				30u
	/* Wakeup interrupt enable */
#define USBFS_GLOBAL_GINTEN_WKUPIE				31u

	/* 0x18 */
	uint8_t RESERVED6[0x1Cu-0x18u];

	/* 0x1C: Global Receive status read(Device */
	uint32_t volatile GRSTATR_DEVICE;
	/* Endpoint number */
#define USBFS_GLOBAL_GRSTATR_DEVICE_EPNUM_msb			3u
#define USBFS_GLOBAL_GRSTATR_DEVICE_EPNUM_lsb			0u
	/* Byte count */
#define USBFS_GLOBAL_GRSTATR_DEVICE_BCOUNT_msb			14u
#define USBFS_GLOBAL_GRSTATR_DEVICE_BCOUNT_lsb			4u
	/* Data PID */
#define USBFS_GLOBAL_GRSTATR_DEVICE_DPID_msb			16u
#define USBFS_GLOBAL_GRSTATR_DEVICE_DPID_lsb			15u
	/* Recieve packet status */
#define USBFS_GLOBAL_GRSTATR_DEVICE_RPCKST_msb			20u
#define USBFS_GLOBAL_GRSTATR_DEVICE_RPCKST_lsb			17u

	/* 0x1C: Global Receive status read(Host */
	uint32_t volatile GRSTATR_HOST;
	/* Channel number */
#define USBFS_GLOBAL_GRSTATR_HOST_CNUM_msb			3u
#define USBFS_GLOBAL_GRSTATR_HOST_CNUM_lsb			0u
	/* Byte count */
#define USBFS_GLOBAL_GRSTATR_HOST_BCOUNT_msb			14u
#define USBFS_GLOBAL_GRSTATR_HOST_BCOUNT_lsb			4u
	/* Data PID */
#define USBFS_GLOBAL_GRSTATR_HOST_DPID_msb			16u
#define USBFS_GLOBAL_GRSTATR_HOST_DPID_lsb			15u
	/* Reivece packet status */
#define USBFS_GLOBAL_GRSTATR_HOST_RPCKST_msb			20u
#define USBFS_GLOBAL_GRSTATR_HOST_RPCKST_lsb			17u

	/* 0x1C */
	uint8_t RESERVED7[0x20u-0x1Cu];

	/* 0x20: Global Receive status pop(Device */
	uint32_t volatile GRSTATP_DEVICE;
	/* Endpoint number */
#define USBFS_GLOBAL_GRSTATP_DEVICE_EPNUM_msb			3u
#define USBFS_GLOBAL_GRSTATP_DEVICE_EPNUM_lsb			0u
	/* Byte count */
#define USBFS_GLOBAL_GRSTATP_DEVICE_BCOUNT_msb			14u
#define USBFS_GLOBAL_GRSTATP_DEVICE_BCOUNT_lsb			4u
	/* Data PID */
#define USBFS_GLOBAL_GRSTATP_DEVICE_DPID_msb			16u
#define USBFS_GLOBAL_GRSTATP_DEVICE_DPID_lsb			15u
	/* Recieve packet status */
#define USBFS_GLOBAL_GRSTATP_DEVICE_RPCKST_msb			20u
#define USBFS_GLOBAL_GRSTATP_DEVICE_RPCKST_lsb			17u

	/* 0x20: Global Receive status pop(Host */
	uint32_t volatile GRSTATP_HOST;
	/* Channel number */
#define USBFS_GLOBAL_GRSTATP_HOST_CNUM_msb			3u
#define USBFS_GLOBAL_GRSTATP_HOST_CNUM_lsb			0u
	/* Byte count */
#define USBFS_GLOBAL_GRSTATP_HOST_BCOUNT_msb			14u
#define USBFS_GLOBAL_GRSTATP_HOST_BCOUNT_lsb			4u
	/* Data PID */
#define USBFS_GLOBAL_GRSTATP_HOST_DPID_msb			16u
#define USBFS_GLOBAL_GRSTATP_HOST_DPID_lsb			15u
	/* Reivece packet status */
#define USBFS_GLOBAL_GRSTATP_HOST_RPCKST_msb			20u
#define USBFS_GLOBAL_GRSTATP_HOST_RPCKST_lsb			17u

	/* 0x20 */
	uint8_t RESERVED8[0x24u-0x20u];

	/* 0x24: Global Receive FIFO size register */
	uint32_t volatile GRFLEN;
	/* Rx FIFO depth */
#define USBFS_GLOBAL_GRFLEN_RXFD_msb				15u
#define USBFS_GLOBAL_GRFLEN_RXFD_lsb				0u

	/* 0x24 */
	uint8_t RESERVED9[0x28u-0x24u];

	/* 0x28: Host non-periodic transmit FIFO length register */
	uint32_t volatile HNPTFLEN;
	/* host non-periodic transmit Tx RAM start */
#define USBFS_GLOBAL_HNPTFLEN_HNPTXRSAR_msb			15u
#define USBFS_GLOBAL_HNPTFLEN_HNPTXRSAR_lsb			0u
	/* host non-periodic TxFIFO depth */
#define USBFS_GLOBAL_HNPTFLEN_HNPTXFD_msb			31u
#define USBFS_GLOBAL_HNPTFLEN_HNPTXFD_lsb			16u

	/* 0x28: Device IN endpoint 0 transmit FIFO length */
	uint32_t volatile DIEP0TFLEN;
	/* in endpoint 0 Tx FIFO depth */
#define USBFS_GLOBAL_DIEP0TFLEN_IEP0TXFD_msb			31u
#define USBFS_GLOBAL_DIEP0TFLEN_IEP0TXFD_lsb			16u
	/* in endpoint 0 Tx RAM start address */
#define USBFS_GLOBAL_DIEP0TFLEN_IEP0TXRSAR_msb			15u
#define USBFS_GLOBAL_DIEP0TFLEN_IEP0TXRSAR_lsb			0u

	/* 0x28 */
	uint8_t RESERVED10[0x2Cu-0x28u];

	/* 0x2C: Host non-periodic transmit FIFO/queue */
	uint32_t volatile HNPTFQSTAT;
	/* Non-periodic TxFIFO space */
#define USBFS_GLOBAL_HNPTFQSTAT_NPTXFS_msb			15u
#define USBFS_GLOBAL_HNPTFQSTAT_NPTXFS_lsb			0u
	/* Non-periodic transmit request queue */
#define USBFS_GLOBAL_HNPTFQSTAT_NPTXRQS_msb			23u
#define USBFS_GLOBAL_HNPTFQSTAT_NPTXRQS_lsb			16u
	/* Top of the non-periodic transmit request */
#define USBFS_GLOBAL_HNPTFQSTAT_NPTXRQTOP_msb			30u
#define USBFS_GLOBAL_HNPTFQSTAT_NPTXRQTOP_lsb			24u

	/* 0x2C */
	uint8_t RESERVED11[0x38u-0x2Cu];

	/* 0x38: Global core configuration register (USBFS_GCCFG) */
	uint32_t volatile GCCFG;
	/* Power on */
#define USBFS_GLOBAL_GCCFG_PWRON				16u
	/* The VBUS A-device Comparer enable */
#define USBFS_GLOBAL_GCCFG_VBUSACEN				18u
	/* The VBUS B-device Comparer enable */
#define USBFS_GLOBAL_GCCFG_VBUSBCEN				19u
	/* SOF output enable */
#define USBFS_GLOBAL_GCCFG_SOFOEN				20u
	/* VBUS ignored */
#define USBFS_GLOBAL_GCCFG_VBUSIG				21u

	/* 0x38 */
	uint8_t RESERVED12[0x3Cu-0x38u];

	/* 0x3C: core ID register */
	uint32_t volatile CID;
	/* Core ID */
#define USBFS_GLOBAL_CID_CID_msb				31u
#define USBFS_GLOBAL_CID_CID_lsb				0u

	/* 0x3C */
	uint8_t RESERVED13[0x100u-0x3Cu];

	/* 0x100: Host periodic transmit FIFO length register (HPTFLEN) */
	uint32_t volatile HPTFLEN;
	/* Host periodic TxFIFO start */
#define USBFS_GLOBAL_HPTFLEN_HPTXFSAR_msb			15u
#define USBFS_GLOBAL_HPTFLEN_HPTXFSAR_lsb			0u
	/* Host periodic TxFIFO depth */
#define USBFS_GLOBAL_HPTFLEN_HPTXFD_msb				31u
#define USBFS_GLOBAL_HPTFLEN_HPTXFD_lsb				16u

	/* 0x100 */
	uint8_t RESERVED14[0x104u-0x100u];

	/* 0x104: device IN endpoint transmit FIFO size */
	uint32_t volatile DIEP1TFLEN;
	/* IN endpoint FIFO transmit RAM start */
#define USBFS_GLOBAL_DIEP1TFLEN_IEPTXRSAR_msb			15u
#define USBFS_GLOBAL_DIEP1TFLEN_IEPTXRSAR_lsb			0u
	/* IN endpoint TxFIFO depth */
#define USBFS_GLOBAL_DIEP1TFLEN_IEPTXFD_msb			31u
#define USBFS_GLOBAL_DIEP1TFLEN_IEPTXFD_lsb			16u

	/* 0x104 */
	uint8_t RESERVED15[0x108u-0x104u];

	/* 0x108: device IN endpoint transmit FIFO size */
	uint32_t volatile DIEP2TFLEN;
	/* IN endpoint FIFO transmit RAM start */
#define USBFS_GLOBAL_DIEP2TFLEN_IEPTXRSAR_msb			15u
#define USBFS_GLOBAL_DIEP2TFLEN_IEPTXRSAR_lsb			0u
	/* IN endpoint TxFIFO depth */
#define USBFS_GLOBAL_DIEP2TFLEN_IEPTXFD_msb			31u
#define USBFS_GLOBAL_DIEP2TFLEN_IEPTXFD_lsb			16u

	/* 0x108 */
	uint8_t RESERVED16[0x10Cu-0x108u];

	/* 0x10C: device IN endpoint transmit FIFO size */
	uint32_t volatile DIEP3TFLEN;
	/* IN endpoint FIFO4 transmit RAM start */
#define USBFS_GLOBAL_DIEP3TFLEN_IEPTXRSAR_msb			15u
#define USBFS_GLOBAL_DIEP3TFLEN_IEPTXRSAR_lsb			0u
	/* IN endpoint TxFIFO depth */
#define USBFS_GLOBAL_DIEP3TFLEN_IEPTXFD_msb			31u
#define USBFS_GLOBAL_DIEP3TFLEN_IEPTXFD_lsb			16u

};


#define USBFS_HOST ((struct sdk_usbfs_host *)0x50000400)

struct sdk_usbfs_host {

	/* 0x00: host configuration register */
	uint32_t volatile HCTL;
	/* clock select for USB clock */
#define USBFS_HOST_HCTL_CLKSEL_msb				1u
#define USBFS_HOST_HCTL_CLKSEL_lsb				0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Host frame interval */
	uint32_t volatile HFT;
	/* Frame interval */
#define USBFS_HOST_HFT_FRI_msb					15u
#define USBFS_HOST_HFT_FRI_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: FS host frame number/frame time */
	uint32_t volatile HFINFR;
	/* Frame number */
#define USBFS_HOST_HFINFR_FRNUM_msb				15u
#define USBFS_HOST_HFINFR_FRNUM_lsb				0u
	/* Frame remaining time */
#define USBFS_HOST_HFINFR_FRT_msb				31u
#define USBFS_HOST_HFINFR_FRT_lsb				16u

	/* 0x08 */
	uint8_t RESERVED2[0x10u-0x08u];

	/* 0x10: Host periodic transmit FIFO/queue */
	uint32_t volatile HPTFQSTAT;
	/* Periodic transmit data FIFO space */
#define USBFS_HOST_HPTFQSTAT_PTXFS_msb				15u
#define USBFS_HOST_HPTFQSTAT_PTXFS_lsb				0u
	/* Periodic transmit request queue space */
#define USBFS_HOST_HPTFQSTAT_PTXREQS_msb			23u
#define USBFS_HOST_HPTFQSTAT_PTXREQS_lsb			16u
	/* Top of the periodic transmit request */
#define USBFS_HOST_HPTFQSTAT_PTXREQT_msb			31u
#define USBFS_HOST_HPTFQSTAT_PTXREQT_lsb			24u

	/* 0x10 */
	uint8_t RESERVED3[0x14u-0x10u];

	/* 0x14:  */
	uint32_t volatile HACHINT;
	/* Host all channel interrupts */
#define USBFS_HOST_HACHINT_HACHINT_msb				7u
#define USBFS_HOST_HACHINT_HACHINT_lsb				0u

	/* 0x14 */
	uint8_t RESERVED4[0x18u-0x14u];

	/* 0x18: host all channels interrupt mask */
	uint32_t volatile HACHINTEN;
	/* Channel interrupt enable */
#define USBFS_HOST_HACHINTEN_CINTEN_msb				7u
#define USBFS_HOST_HACHINTEN_CINTEN_lsb				0u

	/* 0x18 */
	uint8_t RESERVED5[0x40u-0x18u];

	/* 0x40: Host port control and status register (USBFS_HPCS) */
	uint32_t volatile HPCS;
	/* Port connect status */
#define USBFS_HOST_HPCS_PCST					0u
	/* Port connect detected */
#define USBFS_HOST_HPCS_PCD					1u
	/* Port enable */
#define USBFS_HOST_HPCS_PE					2u
	/* Port enable/disable change */
#define USBFS_HOST_HPCS_PEDC					3u
	/* Port resume */
#define USBFS_HOST_HPCS_PREM					6u
	/* Port suspend */
#define USBFS_HOST_HPCS_PSP					7u
	/* Port reset */
#define USBFS_HOST_HPCS_PRST					8u
	/* Port line status */
#define USBFS_HOST_HPCS_PLST_msb				11u
#define USBFS_HOST_HPCS_PLST_lsb				10u
	/* Port power */
#define USBFS_HOST_HPCS_PP					12u
	/* Port speed */
#define USBFS_HOST_HPCS_PS_msb					18u
#define USBFS_HOST_HPCS_PS_lsb					17u

	/* 0x40 */
	uint8_t RESERVED6[0x100u-0x40u];

	/* 0x100: host channel-0 characteristics */
	uint32_t volatile HCH0CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH0CTL_MPL_msb				10u
#define USBFS_HOST_HCH0CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH0CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH0CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH0CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH0CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH0CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH0CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH0CTL_DAR_msb				28u
#define USBFS_HOST_HCH0CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH0CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH0CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH0CTL_CEN					31u

	/* 0x100 */
	uint8_t RESERVED7[0x120u-0x100u];

	/* 0x120:  */
	uint32_t volatile HCH1CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH1CTL_MPL_msb				10u
#define USBFS_HOST_HCH1CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH1CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH1CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH1CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH1CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH1CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH1CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH1CTL_DAR_msb				28u
#define USBFS_HOST_HCH1CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH1CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH1CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH1CTL_CEN					31u

	/* 0x120 */
	uint8_t RESERVED8[0x140u-0x120u];

	/* 0x140: host channel-2 characteristics */
	uint32_t volatile HCH2CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH2CTL_MPL_msb				10u
#define USBFS_HOST_HCH2CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH2CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH2CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH2CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH2CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH2CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH2CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH2CTL_DAR_msb				28u
#define USBFS_HOST_HCH2CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH2CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH2CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH2CTL_CEN					31u

	/* 0x140 */
	uint8_t RESERVED9[0x160u-0x140u];

	/* 0x160: host channel-3 characteristics */
	uint32_t volatile HCH3CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH3CTL_MPL_msb				10u
#define USBFS_HOST_HCH3CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH3CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH3CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH3CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH3CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH3CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH3CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH3CTL_DAR_msb				28u
#define USBFS_HOST_HCH3CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH3CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH3CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH3CTL_CEN					31u

	/* 0x160 */
	uint8_t RESERVED10[0x180u-0x160u];

	/* 0x180:  */
	uint32_t volatile HCH4CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH4CTL_MPL_msb				10u
#define USBFS_HOST_HCH4CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH4CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH4CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH4CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH4CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH4CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH4CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH4CTL_DAR_msb				28u
#define USBFS_HOST_HCH4CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH4CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH4CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH4CTL_CEN					31u

	/* 0x180 */
	uint8_t RESERVED11[0x1A0u-0x180u];

	/* 0x1A0: host channel-5 characteristics */
	uint32_t volatile HCH5CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH5CTL_MPL_msb				10u
#define USBFS_HOST_HCH5CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH5CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH5CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH5CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH5CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH5CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH5CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH5CTL_DAR_msb				28u
#define USBFS_HOST_HCH5CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH5CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH5CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH5CTL_CEN					31u

	/* 0x1A0 */
	uint8_t RESERVED12[0x1C0u-0x1A0u];

	/* 0x1C0: host channel-6 characteristics */
	uint32_t volatile HCH6CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH6CTL_MPL_msb				10u
#define USBFS_HOST_HCH6CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH6CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH6CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH6CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH6CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH6CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH6CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH6CTL_DAR_msb				28u
#define USBFS_HOST_HCH6CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH6CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH6CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH6CTL_CEN					31u

	/* 0x1C0 */
	uint8_t RESERVED13[0x1E0u-0x1C0u];

	/* 0x1E0: host channel-7 characteristics */
	uint32_t volatile HCH7CTL;
	/* Maximum packet size */
#define USBFS_HOST_HCH7CTL_MPL_msb				10u
#define USBFS_HOST_HCH7CTL_MPL_lsb				0u
	/* Endpoint number */
#define USBFS_HOST_HCH7CTL_EPNUM_msb				14u
#define USBFS_HOST_HCH7CTL_EPNUM_lsb				11u
	/* Endpoint direction */
#define USBFS_HOST_HCH7CTL_EPDIR				15u
	/* Low-speed device */
#define USBFS_HOST_HCH7CTL_LSD					17u
	/* Endpoint type */
#define USBFS_HOST_HCH7CTL_EPTYPE_msb				19u
#define USBFS_HOST_HCH7CTL_EPTYPE_lsb				18u
	/* Device address */
#define USBFS_HOST_HCH7CTL_DAR_msb				28u
#define USBFS_HOST_HCH7CTL_DAR_lsb				22u
	/* Odd frame */
#define USBFS_HOST_HCH7CTL_ODDFRM				29u
	/* Channel disable */
#define USBFS_HOST_HCH7CTL_CDIS					30u
	/* Channel enable */
#define USBFS_HOST_HCH7CTL_CEN					31u

	/* 0x108: host channel-0 interrupt register */
	uint32_t volatile HCH0INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH0INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH0INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH0INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH0INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH0INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH0INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH0INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH0INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH0INTF_DTER				10u

	/* 0x108 */
	uint8_t RESERVED14[0x128u-0x108u];

	/* 0x128: host channel-1 interrupt register */
	uint32_t volatile HCH1INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH1INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH1INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH1INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH1INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH1INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH1INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH1INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH1INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH1INTF_DTER				10u

	/* 0x128 */
	uint8_t RESERVED15[0x148u-0x128u];

	/* 0x148: host channel-2 interrupt register */
	uint32_t volatile HCH2INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH2INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH2INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH2INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH2INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH2INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH2INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH2INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH2INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH2INTF_DTER				10u

	/* 0x148 */
	uint8_t RESERVED16[0x168u-0x148u];

	/* 0x168: host channel-3 interrupt register */
	uint32_t volatile HCH3INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH3INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH3INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH3INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH3INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH3INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH3INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH3INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH3INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH3INTF_DTER				10u

	/* 0x168 */
	uint8_t RESERVED17[0x188u-0x168u];

	/* 0x188: host channel-4 interrupt register */
	uint32_t volatile HCH4INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH4INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH4INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH4INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH4INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH4INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH4INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH4INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH4INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH4INTF_DTER				10u

	/* 0x188 */
	uint8_t RESERVED18[0x1A8u-0x188u];

	/* 0x1A8: host channel-5 interrupt register */
	uint32_t volatile HCH5INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH5INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH5INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH5INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH5INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH5INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH5INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH5INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH5INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH5INTF_DTER				10u

	/* 0x1A8 */
	uint8_t RESERVED19[0x1C8u-0x1A8u];

	/* 0x1C8: host channel-6 interrupt register */
	uint32_t volatile HCH6INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH6INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH6INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH6INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH6INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH6INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH6INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH6INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH6INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH6INTF_DTER				10u

	/* 0x1C8 */
	uint8_t RESERVED20[0x1E8u-0x1C8u];

	/* 0x1E8: host channel-7 interrupt register */
	uint32_t volatile HCH7INTF;
	/* Transfer finished */
#define USBFS_HOST_HCH7INTF_TF					0u
	/* Channel halted */
#define USBFS_HOST_HCH7INTF_CH					1u
	/* STALL response received */
#define USBFS_HOST_HCH7INTF_STALL				3u
	/* NAK response received */
#define USBFS_HOST_HCH7INTF_NAK					4u
	/* ACK response received/transmitted */
#define USBFS_HOST_HCH7INTF_ACK					5u
	/* USB bus error */
#define USBFS_HOST_HCH7INTF_USBER				7u
	/* Babble error */
#define USBFS_HOST_HCH7INTF_BBER				8u
	/* Request queue overrun */
#define USBFS_HOST_HCH7INTF_REQOVR				9u
	/* Data toggle error */
#define USBFS_HOST_HCH7INTF_DTER				10u

	/* 0x10C: host channel-0 interrupt enable register */
	uint32_t volatile HCH0INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH0INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH0INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH0INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH0INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH0INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH0INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH0INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH0INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH0INTEN_DTERIE				10u

	/* 0x10C */
	uint8_t RESERVED21[0x12Cu-0x10Cu];

	/* 0x12C: host channel-1 interrupt enable register */
	uint32_t volatile HCH1INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH1INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH1INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH1INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH1INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH1INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH1INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH1INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH1INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH1INTEN_DTERIE				10u

	/* 0x12C */
	uint8_t RESERVED22[0x14Cu-0x12Cu];

	/* 0x14C: host channel-2 interrupt enable register */
	uint32_t volatile HCH2INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH2INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH2INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH2INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH2INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH2INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH2INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH2INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH2INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH2INTEN_DTERIE				10u

	/* 0x14C */
	uint8_t RESERVED23[0x16Cu-0x14Cu];

	/* 0x16C: host channel-3 interrupt enable register */
	uint32_t volatile HCH3INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH3INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH3INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH3INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH3INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH3INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH3INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH3INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH3INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH3INTEN_DTERIE				10u

	/* 0x16C */
	uint8_t RESERVED24[0x18Cu-0x16Cu];

	/* 0x18C: host channel-4 interrupt enable register */
	uint32_t volatile HCH4INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH4INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH4INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH4INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH4INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH4INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH4INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH4INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH4INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH4INTEN_DTERIE				10u

	/* 0x18C */
	uint8_t RESERVED25[0x1ACu-0x18Cu];

	/* 0x1AC: host channel-5 interrupt enable register */
	uint32_t volatile HCH5INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH5INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH5INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH5INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH5INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH5INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH5INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH5INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH5INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH5INTEN_DTERIE				10u

	/* 0x1AC */
	uint8_t RESERVED26[0x1CCu-0x1ACu];

	/* 0x1CC: host channel-6 interrupt enable register */
	uint32_t volatile HCH6INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH6INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH6INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH6INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH6INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH6INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH6INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH6INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH6INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH6INTEN_DTERIE				10u

	/* 0x1CC */
	uint8_t RESERVED27[0x1ECu-0x1CCu];

	/* 0x1EC: host channel-7 interrupt enable register */
	uint32_t volatile HCH7INTEN;
	/* Transfer completed interrupt enable */
#define USBFS_HOST_HCH7INTEN_TFIE				0u
	/* Channel halted interrupt enable */
#define USBFS_HOST_HCH7INTEN_CHIE				1u
	/* STALL interrupt enable */
#define USBFS_HOST_HCH7INTEN_STALLIE				3u
	/* NAK interrupt enable */
#define USBFS_HOST_HCH7INTEN_NAKIE				4u
	/* ACK interrupt enable */
#define USBFS_HOST_HCH7INTEN_ACKIE				5u
	/* USB bus error interrupt enable */
#define USBFS_HOST_HCH7INTEN_USBERIE				7u
	/* Babble error interrupt enable */
#define USBFS_HOST_HCH7INTEN_BBERIE				8u
	/* request queue overrun interrupt enable */
#define USBFS_HOST_HCH7INTEN_REQOVRIE				9u
	/* Data toggle error interrupt enable */
#define USBFS_HOST_HCH7INTEN_DTERIE				10u

	/* 0x110: host channel-0 transfer length */
	uint32_t volatile HCH0LEN;
	/* Transfer length */
#define USBFS_HOST_HCH0LEN_TLEN_msb				18u
#define USBFS_HOST_HCH0LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH0LEN_PCNT_msb				28u
#define USBFS_HOST_HCH0LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH0LEN_DPID_msb				30u
#define USBFS_HOST_HCH0LEN_DPID_lsb				29u

	/* 0x110 */
	uint8_t RESERVED28[0x130u-0x110u];

	/* 0x130: host channel-1 transfer length */
	uint32_t volatile HCH1LEN;
	/* Transfer length */
#define USBFS_HOST_HCH1LEN_TLEN_msb				18u
#define USBFS_HOST_HCH1LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH1LEN_PCNT_msb				28u
#define USBFS_HOST_HCH1LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH1LEN_DPID_msb				30u
#define USBFS_HOST_HCH1LEN_DPID_lsb				29u

	/* 0x130 */
	uint8_t RESERVED29[0x150u-0x130u];

	/* 0x150:  */
	uint32_t volatile HCH2LEN;
	/* Transfer length */
#define USBFS_HOST_HCH2LEN_TLEN_msb				18u
#define USBFS_HOST_HCH2LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH2LEN_PCNT_msb				28u
#define USBFS_HOST_HCH2LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH2LEN_DPID_msb				30u
#define USBFS_HOST_HCH2LEN_DPID_lsb				29u

	/* 0x150 */
	uint8_t RESERVED30[0x170u-0x150u];

	/* 0x170:  */
	uint32_t volatile HCH3LEN;
	/* Transfer length */
#define USBFS_HOST_HCH3LEN_TLEN_msb				18u
#define USBFS_HOST_HCH3LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH3LEN_PCNT_msb				28u
#define USBFS_HOST_HCH3LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH3LEN_DPID_msb				30u
#define USBFS_HOST_HCH3LEN_DPID_lsb				29u

	/* 0x170 */
	uint8_t RESERVED31[0x190u-0x170u];

	/* 0x190: host channel-4 transfer length */
	uint32_t volatile HCH4LEN;
	/* Transfer length */
#define USBFS_HOST_HCH4LEN_TLEN_msb				18u
#define USBFS_HOST_HCH4LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH4LEN_PCNT_msb				28u
#define USBFS_HOST_HCH4LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH4LEN_DPID_msb				30u
#define USBFS_HOST_HCH4LEN_DPID_lsb				29u

	/* 0x190 */
	uint8_t RESERVED32[0x1B0u-0x190u];

	/* 0x1B0: host channel-5 transfer length */
	uint32_t volatile HCH5LEN;
	/* Transfer length */
#define USBFS_HOST_HCH5LEN_TLEN_msb				18u
#define USBFS_HOST_HCH5LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH5LEN_PCNT_msb				28u
#define USBFS_HOST_HCH5LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH5LEN_DPID_msb				30u
#define USBFS_HOST_HCH5LEN_DPID_lsb				29u

	/* 0x1B0 */
	uint8_t RESERVED33[0x1D0u-0x1B0u];

	/* 0x1D0: host channel-6 transfer length */
	uint32_t volatile HCH6LEN;
	/* Transfer length */
#define USBFS_HOST_HCH6LEN_TLEN_msb				18u
#define USBFS_HOST_HCH6LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH6LEN_PCNT_msb				28u
#define USBFS_HOST_HCH6LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH6LEN_DPID_msb				30u
#define USBFS_HOST_HCH6LEN_DPID_lsb				29u

	/* 0x1D0 */
	uint8_t RESERVED34[0x1F0u-0x1D0u];

	/* 0x1F0: host channel-7 transfer length */
	uint32_t volatile HCH7LEN;
	/* Transfer length */
#define USBFS_HOST_HCH7LEN_TLEN_msb				18u
#define USBFS_HOST_HCH7LEN_TLEN_lsb				0u
	/* Packet count */
#define USBFS_HOST_HCH7LEN_PCNT_msb				28u
#define USBFS_HOST_HCH7LEN_PCNT_lsb				19u
	/* Data PID */
#define USBFS_HOST_HCH7LEN_DPID_msb				30u
#define USBFS_HOST_HCH7LEN_DPID_lsb				29u

};


#define USBFS_DEVICE ((struct sdk_usbfs_device *)0x50000800)

struct sdk_usbfs_device {

	/* 0x00: device configuration register */
	uint32_t volatile DCFG;
	/* Device speed */
#define USBFS_DEVICE_DCFG_DS_msb				1u
#define USBFS_DEVICE_DCFG_DS_lsb				0u
	/* Non-zero-length status OUT */
#define USBFS_DEVICE_DCFG_NZLSOH				2u
	/* Device address */
#define USBFS_DEVICE_DCFG_DAR_msb				10u
#define USBFS_DEVICE_DCFG_DAR_lsb				4u
	/* end of periodic frame time */
#define USBFS_DEVICE_DCFG_EOPFT_msb				12u
#define USBFS_DEVICE_DCFG_EOPFT_lsb				11u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: device control register */
	uint32_t volatile DCTL;
	/* Remote wakeup */
#define USBFS_DEVICE_DCTL_RWKUP					0u
	/* Soft disconnect */
#define USBFS_DEVICE_DCTL_SD					1u
	/* Global IN NAK status */
#define USBFS_DEVICE_DCTL_GINS					2u
	/* Global OUT NAK status */
#define USBFS_DEVICE_DCTL_GONS					3u
	/* Set global IN NAK */
#define USBFS_DEVICE_DCTL_SGINAK				7u
	/* Clear global IN NAK */
#define USBFS_DEVICE_DCTL_CGINAK				8u
	/* Set global OUT NAK */
#define USBFS_DEVICE_DCTL_SGONAK				9u
	/* Clear global OUT NAK */
#define USBFS_DEVICE_DCTL_CGONAK				10u
	/* Power-on initialization flag */
#define USBFS_DEVICE_DCTL_POIF					11u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: device status register */
	uint32_t volatile DSTAT;
	/* Suspend status */
#define USBFS_DEVICE_DSTAT_SPST					0u
	/* Enumerated speed */
#define USBFS_DEVICE_DSTAT_ES_msb				2u
#define USBFS_DEVICE_DSTAT_ES_lsb				1u
	/* Frame number of the received */
#define USBFS_DEVICE_DSTAT_FNRSOF_msb				21u
#define USBFS_DEVICE_DSTAT_FNRSOF_lsb				8u

	/* 0x08 */
	uint8_t RESERVED2[0x10u-0x08u];

	/* 0x10: device IN endpoint common interrupt */
	uint32_t volatile DIEPINTEN;
	/* Transfer finished interrupt */
#define USBFS_DEVICE_DIEPINTEN_TFEN				0u
	/* Endpoint disabled interrupt */
#define USBFS_DEVICE_DIEPINTEN_EPDISEN				1u
	/* Control IN timeout condition interrupt enable (Non-isochronous */
#define USBFS_DEVICE_DIEPINTEN_CITOEN				3u
	/* Endpoint Tx FIFO underrun interrupt enable bit */
#define USBFS_DEVICE_DIEPINTEN_EPTXFUDEN			4u
	/* IN endpoint NAK effective */
#define USBFS_DEVICE_DIEPINTEN_IEPNEEN				6u

	/* 0x10 */
	uint8_t RESERVED3[0x14u-0x10u];

	/* 0x14: device OUT endpoint common interrupt */
	uint32_t volatile DOEPINTEN;
	/* Transfer finished interrupt */
#define USBFS_DEVICE_DOEPINTEN_TFEN				0u
	/* Endpoint disabled interrupt */
#define USBFS_DEVICE_DOEPINTEN_EPDISEN				1u
	/* SETUP phase finished interrupt enable */
#define USBFS_DEVICE_DOEPINTEN_STPFEN				3u
	/*  */
#define USBFS_DEVICE_DOEPINTEN_EPRXFOVREN			4u
	/*  */
#define USBFS_DEVICE_DOEPINTEN_BTBSTPEN				6u

	/* 0x14 */
	uint8_t RESERVED4[0x18u-0x14u];

	/* 0x18: device all endpoints interrupt */
	uint32_t volatile DAEPINT;
	/* Device all IN endpoint interrupt bits */
#define USBFS_DEVICE_DAEPINT_IEPITB_msb				3u
#define USBFS_DEVICE_DAEPINT_IEPITB_lsb				0u
	/* Device all OUT endpoint interrupt bits */
#define USBFS_DEVICE_DAEPINT_OEPITB_msb				19u
#define USBFS_DEVICE_DAEPINT_OEPITB_lsb				16u

	/* 0x18 */
	uint8_t RESERVED5[0x1Cu-0x18u];

	/* 0x1C: Device all endpoints interrupt enable register */
	uint32_t volatile DAEPINTEN;
	/* IN EP interrupt interrupt enable bits */
#define USBFS_DEVICE_DAEPINTEN_IEPIE_msb			3u
#define USBFS_DEVICE_DAEPINTEN_IEPIE_lsb			0u
	/* OUT endpoint interrupt enable bits */
#define USBFS_DEVICE_DAEPINTEN_OEPIE_msb			19u
#define USBFS_DEVICE_DAEPINTEN_OEPIE_lsb			16u

	/* 0x1C */
	uint8_t RESERVED6[0x28u-0x1Cu];

	/* 0x28: device VBUS discharge time */
	uint32_t volatile DVBUSDT;
	/* Device VBUS discharge time */
#define USBFS_DEVICE_DVBUSDT_DVBUSDT_msb			15u
#define USBFS_DEVICE_DVBUSDT_DVBUSDT_lsb			0u

	/* 0x28 */
	uint8_t RESERVED7[0x2Cu-0x28u];

	/* 0x2C: device VBUS pulsing time */
	uint32_t volatile DVBUSPT;
	/* Device VBUS pulsing time */
#define USBFS_DEVICE_DVBUSPT_DVBUSPT_msb			11u
#define USBFS_DEVICE_DVBUSPT_DVBUSPT_lsb			0u

	/* 0x2C */
	uint8_t RESERVED8[0x34u-0x2Cu];

	/* 0x34: device IN endpoint FIFO empty */
	uint32_t volatile DIEPFEINTEN;
	/* IN EP Tx FIFO empty interrupt enable */
#define USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_msb			3u
#define USBFS_DEVICE_DIEPFEINTEN_IEPTXFEIE_lsb			0u

	/* 0x34 */
	uint8_t RESERVED9[0x100u-0x34u];

	/* 0x100: device IN endpoint 0 control */
	uint32_t volatile DIEP0CTL;
	/* Maximum packet length */
#define USBFS_DEVICE_DIEP0CTL_MPL_msb				1u
#define USBFS_DEVICE_DIEP0CTL_MPL_lsb				0u
	/* endpoint active */
#define USBFS_DEVICE_DIEP0CTL_EPACT				15u
	/* NAK status */
#define USBFS_DEVICE_DIEP0CTL_NAKS				17u
	/* Endpoint type */
#define USBFS_DEVICE_DIEP0CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DIEP0CTL_EPTYPE_lsb			18u
	/* STALL handshake */
#define USBFS_DEVICE_DIEP0CTL_STALL				21u
	/* TxFIFO number */
#define USBFS_DEVICE_DIEP0CTL_TXFNUM_msb			25u
#define USBFS_DEVICE_DIEP0CTL_TXFNUM_lsb			22u
	/* Clear NAK */
#define USBFS_DEVICE_DIEP0CTL_CNAK				26u
	/* Set NAK */
#define USBFS_DEVICE_DIEP0CTL_SNAK				27u
	/* Endpoint disable */
#define USBFS_DEVICE_DIEP0CTL_EPD				30u
	/* Endpoint enable */
#define USBFS_DEVICE_DIEP0CTL_EPEN				31u

	/* 0x100 */
	uint8_t RESERVED10[0x120u-0x100u];

	/* 0x120: device in endpoint-1 control */
	uint32_t volatile DIEP1CTL;
	/* Endpoint enable */
#define USBFS_DEVICE_DIEP1CTL_EPEN				31u
	/* Endpoint disable */
#define USBFS_DEVICE_DIEP1CTL_EPD				30u
	/* Set DATA1 PID/Set odd frame */
#define USBFS_DEVICE_DIEP1CTL_SD1PID_SODDFRM			29u
	/* SD0PID/SEVNFRM */
#define USBFS_DEVICE_DIEP1CTL_SD0PID_SEVENFRM			28u
	/* Set NAK */
#define USBFS_DEVICE_DIEP1CTL_SNAK				27u
	/* Clear NAK */
#define USBFS_DEVICE_DIEP1CTL_CNAK				26u
	/* Tx FIFO number */
#define USBFS_DEVICE_DIEP1CTL_TXFNUM_msb			25u
#define USBFS_DEVICE_DIEP1CTL_TXFNUM_lsb			22u
	/* STALL handshake */
#define USBFS_DEVICE_DIEP1CTL_STALL				21u
	/* Endpoint type */
#define USBFS_DEVICE_DIEP1CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DIEP1CTL_EPTYPE_lsb			18u
	/* NAK status */
#define USBFS_DEVICE_DIEP1CTL_NAKS				17u
	/* EOFRM/DPID */
#define USBFS_DEVICE_DIEP1CTL_EOFRM_DPID			16u
	/* Endpoint active */
#define USBFS_DEVICE_DIEP1CTL_EPACT				15u
	/* maximum packet length */
#define USBFS_DEVICE_DIEP1CTL_MPL_msb				10u
#define USBFS_DEVICE_DIEP1CTL_MPL_lsb				0u

	/* 0x120 */
	uint8_t RESERVED11[0x140u-0x120u];

	/* 0x140: device endpoint-2 control */
	uint32_t volatile DIEP2CTL;
	/* Endpoint enable */
#define USBFS_DEVICE_DIEP2CTL_EPEN				31u
	/* Endpoint disable */
#define USBFS_DEVICE_DIEP2CTL_EPD				30u
	/* Set DATA1 PID/Set odd frame */
#define USBFS_DEVICE_DIEP2CTL_SD1PID_SODDFRM			29u
	/* SD0PID/SEVNFRM */
#define USBFS_DEVICE_DIEP2CTL_SD0PID_SEVENFRM			28u
	/* Set NAK */
#define USBFS_DEVICE_DIEP2CTL_SNAK				27u
	/* Clear NAK */
#define USBFS_DEVICE_DIEP2CTL_CNAK				26u
	/* Tx FIFO number */
#define USBFS_DEVICE_DIEP2CTL_TXFNUM_msb			25u
#define USBFS_DEVICE_DIEP2CTL_TXFNUM_lsb			22u
	/* STALL handshake */
#define USBFS_DEVICE_DIEP2CTL_STALL				21u
	/* Endpoint type */
#define USBFS_DEVICE_DIEP2CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DIEP2CTL_EPTYPE_lsb			18u
	/* NAK status */
#define USBFS_DEVICE_DIEP2CTL_NAKS				17u
	/* EOFRM/DPID */
#define USBFS_DEVICE_DIEP2CTL_EOFRM_DPID			16u
	/* Endpoint active */
#define USBFS_DEVICE_DIEP2CTL_EPACT				15u
	/* maximum packet length */
#define USBFS_DEVICE_DIEP2CTL_MPL_msb				10u
#define USBFS_DEVICE_DIEP2CTL_MPL_lsb				0u

	/* 0x140 */
	uint8_t RESERVED12[0x160u-0x140u];

	/* 0x160: device endpoint-3 control */
	uint32_t volatile DIEP3CTL;
	/* Endpoint enable */
#define USBFS_DEVICE_DIEP3CTL_EPEN				31u
	/* Endpoint disable */
#define USBFS_DEVICE_DIEP3CTL_EPD				30u
	/* Set DATA1 PID/Set odd frame */
#define USBFS_DEVICE_DIEP3CTL_SD1PID_SODDFRM			29u
	/* SD0PID/SEVNFRM */
#define USBFS_DEVICE_DIEP3CTL_SD0PID_SEVENFRM			28u
	/* Set NAK */
#define USBFS_DEVICE_DIEP3CTL_SNAK				27u
	/* Clear NAK */
#define USBFS_DEVICE_DIEP3CTL_CNAK				26u
	/* Tx FIFO number */
#define USBFS_DEVICE_DIEP3CTL_TXFNUM_msb			25u
#define USBFS_DEVICE_DIEP3CTL_TXFNUM_lsb			22u
	/* STALL handshake */
#define USBFS_DEVICE_DIEP3CTL_STALL				21u
	/* Endpoint type */
#define USBFS_DEVICE_DIEP3CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DIEP3CTL_EPTYPE_lsb			18u
	/* NAK status */
#define USBFS_DEVICE_DIEP3CTL_NAKS				17u
	/* EOFRM/DPID */
#define USBFS_DEVICE_DIEP3CTL_EOFRM_DPID			16u
	/* Endpoint active */
#define USBFS_DEVICE_DIEP3CTL_EPACT				15u
	/* maximum packet length */
#define USBFS_DEVICE_DIEP3CTL_MPL_msb				10u
#define USBFS_DEVICE_DIEP3CTL_MPL_lsb				0u

	/* 0x160 */
	uint8_t RESERVED13[0x300u-0x160u];

	/* 0x300: device endpoint-0 control */
	uint32_t volatile DOEP0CTL;
	/* Endpoint enable */
#define USBFS_DEVICE_DOEP0CTL_EPEN				31u
	/* Endpoint disable */
#define USBFS_DEVICE_DOEP0CTL_EPD				30u
	/* Set NAK */
#define USBFS_DEVICE_DOEP0CTL_SNAK				27u
	/* Clear NAK */
#define USBFS_DEVICE_DOEP0CTL_CNAK				26u
	/* STALL handshake */
#define USBFS_DEVICE_DOEP0CTL_STALL				21u
	/* Snoop mode */
#define USBFS_DEVICE_DOEP0CTL_SNOOP				20u
	/* Endpoint type */
#define USBFS_DEVICE_DOEP0CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DOEP0CTL_EPTYPE_lsb			18u
	/* NAK status */
#define USBFS_DEVICE_DOEP0CTL_NAKS				17u
	/* Endpoint active */
#define USBFS_DEVICE_DOEP0CTL_EPACT				15u
	/* Maximum packet length */
#define USBFS_DEVICE_DOEP0CTL_MPL_msb				1u
#define USBFS_DEVICE_DOEP0CTL_MPL_lsb				0u

	/* 0x300 */
	uint8_t RESERVED14[0x320u-0x300u];

	/* 0x320: device endpoint-1 control */
	uint32_t volatile DOEP1CTL;
	/* Endpoint enable */
#define USBFS_DEVICE_DOEP1CTL_EPEN				31u
	/* Endpoint disable */
#define USBFS_DEVICE_DOEP1CTL_EPD				30u
	/* SD1PID/SODDFRM */
#define USBFS_DEVICE_DOEP1CTL_SD1PID_SODDFRM			29u
	/* SD0PID/SEVENFRM */
#define USBFS_DEVICE_DOEP1CTL_SD0PID_SEVENFRM			28u
	/* Set NAK */
#define USBFS_DEVICE_DOEP1CTL_SNAK				27u
	/* Clear NAK */
#define USBFS_DEVICE_DOEP1CTL_CNAK				26u
	/* STALL handshake */
#define USBFS_DEVICE_DOEP1CTL_STALL				21u
	/* Snoop mode */
#define USBFS_DEVICE_DOEP1CTL_SNOOP				20u
	/* Endpoint type */
#define USBFS_DEVICE_DOEP1CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DOEP1CTL_EPTYPE_lsb			18u
	/* NAK status */
#define USBFS_DEVICE_DOEP1CTL_NAKS				17u
	/* EOFRM/DPID */
#define USBFS_DEVICE_DOEP1CTL_EOFRM_DPID			16u
	/* Endpoint active */
#define USBFS_DEVICE_DOEP1CTL_EPACT				15u
	/* maximum packet length */
#define USBFS_DEVICE_DOEP1CTL_MPL_msb				10u
#define USBFS_DEVICE_DOEP1CTL_MPL_lsb				0u

	/* 0x320 */
	uint8_t RESERVED15[0x340u-0x320u];

	/* 0x340: device endpoint-2 control */
	uint32_t volatile DOEP2CTL;
	/* Endpoint enable */
#define USBFS_DEVICE_DOEP2CTL_EPEN				31u
	/* Endpoint disable */
#define USBFS_DEVICE_DOEP2CTL_EPD				30u
	/* SD1PID/SODDFRM */
#define USBFS_DEVICE_DOEP2CTL_SD1PID_SODDFRM			29u
	/* SD0PID/SEVENFRM */
#define USBFS_DEVICE_DOEP2CTL_SD0PID_SEVENFRM			28u
	/* Set NAK */
#define USBFS_DEVICE_DOEP2CTL_SNAK				27u
	/* Clear NAK */
#define USBFS_DEVICE_DOEP2CTL_CNAK				26u
	/* STALL handshake */
#define USBFS_DEVICE_DOEP2CTL_STALL				21u
	/* Snoop mode */
#define USBFS_DEVICE_DOEP2CTL_SNOOP				20u
	/* Endpoint type */
#define USBFS_DEVICE_DOEP2CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DOEP2CTL_EPTYPE_lsb			18u
	/* NAK status */
#define USBFS_DEVICE_DOEP2CTL_NAKS				17u
	/* EOFRM/DPID */
#define USBFS_DEVICE_DOEP2CTL_EOFRM_DPID			16u
	/* Endpoint active */
#define USBFS_DEVICE_DOEP2CTL_EPACT				15u
	/* maximum packet length */
#define USBFS_DEVICE_DOEP2CTL_MPL_msb				10u
#define USBFS_DEVICE_DOEP2CTL_MPL_lsb				0u

	/* 0x340 */
	uint8_t RESERVED16[0x360u-0x340u];

	/* 0x360: device endpoint-3 control */
	uint32_t volatile DOEP3CTL;
	/* Endpoint enable */
#define USBFS_DEVICE_DOEP3CTL_EPEN				31u
	/* Endpoint disable */
#define USBFS_DEVICE_DOEP3CTL_EPD				30u
	/* SD1PID/SODDFRM */
#define USBFS_DEVICE_DOEP3CTL_SD1PID_SODDFRM			29u
	/* SD0PID/SEVENFRM */
#define USBFS_DEVICE_DOEP3CTL_SD0PID_SEVENFRM			28u
	/* Set NAK */
#define USBFS_DEVICE_DOEP3CTL_SNAK				27u
	/* Clear NAK */
#define USBFS_DEVICE_DOEP3CTL_CNAK				26u
	/* STALL handshake */
#define USBFS_DEVICE_DOEP3CTL_STALL				21u
	/* Snoop mode */
#define USBFS_DEVICE_DOEP3CTL_SNOOP				20u
	/* Endpoint type */
#define USBFS_DEVICE_DOEP3CTL_EPTYPE_msb			19u
#define USBFS_DEVICE_DOEP3CTL_EPTYPE_lsb			18u
	/* NAK status */
#define USBFS_DEVICE_DOEP3CTL_NAKS				17u
	/* EOFRM/DPID */
#define USBFS_DEVICE_DOEP3CTL_EOFRM_DPID			16u
	/* Endpoint active */
#define USBFS_DEVICE_DOEP3CTL_EPACT				15u
	/* maximum packet length */
#define USBFS_DEVICE_DOEP3CTL_MPL_msb				10u
#define USBFS_DEVICE_DOEP3CTL_MPL_lsb				0u

	/* 0x108: device endpoint-0 interrupt */
	uint32_t volatile DIEP0INTF;
	/* Transmit FIFO empty */
#define USBFS_DEVICE_DIEP0INTF_TXFE				7u
	/* IN endpoint NAK effective */
#define USBFS_DEVICE_DIEP0INTF_IEPNE				6u
	/* Endpoint Tx FIFO underrun */
#define USBFS_DEVICE_DIEP0INTF_EPTXFUD				4u
	/* Control in timeout interrupt */
#define USBFS_DEVICE_DIEP0INTF_CITO				3u
	/* Endpoint finished */
#define USBFS_DEVICE_DIEP0INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DIEP0INTF_TF				0u

	/* 0x108 */
	uint8_t RESERVED17[0x128u-0x108u];

	/* 0x128: device endpoint-1 interrupt */
	uint32_t volatile DIEP1INTF;
	/* Transmit FIFO empty */
#define USBFS_DEVICE_DIEP1INTF_TXFE				7u
	/* IN endpoint NAK effective */
#define USBFS_DEVICE_DIEP1INTF_IEPNE				6u
	/* Endpoint Tx FIFO underrun */
#define USBFS_DEVICE_DIEP1INTF_EPTXFUD				4u
	/* Control in timeout interrupt */
#define USBFS_DEVICE_DIEP1INTF_CITO				3u
	/* Endpoint finished */
#define USBFS_DEVICE_DIEP1INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DIEP1INTF_TF				0u

	/* 0x128 */
	uint8_t RESERVED18[0x148u-0x128u];

	/* 0x148: device endpoint-2 interrupt */
	uint32_t volatile DIEP2INTF;
	/* Transmit FIFO empty */
#define USBFS_DEVICE_DIEP2INTF_TXFE				7u
	/* IN endpoint NAK effective */
#define USBFS_DEVICE_DIEP2INTF_IEPNE				6u
	/* Endpoint Tx FIFO underrun */
#define USBFS_DEVICE_DIEP2INTF_EPTXFUD				4u
	/* Control in timeout interrupt */
#define USBFS_DEVICE_DIEP2INTF_CITO				3u
	/* Endpoint finished */
#define USBFS_DEVICE_DIEP2INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DIEP2INTF_TF				0u

	/* 0x148 */
	uint8_t RESERVED19[0x168u-0x148u];

	/* 0x168: device endpoint-3 interrupt */
	uint32_t volatile DIEP3INTF;
	/* Transmit FIFO empty */
#define USBFS_DEVICE_DIEP3INTF_TXFE				7u
	/* IN endpoint NAK effective */
#define USBFS_DEVICE_DIEP3INTF_IEPNE				6u
	/* Endpoint Tx FIFO underrun */
#define USBFS_DEVICE_DIEP3INTF_EPTXFUD				4u
	/* Control in timeout interrupt */
#define USBFS_DEVICE_DIEP3INTF_CITO				3u
	/* Endpoint finished */
#define USBFS_DEVICE_DIEP3INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DIEP3INTF_TF				0u

	/* 0x168 */
	uint8_t RESERVED20[0x308u-0x168u];

	/* 0x308: device out endpoint-0 interrupt flag */
	uint32_t volatile DOEP0INTF;
	/* Back-to-back SETUP packets */
#define USBFS_DEVICE_DOEP0INTF_BTBSTP				6u
	/* Endpoint Rx FIFO overrun */
#define USBFS_DEVICE_DOEP0INTF_EPRXFOVR				4u
	/* Setup phase finished */
#define USBFS_DEVICE_DOEP0INTF_STPF				3u
	/* Endpoint disabled */
#define USBFS_DEVICE_DOEP0INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DOEP0INTF_TF				0u

	/* 0x308 */
	uint8_t RESERVED21[0x328u-0x308u];

	/* 0x328: device out endpoint-1 interrupt flag */
	uint32_t volatile DOEP1INTF;
	/* Back-to-back SETUP packets */
#define USBFS_DEVICE_DOEP1INTF_BTBSTP				6u
	/* Endpoint Rx FIFO overrun */
#define USBFS_DEVICE_DOEP1INTF_EPRXFOVR				4u
	/* Setup phase finished */
#define USBFS_DEVICE_DOEP1INTF_STPF				3u
	/* Endpoint disabled */
#define USBFS_DEVICE_DOEP1INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DOEP1INTF_TF				0u

	/* 0x328 */
	uint8_t RESERVED22[0x348u-0x328u];

	/* 0x348: device out endpoint-2 interrupt flag */
	uint32_t volatile DOEP2INTF;
	/* Back-to-back SETUP packets */
#define USBFS_DEVICE_DOEP2INTF_BTBSTP				6u
	/* Endpoint Rx FIFO overrun */
#define USBFS_DEVICE_DOEP2INTF_EPRXFOVR				4u
	/* Setup phase finished */
#define USBFS_DEVICE_DOEP2INTF_STPF				3u
	/* Endpoint disabled */
#define USBFS_DEVICE_DOEP2INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DOEP2INTF_TF				0u

	/* 0x348 */
	uint8_t RESERVED23[0x368u-0x348u];

	/* 0x368: device out endpoint-3 interrupt flag */
	uint32_t volatile DOEP3INTF;
	/* Back-to-back SETUP packets */
#define USBFS_DEVICE_DOEP3INTF_BTBSTP				6u
	/* Endpoint Rx FIFO overrun */
#define USBFS_DEVICE_DOEP3INTF_EPRXFOVR				4u
	/* Setup phase finished */
#define USBFS_DEVICE_DOEP3INTF_STPF				3u
	/* Endpoint disabled */
#define USBFS_DEVICE_DOEP3INTF_EPDIS				1u
	/* Transfer finished */
#define USBFS_DEVICE_DOEP3INTF_TF				0u

	/* 0x110: device IN endpoint-0 transfer length */
	uint32_t volatile DIEP0LEN;
	/* Packet count */
#define USBFS_DEVICE_DIEP0LEN_PCNT_msb				20u
#define USBFS_DEVICE_DIEP0LEN_PCNT_lsb				19u
	/* Transfer length */
#define USBFS_DEVICE_DIEP0LEN_TLEN_msb				6u
#define USBFS_DEVICE_DIEP0LEN_TLEN_lsb				0u

	/* 0x110 */
	uint8_t RESERVED24[0x310u-0x110u];

	/* 0x310: device OUT endpoint-0 transfer length */
	uint32_t volatile DOEP0LEN;
	/* SETUP packet count */
#define USBFS_DEVICE_DOEP0LEN_STPCNT_msb			30u
#define USBFS_DEVICE_DOEP0LEN_STPCNT_lsb			29u
	/* Packet count */
#define USBFS_DEVICE_DOEP0LEN_PCNT				19u
	/* Transfer length */
#define USBFS_DEVICE_DOEP0LEN_TLEN_msb				6u
#define USBFS_DEVICE_DOEP0LEN_TLEN_lsb				0u

	/* 0x130: device IN endpoint-1 transfer length */
	uint32_t volatile DIEP1LEN;
	/* Multi packet count per frame */
#define USBFS_DEVICE_DIEP1LEN_MCPF_msb				30u
#define USBFS_DEVICE_DIEP1LEN_MCPF_lsb				29u
	/* Packet count */
#define USBFS_DEVICE_DIEP1LEN_PCNT_msb				28u
#define USBFS_DEVICE_DIEP1LEN_PCNT_lsb				19u
	/* Transfer length */
#define USBFS_DEVICE_DIEP1LEN_TLEN_msb				18u
#define USBFS_DEVICE_DIEP1LEN_TLEN_lsb				0u

	/* 0x130 */
	uint8_t RESERVED25[0x150u-0x130u];

	/* 0x150: device IN endpoint-2 transfer length */
	uint32_t volatile DIEP2LEN;
	/* Multi packet count per frame */
#define USBFS_DEVICE_DIEP2LEN_MCPF_msb				30u
#define USBFS_DEVICE_DIEP2LEN_MCPF_lsb				29u
	/* Packet count */
#define USBFS_DEVICE_DIEP2LEN_PCNT_msb				28u
#define USBFS_DEVICE_DIEP2LEN_PCNT_lsb				19u
	/* Transfer length */
#define USBFS_DEVICE_DIEP2LEN_TLEN_msb				18u
#define USBFS_DEVICE_DIEP2LEN_TLEN_lsb				0u

	/* 0x150 */
	uint8_t RESERVED26[0x170u-0x150u];

	/* 0x170: device IN endpoint-3 transfer length */
	uint32_t volatile DIEP3LEN;
	/* Multi packet count per frame */
#define USBFS_DEVICE_DIEP3LEN_MCPF_msb				30u
#define USBFS_DEVICE_DIEP3LEN_MCPF_lsb				29u
	/* Packet count */
#define USBFS_DEVICE_DIEP3LEN_PCNT_msb				28u
#define USBFS_DEVICE_DIEP3LEN_PCNT_lsb				19u
	/* Transfer length */
#define USBFS_DEVICE_DIEP3LEN_TLEN_msb				18u
#define USBFS_DEVICE_DIEP3LEN_TLEN_lsb				0u

	/* 0x170 */
	uint8_t RESERVED27[0x330u-0x170u];

	/* 0x330: device OUT endpoint-1 transfer length */
	uint32_t volatile DOEP1LEN;
	/* SETUP packet count/Received data PID */
#define USBFS_DEVICE_DOEP1LEN_STPCNT_RXDPID_msb			30u
#define USBFS_DEVICE_DOEP1LEN_STPCNT_RXDPID_lsb			29u
	/* Packet count */
#define USBFS_DEVICE_DOEP1LEN_PCNT_msb				28u
#define USBFS_DEVICE_DOEP1LEN_PCNT_lsb				19u
	/* Transfer length */
#define USBFS_DEVICE_DOEP1LEN_TLEN_msb				18u
#define USBFS_DEVICE_DOEP1LEN_TLEN_lsb				0u

	/* 0x330 */
	uint8_t RESERVED28[0x350u-0x330u];

	/* 0x350: device OUT endpoint-2 transfer length */
	uint32_t volatile DOEP2LEN;
	/* SETUP packet count/Received data PID */
#define USBFS_DEVICE_DOEP2LEN_STPCNT_RXDPID_msb			30u
#define USBFS_DEVICE_DOEP2LEN_STPCNT_RXDPID_lsb			29u
	/* Packet count */
#define USBFS_DEVICE_DOEP2LEN_PCNT_msb				28u
#define USBFS_DEVICE_DOEP2LEN_PCNT_lsb				19u
	/* Transfer length */
#define USBFS_DEVICE_DOEP2LEN_TLEN_msb				18u
#define USBFS_DEVICE_DOEP2LEN_TLEN_lsb				0u

	/* 0x350 */
	uint8_t RESERVED29[0x370u-0x350u];

	/* 0x370: device OUT endpoint-3 transfer length */
	uint32_t volatile DOEP3LEN;
	/* SETUP packet count/Received data PID */
#define USBFS_DEVICE_DOEP3LEN_STPCNT_RXDPID_msb			30u
#define USBFS_DEVICE_DOEP3LEN_STPCNT_RXDPID_lsb			29u
	/* Packet count */
#define USBFS_DEVICE_DOEP3LEN_PCNT_msb				28u
#define USBFS_DEVICE_DOEP3LEN_PCNT_lsb				19u
	/* Transfer length */
#define USBFS_DEVICE_DOEP3LEN_TLEN_msb				18u
#define USBFS_DEVICE_DOEP3LEN_TLEN_lsb				0u

	/* 0x118: device IN endpoint  0 transmit FIFO */
	uint32_t volatile DIEP0TFSTAT;
	/* IN endpoint TxFIFO space */
#define USBFS_DEVICE_DIEP0TFSTAT_IEPTFS_msb			15u
#define USBFS_DEVICE_DIEP0TFSTAT_IEPTFS_lsb			0u

	/* 0x118 */
	uint8_t RESERVED30[0x138u-0x118u];

	/* 0x138: device IN endpoint 1 transmit FIFO */
	uint32_t volatile DIEP1TFSTAT;
	/* IN endpoint TxFIFO space */
#define USBFS_DEVICE_DIEP1TFSTAT_IEPTFS_msb			15u
#define USBFS_DEVICE_DIEP1TFSTAT_IEPTFS_lsb			0u

	/* 0x138 */
	uint8_t RESERVED31[0x158u-0x138u];

	/* 0x158: device IN endpoint  2 transmit FIFO */
	uint32_t volatile DIEP2TFSTAT;
	/* IN endpoint TxFIFO space */
#define USBFS_DEVICE_DIEP2TFSTAT_IEPTFS_msb			15u
#define USBFS_DEVICE_DIEP2TFSTAT_IEPTFS_lsb			0u

	/* 0x158 */
	uint8_t RESERVED32[0x178u-0x158u];

	/* 0x178: device IN endpoint  3 transmit FIFO */
	uint32_t volatile DIEP3TFSTAT;
	/* IN endpoint TxFIFO space */
#define USBFS_DEVICE_DIEP3TFSTAT_IEPTFS_msb			15u
#define USBFS_DEVICE_DIEP3TFSTAT_IEPTFS_lsb			0u

};


#define USBFS_PWRCLK ((struct sdk_usbfs_pwrclk *)0x50000E00)

struct sdk_usbfs_pwrclk {

	/* 0x00: power and clock gating control */
	uint32_t volatile PWRCLKCTL;
	/* Stop the USB clock */
#define USBFS_PWRCLK_PWRCLKCTL_SUCLK				0u
	/* Stop HCLK */
#define USBFS_PWRCLK_PWRCLKCTL_SHCLK				1u

};


#define WWDGT ((struct sdk_wwdgt *)0x40002C00)

struct sdk_wwdgt {

	/* 0x00: Control register */
	uint32_t volatile CTL;
	/* Activation bit */
#define WWDGT_CTL_WDGTEN					7u
	/* 7-bit counter */
#define WWDGT_CTL_CNT_msb					6u
#define WWDGT_CTL_CNT_lsb					0u

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: Configuration register */
	uint32_t volatile CFG;
	/* Early wakeup interrupt */
#define WWDGT_CFG_EWIE						9u
	/* Prescaler */
#define WWDGT_CFG_PSC_msb					8u
#define WWDGT_CFG_PSC_lsb					7u
	/* 7-bit window value */
#define WWDGT_CFG_WIN_msb					6u
#define WWDGT_CFG_WIN_lsb					0u

	/* 0x04 */
	uint8_t RESERVED1[0x08u-0x04u];

	/* 0x08: Status register */
	uint32_t volatile STAT;
	/* Early wakeup interrupt */
#define WWDGT_STAT_EWIF						0u

};

#endif
