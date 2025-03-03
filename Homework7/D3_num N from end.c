#include <stdio.h>
#include <inttypes.h>

void print(uint16_t N){
	
	if (N <= 0)
		return;

	printf("%d ", N%10); 
	print(N/10);
}

int main(int argc, char **argv){
	
	uint16_t N = 0;
	scanf("%" SCNu16, &N);
	
	if(N == 0)
		printf("%d ", N); 
	else
		print(N);
		
	return 0;
}

