#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t num = 0, i = 0;
	
	while(1)
	{
		scanf("%" SCNd16, &num);
		if(num % 2 == 0 && num != 0)
			i++;
		else if(num == 0)
			break;
	}
	
	printf("%d", i);

	return 0;
}

