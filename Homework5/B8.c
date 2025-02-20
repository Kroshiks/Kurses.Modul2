#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int32_t num = 0, mas[10] = {0};
	uint8_t i = 0, flag = 0;
	scanf("%" SCNd32, &num);
	
	while(num != 0 && i<10)
	{
		mas[i] = num % 10;
	  num /= 10;
		i++;
	}

	for(uint8_t j = 0; j<i; j++)
	{
		if(mas[j] == 9)
		{
			flag ++;
		}
	}
	
	printf(flag == 1 ? "YES" : "NO");
	return 0;
}

