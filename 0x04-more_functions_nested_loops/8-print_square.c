#include "main.h"

/**
 * print_square - Print square in the terminal
 * @n : The number of lines '#' characters that use per row and column
 * Return: Void
 */

void print_square(int n)
{
	int a, b;

	for (b = 0; b < n; b++)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
