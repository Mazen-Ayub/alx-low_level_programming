#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: the string will be searched
 * @c: the char to be found
 * Return: the pointer to *s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;

	}

	if (*s == c)
	{
		return (s);
	}

return (0);
}
