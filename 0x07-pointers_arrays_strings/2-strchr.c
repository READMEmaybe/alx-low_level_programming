#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: the character
 * @s: the string
 * Return: first occurrence of the character @c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
