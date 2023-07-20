#include "main.h"

/**
 * print_numbers - function that prints the numbers !=2,4
 *
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar('0' + x);
	}
	_putchar('\n');
}
