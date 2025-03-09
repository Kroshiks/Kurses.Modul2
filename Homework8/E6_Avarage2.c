#include <stdio.h>

#define N 12

void init_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		scanf("%d", &mas[i]);	
}

float avarage(int n, int* mas){
	
	float sum = 0;
	
	for(int i = 0; i < n; i++)
		sum += mas[i];
		
	return sum/N;
}

int main(int argc, char **argv)
{
	int mas[N] = {0};
	init_mas(N, mas);
	printf("%.2f", avarage(N, mas));
	return 0;
}

