#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
