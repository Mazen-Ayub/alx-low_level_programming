#include "main.h"

/**
 * _sqrt_recursion - a fuction that returns the natural square root of a no.
 * @n: the number will be calculated the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - a function that recurses to find the natural square root of a number
 * @n: the number to calculate the sqaure root of
 * @i: the iterator
 * Return: the result of square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if ((i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
