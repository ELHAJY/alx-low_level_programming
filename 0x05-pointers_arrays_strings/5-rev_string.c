#include "main.h"

/**
 * rev_string - function that prints a string, in reverse.
 *
 * @s: imput char
 *
 */

void rev_string(char *s)
{
	int a, i, c;

	a = 0;
	while (*s != '\0')
	{
		s++;
		a++;
	}
	for (i = 0; i < a / 2; i++)
	{
		c = s[i];
		s[i] = s[a - 1 - i];
		s[a - 1 - i] = c;
	}
}
