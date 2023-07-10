#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that copies the string given as a parameter
 * @str: the string will be duplicated
 * Return: the pointer of an array of chars, NULL error
 */

char *_strdup(char *str)
{
	char *st;
	unsigned int x, i;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	st = (char *)malloc(sizeof(char) * (x + 1));

	if (st == NULL)
		return (NULL);

	for (i = 0; i <= x; i++)
		st[i] = str[i];

	return (st);
}
