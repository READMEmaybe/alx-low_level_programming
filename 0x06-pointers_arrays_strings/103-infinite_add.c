#include "main.h"

/**
 * infinite_add - function that adds two numbers represented as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer for the result
 * @size_r: buffer size
 * Return: the result @r or return 0 if error occurs
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, m = 0, n = 0;

	while (n1[i]) i++;
	while (n2[j]) j++;

	if (i > size_r - 1 || j > size_r - 1)
		return (0);

	for (i--, j--; i >= 0 || j >= 0 || m; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		r[k] = n % 10 + '0';
		m = n / 10;
	}

	if (k > size_r - 1 || (k == size_r - 1 &&  m))
		return (0);
	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		n = r[i];
		r[i] = r[j];
		r[j] = n;
	}

	return (r);
}
