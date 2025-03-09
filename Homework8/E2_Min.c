#include <stdio.h>

void init_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		scanf("%d", &mas[i]);	
}

int min(int n, int* mas){
	
	float min = *mas;
	
	for(int i = 0; i < n; i++)
		if (mas[i] < min)
			min = mas[i];
		
	return min;
}

int main(int argc, char **argv)
{
	
	int mas[5] = {0};
	init_mas(5, mas);
	printf("%d", min(5, mas));
	return 0;
}

