#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the multiplication of two numbers
 * @argc: the number of arguments
 * @argv: the array of the arguments
 * Return: 0 if recieve, 1 if not recieve
 */

int main(int argc, char *argv[])
{
	int x, i, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	i = atoi(argv[2]);
	mul = x * i;

	printf("%d\n", mul);

	return (0);
}
