#include <stdio.h>
#include <inttypes.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "Rus");
	int8_t num=0;
	
	while(1)
	{
		scanf("%" SCNd8, &num);
		if(num < 1 || num > 100)
			printf("Ошибка: недопустимое число, повторите попытку.\n");
		else 
		{
			for(int8_t i=1; i<=num; i++)
			{
				printf("%d %d %d\n", i, (int32_t)pow(i, 2), (int32_t)pow(i, 3));
			}
			return 0;
		}
	}
}


