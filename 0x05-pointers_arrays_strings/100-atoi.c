#include "main.h"

/**
 * _atoi - convert string into integer.
 *
 * @s: the string will be used.
 *
 * Return: int converted from string.
 */

int _atoi(char *s)
{
	int sign = 1;
	int x = 0;
	unsigned int rest = 0;

	while (!(s[x] <= '9' &&  s[x] >= '0') && s[x] != '0')
	{
		if (s[x] == '-')
		{
			sign *= -1;
		}
		x++;
	}

	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		rest = (rest * 10) + (s[x] - '0');
		x++;
	}
	rest *= sign;
	return (rest);
}
