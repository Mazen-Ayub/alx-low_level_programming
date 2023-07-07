#include <stdio.h>

/**
 * main - print the no. of arguments passed to program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
