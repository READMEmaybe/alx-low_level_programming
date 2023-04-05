#include "main.h"

/**
 * prime_checker - function that checks if an integer is a prime number
 * @n: the integer
 * @i: int
 * Return: 1 if prime number or 0 otherwise
 */

int prime_checker(int n, int i)
{
	if (i > 1)
	{
		if (n % i == 0)
			return (0);
		else
			return (prime_checker(n, i - 1));
	}
	return (1);
}

/**
 * is_prime_number - function that returns 1 if @n is a prime number
 * @n: the integer
 * Return: 1 if prime number or 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (prime_checker(n, n - 1));
}
