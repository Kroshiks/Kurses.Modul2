#include <stdio.h>

int main(int argc, char **argv)
{
	signed char string[1000];
	FILE* f;
	int i = 0;	

	f = fopen("input.txt", "r");
	fscanf(f, "%[^\n]", string);
	fclose(f);

	while(string[i])
	{
		if(string[i] == 'A')
			string[i] = 'B';
		else if(string[i] == 'B')
			string[i] = 'A';
		else if(string[i] == 'a')
			string[i] = 'b';
		else if(string[i] == 'b')
			string[i] = 'a';
			
		string[i++];
	}

	f = fopen("output.txt", "w");
	fprintf(f, "%s", string);
	fclose(f);
	
	return 0;
}

