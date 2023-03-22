#include <stdio.h>
/**
 * main - function that prints the first 98 Fib numbers
 * Return: 0 success
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c, k, c1, c2, a1, a2, b1, b2;
	int i;

printf("%lu, %lu, ", a, b);
	for (i = 2; i < 92; i++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	k = 1000000000;
	c1 = c / k, a1 = a / k, b1 = b / k;
	c2 = c % k, a2 = a % k, b2 = b % k;
	for (i = 91; i < 97; i++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		printf("%lu%lu", c1 + (c2 / k), c2 % k);
		if (i != 96)
			printf(", ");
		a1 = b1, a2 = b2;
		b1 = c1, b2 = c2;
	}
	printf("\n");
	return (0);
}
