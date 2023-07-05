#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x reised to power of y
 * @x: the value will be raised
 * @y: the power
 * Return: the result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
