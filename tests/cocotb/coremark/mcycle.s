.global main
main:
#ebreak
csrr t0, mcycle

lui t3, 1000
loop:
	add t3, t3, -1
	beqz t3, loop

csrr t1, mcycle
sub t2, t1, t0
li t1, 0x0
li t4, 0xface

li a0, 0x17FF0
sw t1, 0(a0)
sw t2, 0(a0)
sw t4, 4(a0)

mpause
