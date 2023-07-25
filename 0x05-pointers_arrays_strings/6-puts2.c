#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 *
 * @str: imput character
 *
 */

void puts2(char *str)
{
	int n=0;

	while (*str != '\0')
	{
		if (n= % 2 = 0)
			_putchar(s[n]);
		str++;
		n++;
	}
	_putchar('\n');
}
