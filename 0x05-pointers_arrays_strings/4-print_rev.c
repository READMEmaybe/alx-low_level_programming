#include "main.h"

/**
 * print_rev - function that prints string @s, in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
