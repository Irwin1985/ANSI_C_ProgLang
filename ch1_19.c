#include <stdio.h>
#define MAX_LINE 1000
reverse(char source[], char target[]);
int len(char str[]);
main_19() {
	int ch = 0, counter = 0;
	char input[MAX_LINE];
	char my_str[MAX_LINE];

	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
		{
			input[counter] = ch;
			counter += 1;
		}
		else
		{
			input[counter] = '\0';
			reverse(input, my_str);
			printf("%s\n", my_str);
			counter = 0;
		}
	}
}
reverse(char source[], char target[])
{
	int index = 0;
	for (int i = len(source) - 1; i >= 0; i--)
	{
		target[index] = source[i];
		index += 1;
	}
	target[index] = '\0';
}
int len(char str[])
{
	int len = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}
	return len;
}