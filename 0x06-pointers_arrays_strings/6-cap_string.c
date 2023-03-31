#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: the string
 * Return: the modified string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char seperator[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == s[i - 1])
						s[i] -= 32;
				}
			}
		}
		i++;
	}

	return (s);
}
