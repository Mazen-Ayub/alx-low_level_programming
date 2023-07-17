#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function tha returns the length of a string
 * @s: string will be  evaluated
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - it copies the string pointed to by src
 * @dest: the pointer to the buffer in which we copy the string
 * @src: a string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, y;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (y = 0; y < len; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: the name of the dog
 * @age: tthe age of the dog
 * @owner: the owner of the dog
 *
 * Return: the pointer to the new dog (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	_strcpy(n_dog->name, name);
	_strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
