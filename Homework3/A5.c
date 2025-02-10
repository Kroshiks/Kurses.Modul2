#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0, b=0, c=0;
	float aver;
	scanf("%d%d%d", &a, &b, &c);
	aver = (float)(a+b+c)/3;
	printf("%.2f", aver);
	return 0;
}

