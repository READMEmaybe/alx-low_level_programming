#include <stdio.h>
/**
 * main - function that prints the first 98 Fib numbers
 * Return: 0 success
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;

printf("%li, %li, ", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf("%li", c);
		if (i != 97)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
