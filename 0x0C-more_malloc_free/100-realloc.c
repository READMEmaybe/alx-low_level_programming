#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to old memory
 * @old_size: old memory size
 * @new_size: size of the new memory
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	old_ptr = ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		free(ptr);
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);

	return (new_ptr);
}
