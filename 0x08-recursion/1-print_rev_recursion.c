#include "main.h"

/**
 * _print_rev_recursion - a function that prints the string in reverse
 *
 * @s: the string will be printed
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
