#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	uint32_t num = 0;
	
	scanf("%" SCNu32, &num);
	
	for (uint32_t i = 10; i <= num; i++)
	{
		uint16_t sum = 0, pr = 1;
		uint32_t N = i;
	
		while (N > 0)
		{
			sum += N % 10;
			pr *= N % 10;
			N /= 10;	
		}
		
		if(sum == pr)
			printf("%d ", i);
	}
	return 0;
}

