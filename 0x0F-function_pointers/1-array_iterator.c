#include "function_pointers.h"

/**
 * array_iterator - for each element of @array executes function @action
 * @array: the array
 * @size: the size of the array
 * @action: the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
