#include "main.h"

/**
 * rev_string - reverses the string.
 *
 *@s: the string will be reversed.
 */

void rev_string(char *s)
{
	char tmp;
	int x;
	int len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len2 = len1 - 2;

	for (x = 0; x < len1 / 2; len1++)
	{
		tmp = s[x];
		s[x] = s[len2];
		s[len2--] = tmp;
	}
}
