#include "main.h"

/**
 * _isalpha - check the code for Alphabetic Characters
 *
 * @c: is c an integer argument
 *
 * Return: 1 or 0 (Failure)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
