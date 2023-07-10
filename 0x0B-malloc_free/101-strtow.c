#include <stdlib.h>
#include "main.h"

/**
 * count_word - a helper function to count the number of words in a string
 * @s: the string to evaluate
 * Return: the number of words
 */
int count_word(char *s)
{
	int flag, i, r;

	flag = 0;
	r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			r++;
		}
	}

	return (r);
}
/**
 * **strtow - a function that splits a string into words
 * @str: thestring to split
 * Return: the pointer to an array of strings, NULL Error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, length = 0, words, a = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= length; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (a)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - a;
				y++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = x;
	}

	matrix[y] = NULL;

	return (matrix);
}
