#include <stdio.h>

int main(int argc, char **argv)
{
	int a=0, b=0, c=0;
	scanf("%d%d%d", &a, &b, &c);
	
	if(a<b && b<c)
		printf("YES");
	else
		printf("NO");
	return 0;
}

