/*
* Pedir una linea al usuario
* mantener el rastro de la línea más larga.
*/
#include <stdio.h>
int get_line(char s[]);
void copy_array(char longest[], char input[]);
int size_array(char array[]);
int main_16()
{
	char input[1000];
	char longest[1000];
	int line = 0, max = 0;
	while (1)
	{
		line = get_line(input);	
		if (line > max) {
			max = line;
			copy_array(longest, input);
		}
		printf("Larga: \"%s\"\n", longest);
		printf("Size: %d\n", size_array(longest));
	}
	return 0;
}
void copy_array(char longest[], char input[]) {
	int i = 0;
	while ((longest[i] = input[i]) != '\0') {
		i++;
	}
}
int get_line(char input[])
{
	int ch = 0, counter = 0;
	while ((ch = getchar()) != EOF) 
	{
		if (ch == '\n')
		{
			input[counter] = '\0';
			break;
		}
		else {
			input[counter++] = ch;
		}
	}
	return counter;
}

int size_array(char array[])
{
	int i = 0;
	while (array[i] != '\0')
	{
		i++;
	}
	return i;
}