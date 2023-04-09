#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - function that adds two positive numbers
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, j, n, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0, n = strlen(argv[i]); j < n; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("%d\n", 0);
	return (0);
}
