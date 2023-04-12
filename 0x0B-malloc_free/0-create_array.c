#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: the size
 * @c: initial char
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}

	return (s);
}
