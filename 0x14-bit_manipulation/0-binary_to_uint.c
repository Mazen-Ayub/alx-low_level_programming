#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that convert a binary number to an unsigned int
 * @b: a char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int totalNum, power;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (power = 1, totalNum = 0, length--; length >= 0; length--, pow *= 2)
	{
		if (b[length] == '1')
			totalNum += power;
	}

	return (totalNum);
}
