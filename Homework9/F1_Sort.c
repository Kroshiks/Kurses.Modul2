#include <stdio.h>
#define SIZE 20

void sort_array(int size, int a[]){

	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void input_array(int size, int a[]){
	
	for(int i = 0; i < size; i++)
		scanf("%d", &a[i]);
}

void print_array(int size, int a[]){

	for(int i = 0; i < size; i++)
		printf("%d ", a[i]);
}

int main(int argc, char **argv){
	int a[SIZE];
	
	input_array(SIZE, a);
	sort_array(SIZE, a);
	print_array(SIZE, a);
	return 0; 
}
