#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - function that prints a buffer
 * @b: the buffer
 * @size: number of bytes to print
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = 0; j < 10 && i + j < size; j++)
		{
			printf("%02x ", (unsigned char)b[i + j]);
		}
		for (; j < 10; j++)
		{
			printf("   ");
		}
		printf(" ");
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (isprint(b[i + j]))
			{
				printf("%c", b[i + j]);
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
}
