#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits
 */
int main(void)
{
	int c;
	int d;
	int i = 0;

	while (i < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != i && i < d && d < c)
				{
					putchar('0' + i);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + i != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
