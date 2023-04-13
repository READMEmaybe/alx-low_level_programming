#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of each element
 * Return: pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *initial;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	initial = (char *) p;
	for (i = 0; i < (nmemb * size); i++)
		initial[i] = 0;

	return (p);
}
