#include <stdio.h>
#include <ctype.h>

main_2_2()
{
	char input = 0, index = 0;
	
	while ((input = getchar()) != EOF)
	{
		if (input != '\n')
		{
			printf("is_digit = %d\n", isdigit(input));
			printf("is_alpha = %d\n", isalpha(input));
		}
	}
}