#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the numbers of integers passed into the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(numbers);
}
