#include <stdio.h>
/**
 * main - create 2 pairs of number
 * Description: Print all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, d;

	for (i = 0; i <= 99; i++)
	{
		for (d = i; d <= 99; d++)
		{
			if (d != i)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(d / 10 + 48);
				putchar(d % 10 + 48);

				if (i * 100 + d != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
