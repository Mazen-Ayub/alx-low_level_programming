#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the minimum number of coins to make change for an amount of
 * money
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: (0) success, (1) error
 */

int main(int argc, char *argv[])
{
	int no, x, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	no = atoi(argv[1]);
	res = 0;

	if (no < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && no >= 0; x++)
	{
		while (no >= coins[x])
		{
			res++;
			no -= coins[x];
		}
	}
	printf("%d\n", res);
	return (0);
}
