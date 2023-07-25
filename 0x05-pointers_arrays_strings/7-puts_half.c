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
	int n;

	while (*str != '\0')
	{
		str++;
		n++;
	}
	str--;
	if (n % 2 == 0)
	{
		for (;n > n / 2; n--) 
		{
			_putchar(*str);
			str--;
		}
	}
	else
	{
		for (;n > n / 2 +1; n--)
		{
			_putchar(*str);
			str--;
		}
	}
}
