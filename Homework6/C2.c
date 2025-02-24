#include <stdio.h>
#include <inttypes.h>

int32_t power(int32_t num, uint8_t P)
{
		int32_t pr = 1;
		
		for(uint8_t i = 0; i < P; i++)
			pr *= num;
			
		return pr;
}

int main(void)
{
	int32_t N = 0;
	uint8_t P = 0;
	
	scanf("%" SCNd32, &N);
	scanf("%" SCNu8, &P);
	
	printf("%d", power(N, P));
	
	return 0;
}

