#include <stdio.h>

#define N 10

int k = -1;

void init_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		scanf("%d", &mas[i]);	
}

int max(int n, int* mas){
	
	int max = 0, j = 0;
	
	for(int i = 0; i < n; i++)
	{
		if ((mas[i] > max) && (i != k))
		{
			max = mas[i];
			j = i;
		}	
	}
	k = j;
	
	return max;
}

int main()
{
	int mas[N] = {0};
	init_mas(N, mas);
	printf("%d", max(N, mas) + max(N, mas));
	return 1;
}

