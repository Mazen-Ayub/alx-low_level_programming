#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int x = 0, i = 0;
	char *p;

	va_start(list, format);
	while (format && format[x] != '\0')
	{
		switch (format[x])
		{ case 'c':
			switch (i)
			{ case 1: printf(", "); }
			i = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (i)
			{ case 1: printf(", "); }
			i = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (i)
			{ case 1: printf(", "); }
			i = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (i)
			{ case 1: printf(", "); }
			i = 1;
			p = va_arg(list, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break; }
		x++;
	}
	printf("\n");
	va_end(list);
} 
