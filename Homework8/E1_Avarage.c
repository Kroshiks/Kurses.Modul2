#include <stdio.h>

void init_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		scanf("%d", &mas[i]);	
}

float avarage(int n, int* mas){
	
	float sum = 0;
	
	for(int i = 0; i < n; i++)
		sum += mas[i];
		
	return sum/5;
}

int main(int argc, char **argv)
{
	int mas[5] = {0};
	init_mas(5, mas);
	printf("%.3f", avarage(5, mas));
	return 0;
}

