#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: the character
 * @s: the string
 * Return: first occurrence of the character @c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
