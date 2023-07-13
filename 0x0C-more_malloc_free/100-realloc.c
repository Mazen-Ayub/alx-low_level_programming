#include <stdlib.h>
#include "main.h"
/**
  * _realloc - a function that reallocates a memory block using malloc and free
  * @ptr: the pointer to memory previously allocated by malloc
  * @old_size: the size in bytes allocated for ptr.
  * @new_size: the size in bytes of new memory block.
  * Return: a pointer to the newly allocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
			return (p);
		for (x = 0; x < old_size; x++)
			p[x] = *((char *)ptr + 1);
		free(ptr);
	}
	return (p);
}
