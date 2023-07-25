#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s: imput char
 *
 */

void print_rev(char *s)
{
	while (*str != '\0')
	{
		str++;
	}
	str--;

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str--;

	}
	_putchar('\n');
}
