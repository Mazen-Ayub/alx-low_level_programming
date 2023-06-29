#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letter to uppercase
 *@s: the string will be changes
 * Return: the resulting string in lowercase
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
	}
	return (s);
}
