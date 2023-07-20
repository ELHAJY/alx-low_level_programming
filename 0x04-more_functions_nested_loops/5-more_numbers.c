#include "main.h"

/**
 * more_numbers - function that prints the numbers
 *
 */

void more_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int i;

		for (i = 0; i < 10; i++)
			_putchar('0' + i);
		for (i = 0; i <= 4; i++)
		{
			_putchar('1');
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
