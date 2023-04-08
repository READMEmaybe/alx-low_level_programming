#include "stdio.h"

/**
 * main - function that prints the number of arguments
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 success
 */

int main(int argc, __attribute((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
