#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two positive no.
 * @argc: the number of arguments
 * @argv: the array of the arguments
 * Return: if contain symbols (1), otherwise 0
 */

int main(int argc, char *argv[])
{
	int no, dig, sum = 0;

	for (no = 1; no < argc; no++)
	{
		for (dig = 0; argv[no][dig]; dig++)
		{
			if (argv[no][dig] < '0' || argv[no][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[no]);
	}
	printf("%d\n", sum);
	return (0);
}
