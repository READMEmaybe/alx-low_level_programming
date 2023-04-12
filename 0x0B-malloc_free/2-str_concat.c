#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len, len_s1 = 0, len_s2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
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
