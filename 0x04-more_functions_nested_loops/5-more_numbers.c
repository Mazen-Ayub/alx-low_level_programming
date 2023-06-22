#include "main.h"

/**
 * more_numbers - Print numbers between 0 : 14 ten times
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}
}
