#include <stdio.h>

int main_17()
{
	char input[100];
	int c = 0, size_counter = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != '\n') {
			input[size_counter] = c;
			size_counter += 1;
		}
		else
		{
			input[size_counter] = '\0';
			if (size_counter >= 7) {
				printf("%s\n", input);
			}
			// reiniciamos el contador
			size_counter = 0;
		}
	}
}