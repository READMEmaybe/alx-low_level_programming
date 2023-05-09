#include "main.h"

/**
 * read_textfile - a function ...
 * @filename: the list
 * @letters: the number
 *
 * Return: 1 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fp, rp;
	ssize_t n;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fp = open (filename, O_RDONLY);
	if (fp == -1)
	{
		free(buffer);
		return (0);
	}
	n = read (fp, buffer, letters);
	if (n == -1)
	{
		n = 0;
		close(fp);
	}
	n = write(STDOUT_FILENO, buffer, n);
	if (n == -1)
		n = 0;
	return (n);
}
