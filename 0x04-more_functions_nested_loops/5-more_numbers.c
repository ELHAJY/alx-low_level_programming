#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int x, i, n;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 10; i++)
			_putchar('0' + i);
		for (n = 0; n <= 4; n++)
		{
			_putchar('1');
			_putchar('0' + n);
		}
		_putchar('\n');
	}
}
