#include <stdio.h>
#include <inttypes.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "Rus");
	int16_t a=0, b=0;
	
	while(1)
	{
		scanf("%" SCNd16, &a);
		scanf("%" SCNd16, &b);
		if(a>b)
			printf("Ошибка: недопустимые числа, повторите попытку.\n");
		else 
		{
			for(int16_t i=a; i<=b; i++)		
				printf("%d ", (int32_t)pow(i, 2));		
			return 0;
		}
	}
}


