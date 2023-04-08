#include "stdio.h"
#include "stdlib.h"

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
