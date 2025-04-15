CC=clang-17
CC_FLAGS=--target=riscv32-none-eabi -march=rv32im_zicsr -nostdlib -T kelvin_tcm.ld

mcycle.elf: mcycle.s
	$(CC) $(CC_FLAGS) -o mcycle.elf mcycle.s kelvin_start.S

.PHONY: clean
clean:
	rm -rf *.elf
