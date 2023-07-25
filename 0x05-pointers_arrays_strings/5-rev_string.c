#include "main.h"

/**
 * rev_string - function that prints a string, in reverse.
 *
 * @s: imput char
 *
 */

void rev_string(char *s)
{
	char C[100];

	int I, i;

	I = 0;
	while (*s != '\0')
	{
		s++;
		I++;
	}
	for (i = 0; i < I; i++)
	{

		C[i] = s[i];
	}
	for (i = 0; i < I; i++)
	{
		s[i] = C[I-i-1];
	}
}
