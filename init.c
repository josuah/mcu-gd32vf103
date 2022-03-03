#include "main.h"

extern int main(void);
extern void __reset_handler(void);

extern char __data_start, __data_end, __data_load_start;
extern char __bss_start, __bss_end, __stack_top;

void (*__vectors[])(void) = {
	NULL,				/* 0x0000 */
	NULL,				/* 0x0004 */
	NULL,				/* 0x0008 */
	__stop_program, 		/* 0x000C CLIC_INT_SFT */
	NULL, 				/* 0x0010 */
	NULL, 				/* 0x0014 */
	NULL, 				/* 0x0018 */
	__stop_program, 		/* 0x001C CLIC_INT_TMR */
	NULL, 				/* 0x0020 */
	NULL, 				/* 0x0024 */
	NULL, 				/* 0x0028 */
	NULL, 				/* 0x002C */
	NULL, 				/* 0x0030 */
	NULL, 				/* 0x0034 */
	NULL, 				/* 0x0038 */
	NULL, 				/* 0x003C */
	NULL, 				/* 0x0040 */
	__stop_program, 		/* 0x0044 CLIC_INT_BWEI */
	__stop_program, 		/* 0x0048 CLIC_INT_PMOVI */
	__stop_program, 		/* 0x004C WWDGT */
	__stop_program, 		/* 0x0050 LVD */
	__stop_program, 		/* 0x0054 TAMPER */
	__stop_program, 		/* 0x0058 RTC */
	__stop_program, 		/* 0x005C FMC */
	__stop_program, 		/* 0x0060 RCU */
	__stop_program, 		/* 0x0064 EXTI_LINE0 */
	__stop_program, 		/* 0x0068 EXTI_LINE1 */
	__stop_program, 		/* 0x006C EXTI_LINE2 */
	__stop_program, 		/* 0x0070 EXTI_LINE3 */
	__stop_program, 		/* 0x0074 EXTI_LINE4 */
	__stop_program, 		/* 0x0078 DMA0_CHAN0 */
	__stop_program, 		/* 0x007C DMA0_CHAN1 */
	__stop_program, 		/* 0x0080 DMA0_CHAN2 */
	__stop_program, 		/* 0x0084 DMA0_CHAN3 */
	__stop_program, 		/* 0x0088 DMA0_CHAN4 */
	__stop_program, 		/* 0x008C DMA0_CHAN5 */
	__stop_program, 		/* 0x0090 DMA0_CHAN6 */
	__stop_program, 		/* 0x0094 ADC0_CHAN1 */
	__stop_program, 		/* 0x0098 CAN0_TX */
	__stop_program, 		/* 0x009C CAN0_RX0 */
	__stop_program, 		/* 0x00A0 CAN0_RX1 */
	__stop_program, 		/* 0x00A4 CAN0_EWMC */
	__stop_program, 		/* 0x00A8 EXTI_LINE5TO9 */
	__stop_program, 		/* 0x00AC TIMER0_BREAK */
	__stop_program, 		/* 0x00B0 TIMER0_UPDATE */
	__stop_program, 		/* 0x00B4 TIMER0_TRIGGER */
	__stop_program, 		/* 0x00B8 TIMER0_CAPTURE */
	__stop_program, 		/* 0x00BC TIMER1 */
	__stop_program, 		/* 0x00C0 TIMER2 */
	__stop_program, 		/* 0x00C4 TIMER3 */
	__stop_program, 		/* 0x00C8 I2C0_EVENT */
	__stop_program, 		/* 0x00CC I2C0_ERROR */
	__stop_program, 		/* 0x00D0 I2C1_EVENT */
	__stop_program, 		/* 0x00D4 I2C1_ERROR */
	__stop_program, 		/* 0x00D8 SPI0 */
	__stop_program, 		/* 0x00DC SPI1 */
	__stop_program, 		/* 0x00E0 USART0 */
	__stop_program, 		/* 0x00E4 USART1 */
	__stop_program, 		/* 0x00E8 USART2 */
	__stop_program, 		/* 0x00EC EXTI_LINE10TO15 */
	__stop_program, 		/* 0x00F0 RTC_ALARM */
	__stop_program, 		/* 0x00F4 USBFS_WAKEUP */
	NULL, 				/* 0x00F8 */
	NULL, 				/* 0x00FC */
	NULL, 				/* 0x0100 */
	NULL, 				/* 0x0104 */
	NULL, 				/* 0x0108 */
	NULL, 				/* 0x010C */
	NULL, 				/* 0x0110 */
	__stop_program, 		/* 0x0114 TIMER4 */
	__stop_program, 		/* 0x0118 SPI2 */
	__stop_program, 		/* 0x011C UART3 */
	__stop_program, 		/* 0x0120 UART4 */
	__stop_program, 		/* 0x0124 TIMER5 */
	__stop_program, 		/* 0x0128 TIMER6 */
	__stop_program, 		/* 0x012C DMA1_CHAN0 */
	__stop_program, 		/* 0x0130 DMA1_CHAN1 */
	__stop_program, 		/* 0x0134 DMA1_CHAN2 */
	__stop_program, 		/* 0x0138 DMA1_CHAN3 */
	__stop_program, 		/* 0x013C DMA1_CHAN4 */
	NULL, 				/* 0x0140 */
	NULL, 				/* 0x0144 */
	__stop_program, 		/* 0x0148 CAN1_TX */
	__stop_program, 		/* 0x014C CAN1_RX0 */
	__stop_program, 		/* 0x0150 CAN1_RX1 */
	__stop_program, 		/* 0x0154 CAN1_EWMC */
	__stop_program, 		/* 0x0158 USBFS */
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
