#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = 0, prev = 0;

	if (!array)
		return (-1);

	jump = sqrt(size);

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

	for (i = prev; i <= size - 1 && i <= prev + jump; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
