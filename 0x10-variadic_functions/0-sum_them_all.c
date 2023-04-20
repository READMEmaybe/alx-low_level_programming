#include "variadic_functions.h"

/**
 * sum_them_all - function that adds all @n number of arguments
 * @n: number of arguments
 *
 * Return: the sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
