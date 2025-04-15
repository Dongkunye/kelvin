#CC=clang-17
#CC_FLAGS=--target=riscv32-none-eabi -march=rv32im_zicsr -nostdlib -T kelvin_tcm.ld
CC=riscv32-unknown-elf-gcc
CC_FLAGS=-march=rv32im_zicsr -nostdlib -T kelvin_tcm.ld

all:printf_example.elf


mcycle.elf: mcycle.s
	$(CC) $(CC_FLAGS) -o mcycle.elf mcycle.s kelvin_start.S
printf_example.elf: printf_example.c
	$(CC) $(CC_FLAGS) -o printf_example.elf printf_example.c kelvin_start.S

timer.elf: timer.c
	$(CC) $(CC_FLAGS) -o timer.elf timer.c kelvin_start.S

.PHONY: clean
clean:
	rm -rf *.elf
