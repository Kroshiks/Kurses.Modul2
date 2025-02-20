#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	uint32_t num = 0, mas[10] = {0};
	uint8_t i = 0, max = 0, min = 9;
	scanf("%" SCNu32, &num);
	
	do
	{
		mas[i] = num % 10;
	  num /= 10;
		i++;
	}while(num != 0 && i<10);

	for(uint8_t j = 0; j<i; j++)
	{
		if(mas[j] > max)
			max = mas[j];
		
		if(mas[j] < min)
			min = mas[j];
	}
	
	printf("%d %d", min, max);
	return 0;
}

