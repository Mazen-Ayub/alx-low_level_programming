#include "main.h"
#include <stdlib.h>
/**
  *argstostr - a function that concatenates all the arguments of a program
  *@ac: the argument count
  *@av: the pointer to array of size a.
  *Return: the pointer of an array of char
  */
char *argstostr(int ac, char **av)
{
	int x, i, y, size;
	char *ar;

	size = 0;
	y = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		i = 0;
		while (av[x][i])
		{
			size++;
			i++;
		}
		size++;
		x++;
	}
	ar = malloc((sizeof(char) * size) + 1);
	if (ar == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		i = 0;
		while (av[x][i])
		{
			ar[y] = av[x][i];
			i++;
			y++;
		}
		ar[y] = '\n';
		y++;
		x++;
	}
	ar[y] = '\0';
	return (ar);
}
