#include "main.h"

/**
 * print_line - Print a straight line in the terminal
 * @n : The number of '_' character that will be printed
 * Return: Void
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
