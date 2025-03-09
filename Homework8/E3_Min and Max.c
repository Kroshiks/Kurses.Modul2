#include <stdio.h>
 
#define N 10

void init_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		scanf("%d", &mas[i]);	
}

void min(int n, int* mas){
	
	int min = *mas, j = 0;
	
	for(int i = 0; i < n; i++)
		if (mas[i] < min)
		{
			min = mas[i];
			j = i;
		}
		
	printf("%d %d", j + 1, min);

}

void max(int n, int* mas){
	
	int max = 0, j = 0;
	
	for(int i = 0; i < n; i++)
		if (mas[i] > max)
		{
			max = mas[i];
			j = i;
		}
		
	printf("%d %d ", j + 1, max);
}

int main(int argc, char **argv)
{
	
	int mas[N] = {0};
	init_mas(N, mas);
	max(N, mas);
	min(N, mas);
	return 0;
}
