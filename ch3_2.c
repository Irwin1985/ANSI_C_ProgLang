#include <stdio.h>
int fibonacci(int n);
main_3_2() 
{
	for (int i = 1; i <= 35; i++)
	{
		printf("%d\n", fibonacci(i));
	}
}
int fibonacci(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}