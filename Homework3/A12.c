#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int a=0, sum=0;
	scanf("%d", &a);
	for(int i=0; i<3; i++)
		sum += (a/(int)pow(10,i))%10;
	printf("%d", sum);
	return 0;
}

