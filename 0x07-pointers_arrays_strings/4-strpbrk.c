#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches for a string for any of a set of bytes
 * @s: the string to be search
 * @accept: the string contains the bytes that look for
 * Return: the pointer to byte in (s) or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
