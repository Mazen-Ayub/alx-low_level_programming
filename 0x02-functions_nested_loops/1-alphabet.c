#include "main.h"

/**
 *print_alphabet-prints the alphabet, in lowercase,followed by a new line (\n)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet++
	}

	_putchar ('\n');

}
