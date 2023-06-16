#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers
 * Return: 0
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar(48 + d);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
