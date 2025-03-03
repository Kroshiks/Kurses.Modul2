#include <stdio.h>
#include <inttypes.h>

void print(uint16_t N){
	
	if (N < 2)
	{
		printf("%d", N);	
		return;
	}

	print(N/2);
	printf("%d", N%2); 
	
}

int main(int argc, char **argv){
	
	uint16_t N = 0;
	
	scanf("%" SCNu16, &N);
	print(N);
		
	return 0;
}

