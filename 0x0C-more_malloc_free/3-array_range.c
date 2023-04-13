#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the min value
 * @max: the max value
 * Return: pointer to the array or NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++, min++)
		array[0] = min;

	return (array);
}
