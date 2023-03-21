#include "main.h"
/**
 * _isalpha - function that checks for alphabetic characters
 * @c: the character checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
