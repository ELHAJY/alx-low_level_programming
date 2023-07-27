#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @ch: input string.
 *
 * Return: capitalizes all words of a string.
 */

char *cap_string(char *ch)
{
	int v, n, a = 1;
	char d[] = " \t\n,.!?\"(){}"

	for (v = 0; ch[v] != '\0'; v++)
	{
	/*	for (n = 0; n < 12; n++)
		{
			if (ch[v] == d[n])
			{
				a = 1;
				n = 13;
			}
			else
				a = 0;
		}*/
		if (ch[v] >= 97 && ch[v] <= 122)
		{
				ch[v] -= 32;
		}
	}
	return (ch);
}
