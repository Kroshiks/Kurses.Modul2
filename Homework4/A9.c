#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0, b=0, c=0, d=0, e=0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if(a>=b && a>=c && a>=d && a>=e)
		printf("%d", a);
	else if(b>=a && b>=c && b>=d && b>=e)
		printf("%d", b);
	else if(c>=b && c>=a && c>=d && c>=e)
		printf("%d", c);
	else if(d>=b && d>=c && d>=a && d>=e)
		printf("%d", d);
	else if(e>=b && e>=c && e>=d && e>=a)
		printf("%d", e);
	return 0;
}

