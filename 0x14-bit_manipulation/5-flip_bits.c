#include "main.h"

/**
 * flip_bits - a fun that number of bits you would need to flip
 * for getting from one number to another
 * @n: a parameter
 * @m: a destiny
 * Return: nflips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, nflips = 0;
	unsigned long int i = sizeof(unsigned long int) * 8;

	for (x = 0; x < i; x++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
