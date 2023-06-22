#include "main.h"

/**
 * print_diagonal - Print diagonal line in terminal
 * @n : The number of charachter  '\'
 * Return: Void
 */

void print_diagonal(int n)
{
	int x, space;

	for (x = 0; x < n; x++)
	{
		for (space = 0; space < x; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
