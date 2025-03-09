#include <stdio.h>

#define N 10

void init_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		scanf("%d", &mas[i]);	
}

void print_mas(int n, int* mas){
		
	for(int i = 0; i < n; i++)
		printf("%d ", mas[i]);	
}

void rotate(int n, int* mas){
		
	int temp = 0;
	
	 for (int i = 0; i < n / 4; i++) 
	 {
        temp = mas[i];
        mas[i] = mas[(n / 2) - 1 - i];
        mas[(n / 2) - 1 - i] = temp;
    }
    
    temp = 0;

    for (int i = n / 2; i < n / 2 + n / 4; i++) 
    {
        temp = mas[i];
        mas[i] = mas[n - 1 - (i - n / 2)];
        mas[n - 1 - (i - n / 2)] = temp;
	}
	
}

int main(int argc, char **argv)
{
	int mas[N] = {0};
	init_mas(N, mas);
	rotate(N, mas);
	print_mas(N, mas);
	return 0;
}

