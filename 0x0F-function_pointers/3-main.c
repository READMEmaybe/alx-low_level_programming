#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that preforms simple operations
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int (*op_f)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op_f = (*get_op_func(argv[2]));
	b = atoi(argv[3]);

	if (!op_f || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_f(a, b));

	return (0);
}
