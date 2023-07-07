#include "main.h"

/**
 * get_bit - function that returns the value of a vit at a given index.
 * @n: the number that has the bit
 * @index: the index of the bit
 *
 * Return: the value of the bit, owtherwise -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 0x01);
}
