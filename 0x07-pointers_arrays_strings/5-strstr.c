#include "main.h"
#include <stdio.h>

/**
* _strstr - a function that locates a substring
* @haystack: the string to search in it
* @needle: the substring to look for
* Return: the pointer to the begining of located substring or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int x, i;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[x + i] != needle[i])
				break;
		}
		if (!needle[i])
			return (&haystack[x]);
	}

	return (NULL);
}
