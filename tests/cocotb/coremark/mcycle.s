.global main
main:
#ebreak
csrr t0, mcycle

lui t3, 1000
loop:
	add t3, t3, -1

csrr t1, mcycle
sub t2, t1, t0
mpause
