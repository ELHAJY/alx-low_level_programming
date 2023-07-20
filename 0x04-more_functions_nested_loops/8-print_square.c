#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: is the size of the square
 */

void print_square(int size)
{
	int s;
		for (s = 0; s < size; s++)
		{
			for (s = 0; s < size ; s++)
				_putchar('#');
			_putchar('\n');
		}
}
