#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: the string
 * Return: the modified string
 */

char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (letters[j] == s[i])
				s[i] = leet[j];
		}
	}

	return (s);
}
