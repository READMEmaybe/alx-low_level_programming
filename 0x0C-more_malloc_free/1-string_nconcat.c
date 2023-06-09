#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from @s2
 * Return: pointer to the new concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	if (!(n >= len_s2))
		len_s2 = n;
	len = len_s1 + len_s2;

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		s[i] = s1[i];
	for (j = 0; j < len_s2; j++, i++)
		s[i] = s2[j];
	s[len] = '\0';

	return (s);
}
