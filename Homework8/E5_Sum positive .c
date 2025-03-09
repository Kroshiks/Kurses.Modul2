#include <stdio.h>

#define N 10

void init_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		scanf("%d", &mas[i]);	
}

int max(int n, int* mas){
	
	int sum = 0;
	
	for(int i = 0; i < n; i++)
	{
		if (mas[i] > -1)	
			sum += mas[i];	
	}
	
	return sum;
}

int main()
{
	int mas[N] = {0};
	init_mas(N, mas);
	printf("%d", max(N, mas));
	return 0;
}
