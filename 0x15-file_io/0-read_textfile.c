#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX stdout
 * @filename: the file
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fp;
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
	free(buffer);
	close(fp);
	return (n);
}
