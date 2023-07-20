#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n:  is the number of times the character ' '
 */

void print_diagonal(int n)
{
	int nl, s;

	for (nl = 0; nl < n; nl++)
	{
		for (s = 1; s < nl ; s++)
			_putchar(' ');
		_putchar('\');
		_putchar('\n');
	}
}
