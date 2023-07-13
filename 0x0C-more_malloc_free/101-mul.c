#include "main.h"
#include <stdio.h>

/**
 * main - a function that multiplies two positive numbers
 * @argc: no. of arguments
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
unsigned long mul;
int x, y;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > 57 || argv[x][y] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
