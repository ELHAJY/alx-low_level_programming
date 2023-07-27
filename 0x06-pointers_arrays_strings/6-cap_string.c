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
	int v;

	for (v = 0; ch[v] != '\0'; v++)
	{
		if (ch[v] >= 97 && ch[v] <= 122)
		{
			if (Delimiter(ch[v - 1])
				ch[v] -= 32;
		}
	}
	return (ch);
}

int Delimiter(char c)
{
	int n;
	char d[] = " \t\n,.!?\"(){}"

		for (n = 0; n < 12; n++)
		{
			if (c == d[n])
			{
				return (1);
			}
		}
	return (0);
}
