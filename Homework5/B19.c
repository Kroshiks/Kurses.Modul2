#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
	uint32_t num = 0, N = 0, ten = 0;

	scanf("%" SCNu32, &num);
	
	do
	{
		N = num%10;		
		ten += N;
		num /= 10;
	}while(num > 0);

	printf(ten == 10 ? "YES" : "NO");
		
	return 0;
}

