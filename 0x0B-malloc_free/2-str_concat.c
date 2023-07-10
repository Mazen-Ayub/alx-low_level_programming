#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string will be concatenated
 * @s2: the second string will be concatenated
 * Return: a pointer of an array of chars, NULL error
 */
char *str_concat(char *s1, char *s2)
{
	char *st;
	unsigned int x, i, y, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (i = 0; s2[i] != '\0'; i++)
		;

	st = malloc(sizeof(char) * (x + i + 1));

	if (st == NULL)
	{
		free(st);
		return (NULL);
	}

	for (y = 0; y < x; y++)
		st[y] = s1[y];

	lim = i;
	for (i = 0; i <= lim; y++, i++)
		st[y] = s2[i];

	return (st);
}
