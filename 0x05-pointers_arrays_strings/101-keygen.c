#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - genertate passwords.
 *
 * Return: 0.
 */

int main(void)
{
	int ascii = 2772, x = 0, i, random;
	char pass[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		pass[x] = random;
		ascii -= random;
		x++;
	}
	if (ascii > 0)
		pass[x] = ascii;
	else
	{
		x--;
	}
	

	for (i = 0; i <= x; i++)
	{
		printf("%c", pass[i]);
	}
	return (0);
}
