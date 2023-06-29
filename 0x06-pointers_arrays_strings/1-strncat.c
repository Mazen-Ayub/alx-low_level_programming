#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @src : the source string
 * @dest: the destination string
 * @n: the number of bytes
 * Return: pointer to the resulting string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	x = 0;
	i = 0;

	while (dest[x] != '\0')
		x++;

	while (src[i] != '\0' && i < n)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';

	return (dest);
}
