#include <stdio.h>
#include <inttypes.h>

void perevod(uint16_t N, uint8_t P)
{			
	uint16_t num[20] = {0};
	uint8_t i = 0;
	
	while (N > 0)
		{
			num[i] = N % P;
			N = N / P;
			i++;
		}
		
	for(uint8_t j = i; j > 0; j--)
		printf("%d", num[j - 1]);
}

int main(void)
{
	uint16_t N = 0;
	uint8_t P = 0;
	
	scanf("%" SCNu16, &N);	
	scanf("%" SCNu8, &P);	
	
	if (N == 0) 
	{
    printf("0");
    return 0;
	}
	
	perevod(N, P);
	
	return 0;
}

