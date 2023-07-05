#include "main.h"

int real_prime(int x, int i);

/**
 * is_prime_number - a function that says if an integer is a prime no. or not
 * @n: the number will be evaluated
 * Return: (1) if n is a prime number, (0) if not a prime no.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (real_prime(n, n - 1));
}

/**
 * real_prime - a function that calculates if a number is prime recursively
 * @x: the number will be evaluated
 * @i: the iterator no.
 * Return: (1) if n is prime no., (0) if not prime no.
 */
int real_prime(int x, int i)
{
	if (i == 1)
		return (1);

	if (x % i == 0 && i > 0)
		return (0);

	return (real_prime(x, i - 1));
}
