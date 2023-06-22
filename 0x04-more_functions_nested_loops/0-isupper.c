#include "main.h"


/**
 * _isupper - Check if char c represents an uppercase letter
 *
 * main - check the code
 *
 * @c: Int representingthe character
 *
 * Return: 1 if c is uppercase 0 anything else
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
