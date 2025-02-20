#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t num = 0;
	uint8_t k = 0;
	scanf("%" SCNd16, &num);
	
	while(num != 0)
	{
		num /= 10;
		k++;
	}
	
	printf(k == 3 ? "YES" : "NO");
	
	return 0;
}

