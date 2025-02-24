#include <stdio.h>
#include <inttypes.h>

int32_t is_happy_number(uint16_t num)
{			
	uint16_t sum = 0, pr = 1;
	
	while (num > 0)
		{
			sum += num % 10;
			pr *= num % 10;
			num /= 10;	
		}
		
		return sum == pr ? 1 : 0;

}

int main(void)
{
	uint16_t num = 0;
	
	scanf("%" SCNu16, &num);	
			
	printf(is_happy_number(num) ? "YES" : "NO");
	
	return 0;
}

