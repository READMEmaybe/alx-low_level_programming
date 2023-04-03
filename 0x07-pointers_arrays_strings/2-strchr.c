#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: the character
 * @s: the string
 * Return: the first occurence of character @¢ or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
