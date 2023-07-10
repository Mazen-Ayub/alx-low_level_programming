#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in the string
 * @st: the string to evaluate
 * Return: the number of words
 */
int count_words(char *st)
{
	int flg, s, e;

	flg = 0;
	e = 0;

	for (s = 0; st[s] != '\0'; s++)
	{
		if (st[s] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			e++;
		}
	}

	return (e);
}
/**
 * **strtow - a function that splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings, NULL Error
 */
char **strtow(char *str)
{
	char **aout, *tmp;
	int x, y = 0, length = 0, word, z = 0, start, end;

	while (*(str + length))
		length++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	aout = (char **) malloc(sizeof(char *) * (word + 1));
	if (aout == NULL)
		return (NULL);

	for (x = 0; x <= length; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (z + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				aout[y] = tmp - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = x;
	}

	aout[y] = NULL;

	return (aout);
}
