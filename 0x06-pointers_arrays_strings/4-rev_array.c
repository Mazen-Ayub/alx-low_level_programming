#include "main.h"

/**
 * reverse_array - afunction that reverses an array of integers
 * @a:  the array will be reversed
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int x, i, tmp;

	i = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[i];
		a[i--] = tmp;
	}
}
