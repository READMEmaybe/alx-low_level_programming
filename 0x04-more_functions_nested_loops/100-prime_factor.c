#include <stdio.h>
#include <math.h>

/**
 * main - function that finds and prints the largest prime factor,
 * Return: 0 success
 */

int main(void)
{
	unsigned long n = 612852475143, i, j;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	j = 0;
	for (i = 3; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			if (i > j)
			{
				j = i;
			}
			n = n / i;
		}
	}

	if (n > j)
	{
		j = n;
	}
	printf("%lu\n", j);

	return (0);
}
