#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
	int16_t num = 0, sum = 0;
	scanf("%" SCNd16, &num);
	
	while(num != 0)
	{
		sum += num%10;
		num /= 10;
	}

	printf("%" PRId16, sum);
		
	return 0;
}

