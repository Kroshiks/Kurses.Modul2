#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0, b=0, c=0, d=0, e=0, min=0, max=0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	if(a>=b && a>=c && a>=d && a>=e)
		max = a;
	else if(b>=a && b>=c && b>=d && b>=e)
		max = b;
	else if(c>=b && c>=a && c>=d && c>=e)
		max = c;
	else if(d>=b && d>=c && d>=a && d>=e)
		max = d;
	else if(e>=b && e>=c && e>=d && e>=a)
		max = e;
		
	if(a<=b && a<=c && a<=d && a<=e)
		min = a;
	else if(b<=a && b<=c && b<=d && b<=e)
		min = b;
	else if(c<=b && c<=a && c<=d && c<=e)
		min = c;
	else if(d<=b && d<=c && d<=a && d<=e)
		min = d;
	else if(e<=b && e<=c && e<=d && e<=a)
		min = e;
		
	printf("%d", max+min);
	return 0;
}

