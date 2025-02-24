#include <stdio.h>
#include <inttypes.h>

int32_t factorial(uint8_t num)
{			
	uint32_t fact = 1;
	
	for(uint8_t i = 1; i <= num; i++)
		fact *= i;
	return fact;
}

int main(void)
{
	uint8_t num = 0;
	
	scanf("%" SCNu8, &num);	
			
	printf("%d", factorial(num));
	
	return 0;
}
