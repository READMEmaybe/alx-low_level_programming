#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix
 * Return: the number of bytes in @s which consist only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
