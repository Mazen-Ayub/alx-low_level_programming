#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed
 * @n: the number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int x;

va_start(list, n);

for (x = 0; x < n; x++)
{
	printf("%d", va_arg(list, int));

	if (separator != NULL && x != (n - 1))
	{
		printf("%s", separator);
	}
}

putchar('\n');

va_end(list);
}
