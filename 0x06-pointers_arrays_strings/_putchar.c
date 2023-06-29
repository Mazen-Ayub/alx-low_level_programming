#include <unistd.h>

/**
 * _putchar - a function that writes the character c to stdout
 * @c: The character will be printed
 * Return: On success 1 and On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
