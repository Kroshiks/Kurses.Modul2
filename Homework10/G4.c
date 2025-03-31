#include <stdio.h>

void ascii(signed char *word, int *count){
	int i = 0, len = 0;
	
	while(word[i])
	{
		word[i++];
		len++;
	}
	
	for(int j = 0; j < len; j++)
	{
		count[(int)word[j]]++;
	}
}

int main(int argc, char **argv)
{
	signed char word1[100], word2[100];
	FILE* f;
	int count1[256] = {0}, count2[256] = {0};
	int flag = 0, res[256] = {0};

	f = fopen("input.txt", "r");
	fscanf(f, "%s %s", word1, word2);
	fclose(f);

	ascii(word1, count1);
	ascii(word2, count2);

	for (int i = 0; i < 256; i++)
	{
        if (count1[i] == 1 && count2[i] == 1)
        {
            res[i] = 1;
            flag = 1;
        }
    }
	
	f = fopen("output.txt", "w");

	if (flag)
	{
        for (int i = 0; i < 256; i++)
        {
            if (res[i])
            {
                fprintf(f, "%c ", (char)i);
            }
        }
    }
    
	fclose(f);
	return 0;
}

