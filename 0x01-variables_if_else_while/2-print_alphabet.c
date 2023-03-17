#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
