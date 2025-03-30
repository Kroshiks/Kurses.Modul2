#include <stdio.h>

int separate(int* a, int number){
	int i = 0;
	
	do
	{
		a[i] = number % 10;
		number = number / 10;
		i++;
	}while(number > 0);

	return i;
}

void analyze(int* a, int size){
	int count = 0;

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

	for(int i = 0; i < size;i++)
	{
			if(i < size - 1 && a[i] == a[i + 1])
			{
				count++;
			}
			else
			{
				printf("%d %d\n", a[i], count + 1);
				count = 0;
			}	
	}
}

int main(int argc, char **argv)
{
	int number;
	scanf("%d", &number);

	int a[100];
	int size = separate(a, number);
	analyze(a,size);
	
	return 0;
}

