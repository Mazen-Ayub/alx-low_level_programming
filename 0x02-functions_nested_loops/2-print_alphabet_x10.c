#include "main.h"

/**
 * print_alphabet_x10 - Check Main
 * Description :uses _putchar function to print alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;


	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(i);

		_putchar('\n');
	}
}
