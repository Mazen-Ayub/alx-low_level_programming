#include "main.h"
#include <stdio.h>

/**
 * main - print Fizz of multiples of 3,Buzz for multiples of 5,FizzBuzz of both
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (x != 100)
		{
			printf(" ");
		}
		n++
	}
	printf("\n");
}
