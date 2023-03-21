#include "main.h"
/**
 * print_times_table - function that prints a n times table
 * @n: n times table
 */
void print_times_table(int n)
{
	int i = 0;
	int j, k;

	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			k = i * j;
			if (j == 0)
				_putchar(k + '0');
			if (k < n && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
