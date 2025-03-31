#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 0;
	FILE* f;
	signed char c, s[100], last;
	
	f = fopen("input.txt", "r");
	
	while((c = fgetc(f)) != EOF)
	{
		if(c != '\n')
		s[n++] = c;
	}
	s[n] = '\0';
	last = s[n-1];
	fclose(f);

	f = fopen("output.txt", "w");

	for(int i = 0; i < n; i++)
	{
		if(last == s[i] && i != n-1)
			fprintf(f, "%d ", i);
	}
	fclose(f);
	return 0;
}

