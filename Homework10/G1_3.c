#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 0;
	FILE* f;
	signed char c, s[100];
	
	f = fopen("input.txt", "a+");
	
	while((c = fgetc(f)) != EOF)
	{
		if(c != '\n')
		s[n++] = c;
	}
	s[n] = '\0';
	fclose(f);

	f = fopen("output.txt", "w");

	for(int i = 0; i < 3; i++)
	{
		fprintf(f, "%s", s);
		if(i<2)
			fprintf(f, ", ");
	}
	fprintf(f, " %d", n);
	fclose(f);
	return 0;
}

