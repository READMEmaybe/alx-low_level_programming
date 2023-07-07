#include "main.h"

/**
 * clear_bit - function that sets the value of a bit at @index to 0.
 * @n: pointer to the number
 * @index: the index of the bit
 *
 * Return: 1 on success, -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(*n) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
