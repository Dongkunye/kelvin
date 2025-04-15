typedef unsigned int uint32_t;
#define TOHOST_ADDR 0x00017FF0

int get_timer()
{
	int cycle;
	asm volatile (
		"csrr %0, mcycle"
		: "=r" (cycle)		
	);

	return cycle;
}

int delay(int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		asm volatile (
			"nop"		
		);
	}
}


int main()
{
	int stamp0,stamp1;
	int consume_cycle;
	stamp0 = get_timer();
	delay(10000);
	stamp1 = get_timer();
	consume_cycle = stamp1 - stamp0;

	*(volatile uint32_t*)(TOHOST_ADDR) = consume_cycle;

	asm volatile("ebreak");
	return 0;
}
