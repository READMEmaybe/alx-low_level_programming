#include "main.h"

/**
 * append_text_to_file - function that appends text at the
 *	end of a file.
 * @filename: the name of the file.
 * @text_content: is the NULL terminated string to add.
 *
 * Return: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, len;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
		;
		if (write(fp, text_content, len) == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
