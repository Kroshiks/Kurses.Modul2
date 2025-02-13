#include <stdio.h>

int main(int argc, char **argv)
{
	float k=0, b=0, x1=0, x2=0, y1=0, y2=0;
	
	while(1)
	{
		scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
		if(x2 == x1)
			printf("Error: division by zero.\n");
		else
		{
			k = (y2-y1)/(x2-x1);
			b = y1 - k*x1;
			printf("%.2f %.2f", k, b);
			return 0;
		}
	}
}

