#include <stdio.h>
#include <inttypes.h>


int main(int argc, char **argv)
{
	char str[100];
	
	scanf(" %[^\n]", str);
	
	for (uint8_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '.') 
			str[i] = '\0';  
		
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
	}
	
	printf("%s", str);
	return 0;
}

