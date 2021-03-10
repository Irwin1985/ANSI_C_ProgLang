#include <stdio.h>

alltrim(char source[], char target[]);
int alen(char str[]);

main_18()
{
	int c, counter = 0;
	char input[100];
	char target[100];

	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			input[counter] = c;
			counter += 1;
		}
		else 
		{
			input[counter] = '\0';
			alltrim(input, target);
			printf("source:%s, size: %d\noutput:%s, size:%d\n", input, alen(input), target, alen(target));
			counter = 0;
		}
	}
	return 0;
}
alltrim(char source[], char target[])
{
	int index = alen(source);
	for (int i = index-1; i >= 0; i--) {
		if (source[i] == ' ' || source[i] == '\t')
		{
			index -= 1;
			continue;
		}
		else 
		{
			break;
		}
	}

	if (alen(source) != index) // son distintos -> copiar desde 0 -> index
	{
		int j = 0;
		for (j = 0; j < index; j++) {
			target[j] = source[j];
		}
		target[j] = '\0'; // end of character
	}
	else { // no cambiaron en nada. copiar desde cero hasta len()
		int j = 0;
		while ((target[j] = source[j]) != '\0') {
			j += 1;
		}
		target[j] = '\0';
	}
}

int alen(char str[])
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}