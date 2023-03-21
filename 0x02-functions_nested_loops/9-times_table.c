#include "main.h"
/**
 * times_table - function that prints a 9 times table
 */
void times_table(void)
{
	int i = 0;
	int j, k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
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
