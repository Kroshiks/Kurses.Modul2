#include <stdio.h>
#include <inttypes.h>

uint16_t mid(uint16_t a, uint16_t b)
{
	return (a + b) / 2;
}

int main(void)
{
	uint16_t a = 0, b = 0;

	scanf("%" SCNu16, &a);
	scanf("%" SCNu16, &b);

	printf("%d", mid(a, b));

	return 0;
}