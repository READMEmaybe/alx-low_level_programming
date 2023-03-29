#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i <= j / 2; j--, i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
