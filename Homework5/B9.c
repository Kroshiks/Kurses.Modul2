#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
	int32_t num = 0, N = 0;
	uint8_t i = 0, k = 0;
	scanf("%" SCNd32, &num);
	
	while(num != 0)
	{
		N = num%10;
		N % 2 == 0 ? i++ : 0;
		num /= 10;
		k++;
	}

	printf(k == i ? "YES" : "NO");
		
	return 0;
}

