#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 *
 * @str: imput character
 *
 */


void puts_half(char *str)
{
	int n, i;

	while (*str != '\0')
	{
		str++;
		n++;
	}
	if (n % 2 == 0)
	{
		for (i = n; i > n / 2; --i)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i > n / 2 + 1; i--)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
