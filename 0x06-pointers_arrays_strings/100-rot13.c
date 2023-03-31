#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: the string
 * Return: the modified string
 */

char *leet(char *s)
{
	int i, j;
	char letters[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (letters[j] == s[i])
				s[i] = rot13[j];
		}
	}

	return (s);
}
