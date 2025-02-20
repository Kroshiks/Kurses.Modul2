#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	uint32_t num = 0, mas[10] = {0};
	uint8_t i = 0;
	scanf("%" SCNu32, &num);
	
	do
	{
		mas[i] = num % 10;
		printf("%d", mas[i]);
	  num /= 10;
		i++;
	}while(num != 0 && i<10);
	
	return 0;
}

