#include <stdio.h>
#include <inttypes.h>

 
int main( void ){
	uint32_t n = 0, i = 0, f1 = 1, f2 = 1, m = 0;
	scanf("%" SCNu32, &n);
	
	if (n == 1)
		printf("1");
	else if (n != 0)
	{ 
		printf("1 1 ");       
		for (i = 2; i < n; ++i)
		{
			m = f1 + f2;
			f1 = f2;
			f2 = m;
			printf("%d ", f2);
		}
	}
	return 0;
}



