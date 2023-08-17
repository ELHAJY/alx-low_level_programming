#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator
 * @separator: separator
 * @n: number of args
 * @...: The list of args
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int v;
	char *ptr;

	va_start(va, n);

	for (v = 0; v < n; v++)
	{
		if (separator != NULL && v != 0)
			printf("%s", separator);
		ptr = va_arg(va, char *);
		printf("%s", (ptr == NULL) ? "(nil)" : ptr);
	}
	printf("\n");
	va_end(va);
}
