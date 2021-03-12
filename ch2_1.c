#include <stdio.h>
#define MAX_LEN 1000
// Convertir de mayúsculas a minúsculas
void to_lowercase(const char source[], char target[]);
int str_len(const char str[]);
int is_upper_case(char str);
main_2_1()
{
	int ch = 0, index = 0;
	char input[MAX_LEN], result[MAX_LEN];

	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
		{
			input[index] = ch;
			index += 1;
		}
		else
		{
			input[index] = '\0';
			index = 0;
			to_lowercase(input, result);
			printf("output: %s\n", result);
		}
	}
}
void to_lowercase(const char source[], char target[])
{
	int i = 0, len = str_len(source);
	for (i = 0; i < len; i++)
	{
		if (i == 0)
		{
			target[i] = source[i];
		}
		else
		{
			if (is_upper_case(source[i]))
			{
				target[i] = source[i] + 'a' - 'A';
			}
			else
			{
				target[i] = source[i];
			}
		}
	}
	target[i] = '\0';
}
int str_len(const char str[])
{
	int index = 0;
	while (str[index] != '\0')
	{
		index += 1;
	}
	return index;
}
int is_upper_case(char str)
{
	return 'A' <= str && str <= 'Z';
}