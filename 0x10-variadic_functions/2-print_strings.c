#include "variadic_functions.h"

/**
 * print_strings - a function that print strings
 * @separator: the string separator
 * @n: the quantity of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int x;
char *str;

va_start(list, n);

for (x = 0; x < n; x++)
{
	if (separator != NULL && x != 0)
		printf("%s", separator);
	str = va_arg(list, char *);
	printf("%s", (str == NULL) ? "(nil)" : str);
}

printf("\n");

va_end(list);
}
