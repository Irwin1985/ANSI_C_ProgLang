#include <stdio.h>
int ch3_len(const char str[]);
int binary_search(const int str[], int sough, int len);
main_3_1()
{
	int data[100];

	for (int i = 0; i < 100; i++)
	{
		data[i] = i;
	}
	// inicia la búsqueda binaria
	int result = binary_search(data, 2, 100);
	if (result) 
	{
		printf("Encontrado en el idx: %d", result);
	}
	else
	{
		printf("No lo puede encontrar :(");
	}
}
int binary_search(const int str[], int sough, int len)
{
	int mid = 0;
	int high = len - 1; // 99
	int low = 0; // 50 la primera vez.
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (sough < str[mid]) 
		{
			high = mid + 1;
			continue;
		}
		else if (sough > str[mid])
		{
			low = mid + 1;
			continue;
		}
		else
		{
			return mid;
		}
		return 0;
	}
}
int ch3_len(const char str[])
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}