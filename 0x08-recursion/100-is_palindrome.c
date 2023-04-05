#include "main.h"

/**
 * _strlen - function that calculates the lenght if a string
 * @s: the string
 * Return: the lenght
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome_checker - function that checks for palindroms
 * @s: the string
 * @i: index i
 * @len: lenght
 * Return: 1 if @s is palindrome and 0 if not
 */

int palindrome_checker(char *s, int i, int len)
{
	if (s[i] == s[len])
	{
		if (i > len / 2)
			return (1);
		return (palindrome_checker(s, i + 1, len - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if string @s is a palindrom
 * and 0 if not
 * @s: the string
 * Return: 1 if @s is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, _strlen(s) - 1));
}
