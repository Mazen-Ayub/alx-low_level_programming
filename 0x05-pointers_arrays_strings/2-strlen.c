#include "main.h"

/**
 * _strlen return the length of a string
 *
 * @s: the string that calculated
 * Return: length of a the string.
 */

int _strlen(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
