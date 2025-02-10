#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0, b=0, c=0;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d+%d+%d=%d\n", a, b, c, a+b+c);
	printf("%d*%d*%d=%d", a, b, c, a*b*c);
	return 0;
}

