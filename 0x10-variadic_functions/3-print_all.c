#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - function that prints a char
 * @args: args
 */
void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - function that prints an int
 * @args: args
 */
void print_int(va_list args)
{
	int n;

	n = va_arg(args, int);
	printf("%d", n);
}

/**
 * print_float - function that prints a float
 * @args: args
 */
void print_float(va_list args)
{
	float n;

	n = va_arg(args, double);
	printf("%f", n);
}

/**
 * print_string - function that prints a string
 * @args: args
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	printf("%s", s ? s : "(nil)");
}

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";
	printer_t formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != formats[j].type[0])
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			formats[j].print(args);
			separator = ", ";
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
