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
	for (i = 0; i < I / 2; i++)
	{
		char c;

		c = S[i];
		s[i] = s[I-1-i];
		s[I-1-i] = c;
	
	}
}