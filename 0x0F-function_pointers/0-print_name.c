#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name
 * @f: the function that prints @name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
