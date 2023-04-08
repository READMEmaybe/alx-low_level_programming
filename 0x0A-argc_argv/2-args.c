#include "stdio.h"

/**
 * main - function that prints all arguments
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
