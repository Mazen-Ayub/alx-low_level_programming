#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string will append to
 * @src: string will be add
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x, i;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
