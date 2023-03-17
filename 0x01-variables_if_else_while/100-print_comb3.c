#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int digit1 = 48;
	int digit2 = 49;
	int x = digit2;

	while (digit1 <= 56)
	{
		while (digit2 <= 57)
		{
			putchar(digit1);
			putchar(digit2);
			if (digit1 != 56 || digit2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit1++;
		x++;
		digit2 = x;
	}
	putchar('\n');
	return (0);
}
