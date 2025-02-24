#include <stdio.h>
#include <inttypes.h>

int32_t func(int16_t num)
{			
	if(num < -2)
		return 4;
	else if (num >= 2)
		return num * num + 4 * num + 5;
	else 
		return num * num;
}

int main(void)
{
	int16_t num[10], max = 0;
	int8_t i = 0;
	
	do
	{
		scanf("%" SCNd16, &num[i]);	
			
		max = func(num[i]) > max ? func(num[i]) : max;
			
	}while(num[i++] != 0);
	
	printf("%d", max);
	
	return 0;
}

