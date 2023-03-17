#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int ALPHABET = 'A';
	int alphabet = 'a';

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
