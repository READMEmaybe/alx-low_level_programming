#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; (n - 1) >= 0 && i < n; n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
