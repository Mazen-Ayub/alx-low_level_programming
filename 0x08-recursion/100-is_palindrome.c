#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @i: the string will calculate the length
 * Return: the length of the string
 */

int _strlen_recursion(char *i)
{
	if (!*i)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++i));
}

/**
 * p - palindrome
 * @s: the pointer to string
 * @l: the position
 * Return: 0
 */

int p(char *s, int pos)
{
	if (pos < 1)
	{
		return (1);
	}

	if (*s == *(s + pos))
	{
		return (p(s + 1, pos - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p(s, len - 1));
}
