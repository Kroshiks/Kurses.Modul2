#include <stdio.h>
#include <inttypes.h>

int32_t abs(int32_t num)
{
		if( num < 0 ) 
			return -num;
		return num;
}

int main(void)
{
	int32_t a = 0;
	scanf("%" SCNd32, &a);
	printf("%d", abs(a));
	return 0;
}

