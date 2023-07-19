#include "main.h"

/**
 * print_alphabet prints the alphabet, utilisizes in _putchar function.
 * the alphabet a to z
*/

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');

}
