#include "main.h"
/**
 * wildcmp - a function that compares two strings
 * @s1: the poiner to the normal string
 * @s2: the pointer to the string containing "*"
 *
 * Return: (1) if identical, else (0)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
