#include "main.h"
/**
 * print_alphabet - function that prints the alphabet
 * Return: 0 success
 */
void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
