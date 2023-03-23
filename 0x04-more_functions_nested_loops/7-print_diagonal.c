#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line @n times
 * @n: number of diagonal lines
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
