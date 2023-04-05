#include "main.h"

/**
 * _pow_recursion - function that the value of @x raised to power of @y
 * @x: the base
 * @y: the exponent
 * Return: the power of @x or -1 if @y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (_pow_recursion(x, y - 1) * _pow_recursion(x, 1));
}
