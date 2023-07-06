#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of 0's and 1's
 *
 * Return: The unsigned integer, or 0 if any error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}

	return (j);
}
