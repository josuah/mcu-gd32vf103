OBJCOPY = llvm-objcopy
OBJDUMP = llvm-objdump
CPP = clang-cpp
CC = clang --target=riscv32-unknown-elf -march=rv32imac -mabi=ilp32
AS = clang --target=riscv32-unknown-elf -march=rv32imac -mabi=ilp32
LD = llvm-link --target=riscv32-unknown-elf -march=rv32imac -mabi=ilp32
AR = llvm-ar
GDB = riscv64-unknown-elf-gdb
OPENOCD = openocd -f interface/ftdi/minimodule.cfg -c "adapter speed 1000" -c "ftdi_device_desc {Dual RS232}" -f target/gd32vf103.cfg
DFUUTIL = dfu-util -d 28e9:0189 -a 0 -s 0x08000000
OBJ = ${SDK}/init.o ${SDK}/usart.o

clean:
	rm -f *.[os] ${SDK}/*.[os] *.asm *.elf *.map *.hex *.bin *.uf2

flash: firmware.bin
	${DFUUTIL} -D firmware.bin

firmware.elf: ${OBJ} ${OBJ}
	${LD} -Map=firmware.map --gc-sections -T${SDK}/script.ld -nostdlib -static -o $@ ${OBJ} ${OBJ}

.SUFFIXES: .c .s .S .o .elf .bin .asm .hex .uf2

.c.o:
.S.o:

.c.s:
	${CC} ${CPPFLAGS} -ffunction-sections -fdata-sections -S -o $@ $<

.S.s:
	${CPP} ${CPPFLAGS} -o $@ $<

.s.o:
	${AS} ${CPPFLAGS} ${ASFLAGS} -c -o $@ $<

.elf.asm:
	${OBJDUMP} -z -d $< >$@

.elf.hex:
	${OBJCOPY} -j .text -j .data -O ihex $< $@

.elf.bin:
	${OBJCOPY} -j .text -j .data -O binary $< $@

.elf.uf2:
	elf2uf2 $< $@
