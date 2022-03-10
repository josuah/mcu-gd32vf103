GigaDevice GD32VF103
====================
<http://www.gd32mcu.com/data/documents/shujushouce/GD32VF103_User_Manual_EN_V1.2.pdf>

A RISC-V MCU with many peripheral, a low price tag, featuring
hardware support for a CAN BUS (as used in vehicles).

crt.S - running C code
----------------------
The GD32VF103 has a 32bit RISC-V core Bumblebee, with "vectorised" interrupts:
In AVR an interrupt makes the execution jump to a hardcoded address, that
usually contains itself a jump instruction of the choice of the developer.
It is the jump instruction at that known address that lets the developer where
to put an interrupt.

Instead, vectorised interrupts

GPIO - blinking a led
---------------------
As many MCU that target low-power, the GD32VF103 has most peripherals
disabled at startup, including GPIO.

As often, enabling this peripheral goes by starting the associated
clock.

The relevant Reset and Clock Unit (RCU) register is `RCU_APB2EN`.

GPIO is very basic and low-level, but yet there are multiple mode to
change pin status.

What we want for blinking a led is port controll (`CTL` in `GPIO_CTL`)
to be set to pull-up/pull-down, and I/O mode (`MD` in `GPIO_CTL`)
to "output" with whatever speed.

Finally, the GPIO Bit Operation (`GPIO_BOP`) register lets us change
the value of the individual pin, for instance connected to a LED or
multimeter.

Links
-----
* <https://www.susa.net/wordpress/2019/10/longan-nano-gd32vf103/>
* <https://ioprog.com/2019/12/08/interrupts-and-the-gd32vf103/>
* <https://vivonomicon.com/2020/02/11/bare-metal-risc-v-development-with-the-gd32vf103cb/>
* <https://mecrisp-stellaris-folkdoc.sourceforge.io/gd32vf103.html>
* <https://github.com/dwelch67/gigadevice_samples/>
