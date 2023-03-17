#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}
