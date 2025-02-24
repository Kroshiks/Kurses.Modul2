#include <stdio.h>
#include <inttypes.h>

int32_t sum(uint16_t num)
{			
	uint16_t sum = 0;
	
	for(uint8_t i = 1; i <= num; i++)
		sum += i;
	return sum;
}

int main(void)
{
	uint16_t num = 0;
	
	scanf("%" SCNd16, &num);	
			
	printf("%d", sum(num));
	
	return 0;
}

