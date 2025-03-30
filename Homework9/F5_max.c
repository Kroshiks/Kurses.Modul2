#include <stdio.h>

int find_max_array(int size, int a[]){
	int max = a[0];
	
	for(int i = 0;i < size; i++)
	{
		if(a[i] > max)
			max = a[i];
	}

	return max;
}

int main(int argc, char **argv)
{
	int a[200];
	int size = 99;
	for(int i = 0;i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	find_max_array(size,a);
	return 0;
}

