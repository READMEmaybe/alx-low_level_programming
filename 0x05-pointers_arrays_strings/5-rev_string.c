#include "main.h"

/**
 * rev_string - function that reverses string @s
 * @s: the string
 */

void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (s[i])
		i++;
	i--;
	for (j = 0; i >= 0 && j < i; i--, j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
