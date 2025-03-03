#include <stdio.h>
#include <inttypes.h>

uint16_t  print(uint16_t N){
	
	if (N <= 0)
		return 0;
	
	return N + print(N - 1);
	 
}

int main(int argc, char **argv){
	uint16_t N = 0;
	
	scanf("%" SCNu16, &N);
	printf("%d ", print(N));
	
	return 0;
}

