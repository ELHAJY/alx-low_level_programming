#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: first arg string
 * @n: number of args
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int v;

	va_start(args, n);

	for (v = 0; v < n; v++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && v != (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}
