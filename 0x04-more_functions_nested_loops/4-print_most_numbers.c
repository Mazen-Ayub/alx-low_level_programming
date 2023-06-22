#include "main.h"

/**
 * print_most_numbers - Print numbers between 0 : 9 except 2 & 4
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
