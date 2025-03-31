#include <stdio.h>

int main(int argc, char **argv)
{
	int N = 0, j = 2, k = 0;
	FILE* f;
	char c = 'A';
	
	f = fopen("input.txt", "a+");
	fscanf(f, "%d", &N);
	fclose(f);

	f = fopen("output.txt", "w");

	for(int i = 1; i <= N; i++)
	{
		if(i % 2 == 0)
		{
			fprintf(f, "%d", j);
			j += 2;
			if(j == 10)
				j = 2;
		}
		else
		{
			fprintf(f, "%c", c + k);
			k++;
		}
	}
	fclose(f);
	return 0;
}

