#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - a function that calculates the sum of all its parameters
* @n: the number of arguments
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (x = 0; x < n; x++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
