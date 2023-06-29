#include "main.h"

/**
 * cap_string - capitalizes all words of the string
 * @s: string will be changed
 *
 * Return: the capitalized string
 */

char *cap_string(char *s)
{
	int x, i;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; s[x] != '\0'; x++)
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;

		for (i = 0; i < 13; i++)
		{
			if (s[x] == spe[i])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
