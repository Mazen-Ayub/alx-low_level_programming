#include <stdio.h>

/**
 * main - it prints the program name
 * @argc: the number of the arguments
 * @argv: the array of the arguments.
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
