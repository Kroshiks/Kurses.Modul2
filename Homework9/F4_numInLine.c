#include <stdio.h>

void print_digit(char* s){
	int count = 0;
	int size = 0;
	int k = 0;
	int a[100];

	while(s[k])
	{
		if((s[k] >= '0') && (s[k] <= '9'))
		{
			a[size] = s[k] - '0';
			size ++;
		}
		k++;
	}
	
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
	char s[100], c;
    int i=0;
    while( (c=getchar())!='\n' )
        s[i++]=c;
    s[i]='\0';
    
	print_digit(s);
	
	return 0;
}

