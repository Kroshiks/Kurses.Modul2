#include <stdio.h>

int is_two_same(int size, int a[]){

	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(a[i] == a[j])
				return 1;
		}
	}

	return 0;
}

int main(int argc, char **argv)
{
	int a[200];
	int size = 99;
	for(int i = 0;i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	is_two_same(size,a) ? printf("YES") : printf("NO");
	return 0;
}

