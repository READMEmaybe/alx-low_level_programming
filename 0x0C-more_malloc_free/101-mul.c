#include "main.h"
#include <stdlib.h>

/**
 * _isdigits - function that checks for digits
 * @av: pointer to arguments
 * Return: 0 if digit 1 if not
 */

int _isdigits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * error - error function
 */

void error(void)
{
	int i;
	char error[] = "Error\n";

	for (i = 0; error[i]; i++)
		_putchar(error[i]);
	exit(98);
}

/**
 * _print - prints the string while removing any leading zeros
 * @s: string
 * @len: lenght of string
 */
void _print(char *s, int len)
{
	int i, j;

	for (i = 0, j = 0; i < len; i++)
	{
		if (s[i] != '0')
			j = 1;
		if (j || i == len - 1)
			_putchar(s[i]);
	}

	_putchar('\n');
	free(s);
}


/**
 * mult - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: index of num
 * @dest: destination
 * @dest_index: index of destination
 * Return: pointer to @dest or NULL
 */
char *mult(char n, char *num, int num_index, char *dest, int dest_index)
{
	int mul, rem1 = 0, add, rem2 = 0;

	for (; num_index >= 0; num_index--, dest_index--)
	{
		mul = (n - '0') * (num[num_index] - '0') + rem1;
		rem1 = mul / 10;
		add = (dest[dest_index] - '0') + (mul % 10) + rem2;
		rem2 = add / 10;
		dest[dest_index] = add % 10 + '0';
	}
	for (rem2 += rem1; dest_index >= 0 && rem2; dest_index--)
	{
		add = (dest[dest_index] - '0') + rem2;
		rem2 = add / 10;
		dest[dest_index] = add % 10 + '0';
	}
	if (rem2)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success or exit status 98 on failure
 */

int main(int argc, char *argv[])
{
	int len1, len2, len, i, j;
	char *product;

	if (argc != 3 || _isdigits(argv))
	{
		error();
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	len = len1 + len2;
	product = malloc((len + 1) * sizeof(char));
	if (product == NULL)
	{
		error();
	}
	for (i = 0; i < len; i++)
		product[i] = '0';
	product[i] = '\0';
	for (i = len2 - 1, j = 0; i >= 0; i--, j++)
	{
		mult(argv[2][i], argv[1], len1 - 1, product, (len - 1) - j);
		if (product == NULL)
		{
			free(product);
			error();
		}
	}
	_print(product, len);
	return (0);
}
