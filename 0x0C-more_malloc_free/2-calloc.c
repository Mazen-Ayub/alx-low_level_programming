#include <stdlib.h>
#include "main.h"
/**
  * _calloc - a fuction that allocates memory for an array
  * @nmemb: the number of elements in array
  * @size: the size of elements of array
  * Return: the pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
	{
		*((char *)(ptr) + x) = 0;
	}

	return (ptr);
}
