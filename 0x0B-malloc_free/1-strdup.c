#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that dups a string
 * @str: the source
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i + 1] = '\0';

	return (dup);
}
