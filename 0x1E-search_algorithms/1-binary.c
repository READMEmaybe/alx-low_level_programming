#include "search_algos.h"
/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index of the subarray
 * @right: rightmost index of the subarray
 * @value: value to search for
 * Return: first index where value is located, -1 if value is not present
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i = 0;
	size_t mid = 0;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_recursive(array, left, mid - 1, value));
	else
		return (binary_search_recursive(array, mid + 1, right, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	
	return (binary_search_recursive(array, 0, size - 1, value));
}
