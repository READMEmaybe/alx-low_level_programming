#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of string @s to uppercase
 * @s: the string
 * Return: the modified string
 */

char *string_toupper(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
