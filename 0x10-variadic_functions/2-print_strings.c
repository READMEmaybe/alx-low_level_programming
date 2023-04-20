#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between strings
 * @n: the number of strings passed into the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 1; i <= n; i++)
	{
		char *str = va_arg(strings, char *);

		printf("%s", str ? str : "(nil)");
		if (i != n && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(strings);
}
