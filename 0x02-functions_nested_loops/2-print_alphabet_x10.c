#include "main.h"

/**
 * print_alphabet_x10 - Check Main
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
