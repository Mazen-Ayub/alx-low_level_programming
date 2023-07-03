#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring
* @s: the string will be evalutate
* @accept: the string that containing list of chatacters to match with s
* Return: the no. of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	char *i = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				x++;
				break;
			}

		if (!(*--accept))
		{
			break;
		}
		accept = i;
		}
	}
	return (x);
}
