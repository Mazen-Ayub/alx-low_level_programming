#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints sum of 2 diagonals of square matrix
 * @a: the square metrix of integers
 * @size: the size fo the matrix
 */

void print_diagsums(int *a, int size)
{
	int x;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size * x) + x];
		sum2 += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
