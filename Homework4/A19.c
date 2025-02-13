#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0, b=0, c=0;
	
	scanf("%d%d%d", &a, &b, &c);
	
	if(a >= b+c || b >= a+c || c >= b+a)
		printf("NO");
	else
		printf("YES");
	
	return 0;
}

