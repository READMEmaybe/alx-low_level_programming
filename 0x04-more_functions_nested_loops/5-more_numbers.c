#include "main.h"

/**
 * more_numbers - function that prints the numbers, from 0 to 14, 10 times.
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, k = 0; j <= 14; j++, k++)
		{
			if (j == 10)
				k = 0;
			if (j > 9)
			{
				_putchar(1 + '0');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
