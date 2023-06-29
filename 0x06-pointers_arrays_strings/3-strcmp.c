#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string will be compared
 * @s2: the second string will be compared
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		x = *s1 - *s2;

	return (x);
}
