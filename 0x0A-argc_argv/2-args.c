#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
