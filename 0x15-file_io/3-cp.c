#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024


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

int main(int argc, char *argv[])
{
	int fp_from, fp_to, r, w, c;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = read(fp_from, buffer, BUFFER_SIZE);
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (r > 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
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
