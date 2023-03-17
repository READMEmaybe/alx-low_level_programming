#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int ALPHABET = 'A';
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
