#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * close_f - function that closes @file.
 * @file: the file to close.
*/
void close_f(int file)
{
	int c;

	c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * check_98 - function that handles the read error.
 * @r: value to check.
 * @file: the file.
*/
void check_98(int r, char *file)
{
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int fp_from, fp_to, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	check_98(fp_from, argv[1]);
	r = read(fp_from, buffer, BUFFER_SIZE);
	check_98(r, argv[1]);
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (r > 0)
	{
		check_98(r, argv[1]);
		w = write(fp_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(fp_from, buffer, BUFFER_SIZE);
		fp_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	close_f(fp_from);
	close_f(fp_to);
	return (0);
}
