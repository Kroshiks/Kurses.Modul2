#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0, b=0;
	scanf("%d%d", &a, &b);
	
	if(a<=b)
		printf("%d %d", a, b);
	else
		printf("%d %d", b, a);
		
	return 0;
}

