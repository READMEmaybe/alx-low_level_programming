#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument value
 * Return: pointer to the string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			s[k] = av[i][j];
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}

	return (s);
}
