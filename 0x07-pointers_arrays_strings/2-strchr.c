#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: the character
 * @s: the string
 * Return: first occurrence of the character @c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
