#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
