#include <stdio.h>
#define MAX_LINE 1000

int max;
char line[MAX_LINE];
char longest[MAX_LINE];

int getline(void);
void copy(void);

main_20()
{
	int len;
	extern int max;
	extern char longest[];
	max = 0;

	while ((len = getline()) > 0)
	{
		if (len > max)
		{
			max = len;
			copy();
		}
	}
	if (max > 0)
	{
		printf("%s", longest);
	}
	return 0;
}
int getline(void)
{
	int c = 0, i = 0;
	extern char line[];
	while ((c = getchar()) != EOF)
	{
		if (c != '\n')
		{
			line[i] = c;
			i += 1;
			continue;
		}
		else
		{
			line[i] = '\0';
			break;
		}
	}
	return i;
}

void copy(void)
{
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
	{
		i += 1;
	}
	longest[i] = '\0';
}