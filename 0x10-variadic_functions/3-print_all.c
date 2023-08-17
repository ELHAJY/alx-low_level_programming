#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - print char, integer, float and string
* @format: format
*/
void print_all(const char * const format, ...)
{
	va_list va;
	unsigned int w = 0, st = 0;
	char *ptr;

	va_start(va, format);
	while (format && format[w] != '\0')
	{
		switch (format[w])
		{ case 'c':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			printf("%c", va_arg(va, int));
			break;
			case 'i':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			printf("%i", va_arg(va, int));
			break;
		case 'f':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			printf("%f", va_arg(va, double));
			break;
		case's':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			ptr = va_arg(va, char*);
			if (ptr)
			{ printf("%s", ptr);
			break; }
			printf("%p", ptr);
			break; }
		w++;
	}
	printf("\n");
	va_end(va);
}
