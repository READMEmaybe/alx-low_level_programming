#include "main.h"

/**
 * square_root - a helper function that finds the square root
 * @i: the square root
 * @n: the number
 * Return: sqrt of @n or -1 if there's no natural sqrt
 */
int square_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: sqrt of @n or -1 if there's no natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square_root(n, 0));
}
