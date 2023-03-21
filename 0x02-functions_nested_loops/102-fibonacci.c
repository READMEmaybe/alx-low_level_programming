#include <stdio.h>
int Fib(int n);
/**
 * main - function that prints the first 50 Fib numbers
 * Fib - gives the fib numbers
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%i, ", Fib(i));
	}
	printf("\n");
	return (0);
}

int Fib(int n)
{
	if (n == 1)
		return (n);
	return (n + Fib(n - 1));
}
