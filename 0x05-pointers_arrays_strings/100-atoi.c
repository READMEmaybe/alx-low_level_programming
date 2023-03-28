#include "main.h"

/**
 * _atoi - function that converts string @s to an integer
 * @s: the string
 * Return: the int or if no numbers in string return 0
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int sign = 0;
	int len = 0;
	int number = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && j == 0)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			k = s[i] - '0';
			if (sign % 2 != 0)
				k *= -1;
			number = number * 10 + k;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9']
					break;
			j = 0;
		}
		i++;
	}

	if (j == 0)
		return (0);
	return (number);
}
