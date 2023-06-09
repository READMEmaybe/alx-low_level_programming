#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to use from @src
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
