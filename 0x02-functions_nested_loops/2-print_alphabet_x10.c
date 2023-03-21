#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int alphabet = 'a';

	while (i < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	_putchar('\n');
	i++;
	}
}
