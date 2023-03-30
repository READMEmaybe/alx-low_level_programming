#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, k, tmp;

	i = 0;
	j = n - 1;
	k = j / 2;
	while (i <= k)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
