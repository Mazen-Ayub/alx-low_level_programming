#include "main.h"

/**
 * _memcpy - a function that coppies the memory area
 * @dest: the destination to the memory area
 * @src: the memory area will copy from
 * @n: the no. of bytes will copy
 * Return: the pointer to *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}


	return (dest);
}
