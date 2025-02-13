#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int a=0, num=0, max=0;
	scanf("%d", &a);
	for(int i=0; i<3; i++)
	{
		num = (a/(int)pow(10,i))%10;
		if(num > max)
			max = num;
	}
	printf("%d", max);
	return 0; 
}
