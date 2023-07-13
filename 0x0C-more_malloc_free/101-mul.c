#include "main.h"

/**
 * main - a fun. multiplies two positive numbers
 * @argc: no. of  arguments
 * @argv: array of args
 * Return: (0)
 */

int main(int argc, char *argv[])
{
unsigned long mul;
int x, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (x = 1; x < argc; x++)
	{
		for (j = 0; argv[x][j] != '\0'; j++)
		{
			if (argv[x][j] > 57 || argv[x][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
