#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory to copy to
 * @src: memory to copy from
 * @n: number of bytes to copy
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]
	}

	return (dest);
}
