#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
	uint16_t num = 0;
	
	scanf("%" SCNu16, &num);
	
	for (uint16_t i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
				printf("NO");
				return 0;
		}
	}
	
	if(num == 1)
		printf("NO");
	else
		printf("YES");
		
	return 0;
}

