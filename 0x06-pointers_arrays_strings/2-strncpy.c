#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @src: the source string
 * @dest: the destination string
 * @n: the number of bytes will be copied
 * Return: a pointer to the result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
