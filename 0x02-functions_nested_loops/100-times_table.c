#include "main.h"
/**
 * print_times_table - function that prints a n times table
 * @n: n times table
 */
void print_times_table(int n)
{
	int i = 0;
	int j, k;

	if (n >= 0 && n <= 15)
	{
		while (i < n + 1)
		{
			j = 0;
			while (j < n + 1)
			{
				k = i * j;
				if (j == 0)
					_putchar(k + '0');
				if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
