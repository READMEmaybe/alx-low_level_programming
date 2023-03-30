#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
