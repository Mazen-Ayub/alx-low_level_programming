#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";

	va_list vlist;

	va_start(vlist, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(vlist, int));
					break;
				case 'x':
					printf("%s%d", sep, va_arg(vlist, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(vlist, double));
					break;
				case 's':
					str = va_arg(vlist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(vlist);
}
