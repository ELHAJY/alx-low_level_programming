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
		int v = 0;

	while (s[v] != '\0')
	{
		if (s[v] >= 97 && s[v] <= 122)
			if (v == 0)
			{
				s[i] -= 32;
			}
			if (s[v - 1] == 32 || s[v - 1] == 9 || s[v - 1] == 10 ||
				s[v - 1] == 44 || s[v - 1] == 59 || s[v - 1] == 46 ||
				s[v - 1] == 33 || s[v - 1] == 63 || s[v - 1] == 34 ||
				s[v - 1] == 40 || s[v - 1] == 41 || s[v - 1] == 123 ||
				s[v - 1] == 124)
			{
				s[v] -= 32;
			}
		}
		v++;
	return (ch);
}
