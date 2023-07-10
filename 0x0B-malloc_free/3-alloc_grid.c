#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that creates a two dimensional array of ints
 * @width: the width of the array
 * @height: the height of the array
 * Return: the pointer of an array of integers, NULL error
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, i;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));
		if (arr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (i = 0; i < width; i++)
			arr[x][i] = 0;

	return (arr);
}
