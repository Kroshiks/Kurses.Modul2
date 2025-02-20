#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
	int32_t num = 0, N = 0;
	uint8_t i = 0, k = 0, j = 0;
	scanf("%" SCNd32, &num);
	
	do
	{
		N = num%10;
		N % 2 == 0 ? i++ : j++;
		num /= 10;
		k++;
	}while(num > 0);

	printf("%d %d", i, j);
		
	return 0;
}

