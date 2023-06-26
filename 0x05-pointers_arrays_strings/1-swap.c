#include "main.h"

/**
 * swap_int - swap values of two integers.
 *
 * @a: point to first integer
 * @b: point to second integer
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
