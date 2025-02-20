#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
	uint32_t a = 0, b = 0, t = 0;
	scanf("%" SCNu32, &a);
	scanf("%" SCNu32, &b);
		
	while (b != 0) 
	{
			t = b;
			b = a % b;
			a = t;
	}
	printf("%d",a);
	return 0;
}


