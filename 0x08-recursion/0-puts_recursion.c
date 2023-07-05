#include "main.h"

/**
 * _puts_recursion - a function that print a string that followed by newline
 * @s: the string will be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
