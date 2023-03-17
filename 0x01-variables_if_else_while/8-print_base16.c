#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int number = 48;
	int alphabet = 97;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	while (alphabet <= 102)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
