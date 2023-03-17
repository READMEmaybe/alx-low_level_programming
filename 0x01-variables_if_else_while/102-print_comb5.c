#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int number1 = 0;
	int number2;

	while (number1 <= 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			putchar(48 + number1 / 10);
			putchar(48 + number1 % 10);
			putchar(' ');
			putchar(48 + number2 / 10);
			putchar(48 + number2 % 10);
			if (number1 != 98 || number2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			number2++;
		}
		number1++;
	}
	putchar('\n');
	return (0);
}
