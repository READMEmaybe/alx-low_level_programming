#include "function_pointers.h"

/**
 * array_iterator - for each element of @array executes function @action
 * @array: the array
 * @size: the size of the array
 * @action: the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
