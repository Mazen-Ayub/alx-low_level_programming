#include "main.h"

/**
 * rot13 - a function that encode a string in rot13
 * @s: the string will be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int x, i;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (s[x] == a[i])
			{
				s[x] = b[i];
				break;
			}
		}
	}
	return (s);
}
