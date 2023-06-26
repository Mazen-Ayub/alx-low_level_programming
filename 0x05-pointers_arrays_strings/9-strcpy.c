#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including (\0).
 *@src: the pointer.
 *@dest: pointer to the buffer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int x, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
