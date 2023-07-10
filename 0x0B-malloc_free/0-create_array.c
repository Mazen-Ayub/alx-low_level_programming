#include "main.h"
#include <stdlib.h>

/**
 * create_array - a functions that creates an array of chars
 * @size: the size of the array will be created
 * @c: the chat will be initialze an array c
 * Return: the pointer of an array of chars, NULL error
 */

char *create_array(unsigned int size, char c)
{
	char *char;
	unsigned int x;

	if (size == 0)
		return (NULL);

	char = malloc(sizeof(c) * size);

	if (char == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		char[x] = c;

	return (char);
}
