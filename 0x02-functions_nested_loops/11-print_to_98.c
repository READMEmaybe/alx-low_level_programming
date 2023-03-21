#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all numbers from @n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
		printf("%i, ", i);
		i++;
	}
}
