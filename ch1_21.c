#include <stdio.h>
#define MAX_LENGTH 1000
int strlen(const char str[]);
main_21()
{
	char input[MAX_LENGTH];
	int ch = 0, counter = 0;
	printf(">> ");
	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
		{
			input[counter] = ch;
			counter += 1;
		}
		else
		{
			input[counter] = '\0'; // null terminator char.
			counter = 0;
			printf("len(\"%s\") = %d\n", input, strlen(input));
			printf(">> ");
		}
	}
}

int strlen(const char str[])
{
	int len = 0;
	while (str[len] != '\0') 
	{
		len += 1;
	}
	return len;
}