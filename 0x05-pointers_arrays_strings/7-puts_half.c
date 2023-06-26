#include "main.h"

/**
 * puts_half - prints the second half of the string.
 *@str: string will be use.
 */


void puts_half(char *str)
{
	int len, x, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	x = (len - 1) / 2;

	for (i = x + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
