LDFLAGS = -Wl,-Map=firmware.map
CFLAGS = -O0 -g -Wall -Wextra -std=c99 -pedantic
OBJ = main.o
SDK = ..
include ${SDK}/Makefile.mk

all: firmware.bin firmware.asm
flash: flash.dfuutil
