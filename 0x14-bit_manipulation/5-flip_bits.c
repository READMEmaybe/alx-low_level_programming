#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 *	to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of changes done.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int counter = 0;

	for (i = sizeof(n) * 8; i > 0; i--)
		if ((n >> i & 0x01) != (m >> i & 0x01))
			counter++;
	return (counter);
}
