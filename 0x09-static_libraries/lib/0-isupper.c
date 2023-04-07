#include "main.h"
/**
 * _isupper - function if character is uppercase
 * @c: the character checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
