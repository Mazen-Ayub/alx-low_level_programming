#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenate n bytes of a string to other str
 * @s1: the string to append to
 * @s2: the string to concatenate from
 * @n: the n bytes to concat from string 2
 * Return: a pointer ot concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int x = 0, i = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		st = malloc(sizeof(char) * (len1 + n + 1));
	else
		st = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!st)
		return (NULL);

	while (x < len1)
	{
		st[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		st[x++] = s2[i++];

	while (n >= len2 && x < (len1 + len2))
		st[x++] = s2[i++];

	st[x] = '\0';

	return (st);
}
