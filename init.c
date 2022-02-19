#include "main.h"

extern int main(void);
extern void __reset_handler(void);

extern char __data_start, __data_end, __data_load_start;
extern char __bss_start, __bss_end, __stack_top;

void (*__vectors[])(void) = {
	NULL,				/* 0x0000 */
	NULL,				/* 0x0004 */
	NULL,				/* 0x0008 */
	__stop_program, 		/* 0x000C: interrupt_clic_int_sft */
	NULL, 				/* 0x0010 */
	NULL, 				/* 0x0014 */
	NULL, 				/* 0x0018 */
	__stop_program, 		/* 0x001C: interrupt_clic_int_tmr */
	NULL, 				/* 0x0020 */
	NULL, 				/* 0x0024 */
	NULL, 				/* 0x0028 */
	NULL, 				/* 0x002C */
	NULL, 				/* 0x0030 */
	NULL, 				/* 0x0034 */
	NULL, 				/* 0x0038 */
	NULL, 				/* 0x003C */
	NULL, 				/* 0x0040 */
	__stop_program, 		/* 0x0044: interrupt_clic_int_bwei */
	__stop_program, 		/* 0x0048: interrupt_clic_int_pmovi */
	__stop_program, 		/* 0x004C: interrupt_wwdgt */
	__stop_program, 		/* 0x0050: interrupt_lvd */
	__stop_program, 		/* 0x0054: interrupt_tamper */
	__stop_program, 		/* 0x0058: interrupt_rtc */
	__stop_program, 		/* 0x005C: interrupt_fmc */
	__stop_program, 		/* 0x0060: interrupt_rcu */
	__stop_program, 		/* 0x0064: interrupt_exti_line0 */
	__stop_program, 		/* 0x0068: interrupt_exti_line1 */
	__stop_program, 		/* 0x006C: interrupt_exti_line2 */
	__stop_program, 		/* 0x0070: interrupt_exti_line3 */
	__stop_program, 		/* 0x0074: interrupt_exti_line4 */
	__stop_program, 		/* 0x0078: interrupt_dma0_chan0 */
	__stop_program, 		/* 0x007C: interrupt_dma0_chan1 */
	__stop_program, 		/* 0x0080: interrupt_dma0_chan2 */
	__stop_program, 		/* 0x0084: interrupt_dma0_chan3 */
	__stop_program, 		/* 0x0088: interrupt_dma0_chan4 */
	__stop_program, 		/* 0x008C: interrupt_dma0_chan5 */
	__stop_program, 		/* 0x0090: interrupt_dma0_chan6 */
	__stop_program, 		/* 0x0094: interrupt_adc0_chan1 */
	__stop_program, 		/* 0x0098: interrupt_can0_tx */
	__stop_program, 		/* 0x009C: interrupt_can0_rx0 */
	__stop_program, 		/* 0x00A0: interrupt_can0_rx1 */
	__stop_program, 		/* 0x00A4: interrupt_can0_ewmc */
	__stop_program, 		/* 0x00A8: interrupt_exti_line5to9 */
	__stop_program, 		/* 0x00AC: interrupt_timer0_break */
	__stop_program, 		/* 0x00B0: interrupt_timer0_update */
	__stop_program, 		/* 0x00B4: interrupt_timer0_trigger */
	__stop_program, 		/* 0x00B8: interrupt_timer0_capture */
	__stop_program, 		/* 0x00BC: interrupt_timer1 */
	__stop_program, 		/* 0x00C0: interrupt_timer2 */
	__stop_program, 		/* 0x00C4: interrupt_timer3 */
	__stop_program, 		/* 0x00C8: interrupt_i2c0_event */
	__stop_program, 		/* 0x00CC: interrupt_i2c0_error */
	__stop_program, 		/* 0x00D0: interrupt_i2c1_event */
	__stop_program, 		/* 0x00D4: interrupt_i2c1_error */
	__stop_program, 		/* 0x00D8: interrupt_spi0 */
	__stop_program, 		/* 0x00DC: interrupt_spi1 */
	__stop_program, 		/* 0x00E0: interrupt_usart0 */
	__stop_program, 		/* 0x00E4: interrupt_usart1 */
	__stop_program, 		/* 0x00E8: interrupt_usart2 */
	__stop_program, 		/* 0x00EC: interrupt_exti_line10to15 */
	__stop_program, 		/* 0x00F0: interrupt_rtc_alarm */
	__stop_program, 		/* 0x00F4: interrupt_usbfs_wakeup */
	NULL, 				/* 0x00F8 */
	NULL, 				/* 0x00FC */
	NULL, 				/* 0x0100 */
	NULL, 				/* 0x0104 */
	NULL, 				/* 0x0108 */
	NULL, 				/* 0x010C */
	NULL, 				/* 0x0110 */
	__stop_program, 		/* 0x0114: interrupt_timer4 */
	__stop_program, 		/* 0x0118: interrupt_spi2 */
	__stop_program, 		/* 0x011C: interrupt_uart3 */
	__stop_program, 		/* 0x0120: interrupt_uart4 */
	__stop_program, 		/* 0x0124: interrupt_timer5 */
	__stop_program, 		/* 0x0128: interrupt_timer6 */
	__stop_program, 		/* 0x012C: interrupt_dma1_chan0 */
	__stop_program, 		/* 0x0130: interrupt_dma1_chan1 */
	__stop_program, 		/* 0x0134: interrupt_dma1_chan2 */
	__stop_program, 		/* 0x0138: interrupt_dma1_chan3 */
	__stop_program, 		/* 0x013C: interrupt_dma1_chan4 */
	NULL, 				/* 0x0140 */
	NULL, 				/* 0x0144 */
	__stop_program, 		/* 0x0148: interrupt_can1_tx */
	__stop_program, 		/* 0x014C: interrupt_can1_rx0 */
	__stop_program, 		/* 0x0150: interrupt_can1_rx1 */
	__stop_program, 		/* 0x0154: interrupt_can1_ewmc */
	__stop_program, 		/* 0x0158: interrupt_usbfs */
};

void
__reset_handler(void)
{
	volatile char *src, *dst;

	/* fill initialised and uninitialised variables */
	src = &__data_load_start;
	for (dst = &__data_start; dst < &__data_end; *dst++ = *src++);
	for (dst = &__bss_start; dst < &__bss_end; *dst++ = 0);

	main();
	__stop_program();
}

void
__stop_program(void)
{
	for (int volatile i = 0 ;; i++);
}
