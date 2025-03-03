#include <stdio.h>
#include <inttypes.h>

void print(uint16_t N){
	
	if (N <= 0)
		return;
	
	print(N - 1);
	printf("%d ", N); 
}

int main(int argc, char **argv){
	uint16_t N = 0;
	scanf("%" SCNu16, &N);
	print(N);
	return 0;
}

