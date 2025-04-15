#CC=clang-17
#CC_FLAGS=--target=riscv32-none-eabi -march=rv32im_zicsr -nostdlib -T kelvin_tcm.ld
RCC=riscv32-unknown-elf-gcc
CC_FLAGS=-march=rv32im_zicsr -nostdlib -T kelvin_tcm.ld
mcycle.elf: mcycle.s
	$(RCC) $(CC_FLAGS) -o mcycle.elf mcycle.s kelvin_start.S



.PHONY: clean
clean:
	rm -rf *.elf
