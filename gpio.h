#include <stddef.h>
#include <stdint.h>
#include "binary.h"

#define GPIOA ((struct sdk_gpio *)0x40010800)
#define GPIOB ((struct sdk_gpio *)0x40010C00)
#define GPIOC ((struct sdk_gpio *)0x40011000)
#define GPIOD ((struct sdk_gpio *)0x40011400)
#define GPIOE ((struct sdk_gpio *)0x40011800)

struct sdk_gpio {

	/* 0x00: Port control register */
	uint64_t volatile CTL;
#define GPIO_CTL(pin, x)			((uint64_t)(x) << ((pin) * 4))
#define GPIO_CTL_MASK(pin)			GPIO_CTL(pin, B00000011)
#define GPIO_CTL_INPUT_ANALOG			B00000000
#define GPIO_CTL_INPUT_FLOATING			B00000001
#define GPIO_CTL_INPUT_PULL_UP_DOWN		B00000010
#define GPIO_CTL_OUTPUT_PUSH_PULL		B00000000
#define GPIO_CTL_OUTPUT_OPEN_DRAIN		B00000001
#define GPIO_CTL_ALTFN_PUSH_PULL		B00000010
#define GPIO_CTL_ALTFN_OPEN_DRAIN		B00000011
#define GPIO_MD(pin, x)				((uint64_t)(x) << ((pin) * 4 + 2))
#define GPIO_MD_MASK(pin)			GPIO_MD(pin, B00000011)
#define GPIO_MD_INPUT				B00000000
#define GPIO_MD_OUTPUT_10_MHZ			B00000001
#define GPIO_MD_OUTPUT_2_MHZ			B00000010
#define GPIO_MD_OUTPUT_50_MHZ			B00000011

	/* 0x08: Port input status register */
	uint32_t volatile ISTAT;

	/* 0x0C: Port output control register */
	uint32_t volatile OCTL;

	/* 0x10: Port bit operate register */
	uint32_t volatile BOP;
#define GPIO_BOP_SET(x)				(((x) & 0xFFFF) << 0)
#define GPIO_BOP_CLR(x)				(((x) & 0xFFFF) << 16)

	/* 0x14: Port bit clear register */
	uint32_t volatile BC;

	/* 0x18: Port configuration lock register */
	uint32_t volatile LOCK;
#define GPIO_LKK				(1u << 16)

};

static inline void
gpio_port_set(struct sdk_gpio *gpio, uint32_t mask)
{
	gpio->BOP = GPIO_BOP_SET(mask);
}

static inline void
gpio_port_clear(struct sdk_gpio *gpio, uint32_t mask)
{
	gpio->BOP = GPIO_BOP_CLR(mask);
}

static inline void
gpio_port_enable(struct sdk_gpio *gpio)
{
	if (gpio == GPIOA)
		RCU->APB2EN |= RCU_APB2EN_PAEN;
	if (gpio == GPIOB)
		RCU->APB2EN |= RCU_APB2EN_PBEN;
	if (gpio == GPIOC)
		RCU->APB2EN |= RCU_APB2EN_PCEN;
	if (gpio == GPIOD)
		RCU->APB2EN |= RCU_APB2EN_PDEN;
	if (gpio == GPIOE)
		RCU->APB2EN |= RCU_APB2EN_PEEN;
}

static inline void
gpio_mode(struct sdk_gpio *gpio, uint8_t pin, uint8_t mode, uint8_t ctl)
{
	uint64_t reg;

	reg = gpio->CTL & ~GPIO_MD_MASK(pin) & ~GPIO_CTL_MASK(pin);
	gpio->CTL = reg | GPIO_MD(pin, mode) | GPIO_CTL(pin, ctl);
}

static inline void
gpio_mode_input_floating(struct sdk_gpio *gpio, uint8_t pin)
{
	gpio_mode(gpio, pin, GPIO_MD_INPUT, GPIO_CTL_INPUT_FLOATING);
}

static inline void
gpio_mode_input_analog(struct sdk_gpio *gpio, uint8_t pin)
{
	gpio_mode(gpio, pin, GPIO_MD_INPUT, GPIO_CTL_INPUT_ANALOG);
}

static inline void
gpio_mode_input_pull_up(struct sdk_gpio *gpio, uint8_t pin)
{
	gpio_mode(gpio, pin, GPIO_MD_INPUT, GPIO_CTL_INPUT_PULL_UP_DOWN);
	gpio_port_set(gpio, 1u << pin);
}

static inline void
gpio_mode_input_pull_down(struct sdk_gpio *gpio, uint8_t pin)
{
	gpio_mode(gpio, pin, GPIO_MD_INPUT, GPIO_CTL_INPUT_PULL_UP_DOWN);
	gpio_port_clear(gpio, 1u << pin);
}

static inline void
gpio_mode_output_push_pull(struct sdk_gpio *gpio, uint8_t pin, uint32_t speed)
{
	gpio_mode(gpio, pin, speed, GPIO_CTL_OUTPUT_PUSH_PULL);
}

static inline void
gpio_mode_output_open_drain(struct sdk_gpio *gpio, uint8_t pin, uint32_t speed)
{
	gpio_mode(gpio, pin, speed, GPIO_CTL_OUTPUT_OPEN_DRAIN);
}

static inline void
gpio_mode_altfn_push_pull(struct sdk_gpio *gpio, uint8_t pin, uint32_t speed)
{
	gpio_mode(gpio, pin, speed, GPIO_CTL_ALTFN_PUSH_PULL);
}

static inline void
gpio_mode_altfn_open_drain(struct sdk_gpio *gpio, uint8_t pin, uint32_t speed)
{
	gpio_mode(gpio, pin, speed, GPIO_CTL_ALTFN_OPEN_DRAIN);
}

#define GPIO_SPEED_2_MHZ			GPIO_MD_OUTPUT_10_MHZ
#define GPIO_SPEED_10_MHZ			GPIO_MD_OUTPUT_2_MHZ
#define GPIO_SPEED_50_MHZ			GPIO_MD_OUTPUT_50_MHZ
