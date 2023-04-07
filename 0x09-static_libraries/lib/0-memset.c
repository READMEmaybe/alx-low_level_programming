#include "main.h"

/**
 * _memset - function that fills memory with a constant byte @b
 * @s: the string
 * @b: the byte to set
 * @n: the number of bytes to be replaced
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
