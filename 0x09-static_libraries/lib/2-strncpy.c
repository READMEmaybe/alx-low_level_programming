#include "main.h"

/**
 * _strncpy - function that copies string from @src to @dest
 * @src: source string
 * @dest: destination string
 * @n: most number of bytes to copy
 * Return: pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
