#include "main.h"

/**
 * _memset - a function that fill the memory with a constant byte
 * @s: the memory area will be filled 
 * @b: the data will be coppied
 * @n: the no. of times will coppied
 * Return: the pointer to the memory *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	
	return (s);
}
