#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all numbers from @n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
