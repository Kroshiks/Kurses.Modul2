#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	uint32_t num = 0, mas[10] = {0};
	uint8_t i = 0, flag = 0;
	scanf("%" SCNu32, &num);
	
	while(num != 0 && i<10)
	{
		mas[i] = num % 10;
	  num /= 10;
		i++;
	}

	for(uint8_t j = 0; j<i; j++)
	{
		if(mas[j] > mas[j+1])
		{
			flag ++;
		}
	}
	
	printf(flag == i ? "YES" : "NO");
	return 0;
}

