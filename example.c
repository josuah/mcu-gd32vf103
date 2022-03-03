#include <main.h>
#include <rcu.h>
#include <gpio.h>
#include <usart.h>

#define LED_R_PORT		GPIOC
#define LED_R_PIN		13u
#define LED_G_PORT		GPIOA
#define LED_G_PIN		1u
#define LED_B_PORT		GPIOA
#define LED_B_PIN		2u

#define USART0_TX_PORT		GPIOA
#define USART0_TX_PIN		9u
#define USART0_RX_PORT		GPIOA
#define USART0_RX_PIN		10u


enum led {
	LED_R, LED_G, LED_B
};

void
led_set(enum led led, int onoff)
{
	struct sdk_gpio *gpio;
	uint8_t pin;

	switch (led) {
	case LED_R: gpio = LED_R_PORT; pin = LED_R_PIN; break;
	case LED_G: gpio = LED_G_PORT; pin = LED_G_PIN; break;
	case LED_B: gpio = LED_B_PORT; pin = LED_B_PIN; break;
	default: __stop_program();
	}

	if (onoff)
		gpio_port_clear(gpio, 1 << pin);
	else
		gpio_port_set(gpio, 1 << pin);
}

void
led_on(enum led led)
{
	led_set(led, 1);
}

void
led_off(enum led led)
{
	led_set(led, 0);
}

void
clock_mode_xtal(void)
{
	uint32_t reg, hxtal;

	RCU->CTL |= RCU_CTL_HXTALEN;
	while (!(RCU->CTL & RCU_CTL_HXTALSTB));

	reg = RCU->CFG0 & RCU_CFG0_SCS_MASK;
	RCU->CFG0 = reg | RCU_CFG0_SCS(RCU_CFG0_SCS_HXTAL);

	hxtal = RCU_CFG0_SCSS(RCU_CFG0_SCSS_HXTAL);
	while ((RCU->CFG0 & RCU_CFG0_SCSS_MASK) != hxtal);
}

int
main(void)
{
	/* UART <-> USB expecing 5V and only feeding 3V ? */

	gpio_port_enable(LED_R_PORT);
	gpio_mode_output_open_drain(LED_R_PORT, LED_R_PIN, 10000000);
//	led_off(LED_R);

	gpio_port_enable(LED_G_PORT);
	gpio_mode_output_open_drain(LED_G_PORT, LED_G_PIN, 10000000);
//	led_off(LED_G);

	gpio_port_enable(LED_B_PORT);
	gpio_mode_output_open_drain(LED_B_PORT, LED_B_PIN, 10000000);
//	led_off(LED_B);

	__stop_program();

	usart_clock_enable();

	led_on(LED_R);

//	gpio_port_enable(USART0_TX_PORT);
//	gpio_mode_altfn_push_pull(USART0_TX_PORT, USART0_TX_PIN, 10000000);
//	gpio_mode_input_floating(USART0_RX_PORT, USART0_RX_PIN);

	led_on(LED_G);

//	RCU->APB2RST |= RCU_APB2RST_USART0RST;
//	RCU->APB2RST &= ~RCU_APB2RST_USART0RST;

	led_off(LED_R);

//	usart_set_word_length(USART0, 8);
//	usart_set_stop_bits(USART0, 10);
//	usart_set_baud_rate(USART0, 0);
//	usart_transmit_enable(USART0);
//	usart_enable(USART0);

	led_on(LED_B);

	for (;;) {
		for (uint32_t i = 0; i < 0xFFFF; i++)
			led_off(LED_G);
		while (!usart_transmit_ready(USART0));
		usart_transmit_byte(USART0, '1');
		while (!usart_transmit_done(USART0));

		for (uint32_t i = 0; i < 0xFFFF; i++)
			led_off(LED_G);
		while (!usart_transmit_ready(USART0));
		usart_transmit_byte(USART0, '0');
		while (!usart_transmit_done(USART0));
	}

	return 0;
}
