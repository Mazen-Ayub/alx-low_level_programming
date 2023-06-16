#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block of code
 * Description: Print all possible combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int c;
	int i = 0;

	while (i < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (i != c && i < c)
			{
				putchar('0' + i);
				putchar('0' + c);

				if (c + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
