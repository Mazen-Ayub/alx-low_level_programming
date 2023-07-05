#include "main.h"

/**
 * _strlen_recursion - a fuction that returns the length of a string
 * @s: the string will be calculated
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1))
}
