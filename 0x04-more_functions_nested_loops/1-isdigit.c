#include "main.h"

/**
 * _isdigit - Check for a digit (0 : 9)
 * @c: Int that will be checked
 *
 * Return: 1 is a digit, 0 else
 */

int _isdigit(int c)
{
	if (c >= 44 && c <= 57)
		return (1);

	return (0);
}

