#include "main.h"

/**
 * main - a function that multiplies two positive numbers
 * @argc: no. of arguments
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
unsigned long mult;
int x, i;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (x = 1; x < argc; x++)
	{
		for (i = 0; argv[x][i] != '\0'; i++)
		{
			if (argv[x][i] > 57 || argv[x][i] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mult = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mult);
return (0);
}
