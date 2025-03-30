#include <stdio.h>
#define SIZE 20

void sort_even_odd(int n, int a[]){

	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			for(int j = i; j > 0; j--)
			{
				if(a[j - 1] % 2 != 0)
				{
					int temp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = temp;
				}
				else
					break;
			}
		}
	}
}

void input_array(int size, int a[]){
	
	for(int i =0; i < size; i++)
		scanf("%d", &a[i]);
}

void print_array(int size, int a[]){

	for(int i=0; i<size; i++)
		printf("%d ", a[i]);
}

int main(int argc, char **argv){
	int a[SIZE];
	
	input_array(SIZE, a);
	sort_even_odd(SIZE, a);
	print_array(SIZE, a);
	return 0; 
}
