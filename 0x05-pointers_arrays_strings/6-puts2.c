#include "main.h"

/**
 * puts2 - prints every character of the string.
 *@str: the string will be use.
 */

void puts2(char *str)
{
	int x, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
