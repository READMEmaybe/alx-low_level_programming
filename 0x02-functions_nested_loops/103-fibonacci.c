#include <stdio.h>
/**
 * main - function that prints the sum of the even-valued fibs
 * Return: 0 success
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	long int sum = b;
	int i;

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%li\n", sum);
	return (0);
}
