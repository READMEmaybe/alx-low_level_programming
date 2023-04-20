#include "function_pointers.h"

/**
 * array_iterator - for each element of @array executes function @action
 * @array: the array
 * @size: the size of @array
 * @action: the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
