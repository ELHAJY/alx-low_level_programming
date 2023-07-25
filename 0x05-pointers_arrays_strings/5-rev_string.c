#include "main.h"

/**
 * rev_string - function that prints a string, in reverse.
 *
 * @s: imput char
 *
 */

void rev_string(char *s)
{
	int I, i;

	I = 0;
	while (*s != '\0')
	{
		s++;
		I++;
	}
	char C[I];

	for (i = 0; i < I; i++)
	{

		C[i] = s[i];
	}
	s--;
	i = 0;
	while (*s != '\0')
	{
		*s = c[i];
		s--;
	}
}
