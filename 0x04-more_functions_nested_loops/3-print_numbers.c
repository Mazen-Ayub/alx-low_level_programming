#include "main.h"

/**
 * print_numbers - Print numbers between 0 : 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}
