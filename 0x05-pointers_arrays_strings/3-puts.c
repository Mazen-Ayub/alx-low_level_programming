#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 *
 *@str: the string will be print
 *
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
