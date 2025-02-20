#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t num = 0, i = 0;
	
	while(1)
	{
		scanf("%" SCNd16, &num);
		if(num)
			i++;
		else
			break;
	}
	
	printf("%d", i);

	return 0;
}

