#include "main.h"
/**
 * _memset - it fills a block of memory with a specific value
 * @s: the starting address of memory will be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 * Return: the changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
