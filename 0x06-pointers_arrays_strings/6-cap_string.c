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

	while (ch[v] != '\0')
	{
		if (ch[v] >= 97 && ch[v] <= 122)
			if (v == 0)
			{
				s[i] -= 32;
			}
			if (ch[v - 1] == 32 || ch[v - 1] == 9 || s[v - 1] == 10 ||
				ch[v - 1] == 44 || ch[v - 1] == 59 || ch[v - 1] == 46 ||
				ch[v - 1] == 33 || ch[v - 1] == 63 || ch[v - 1] == 34 ||
				ch[v - 1] == 40 || ch[v - 1] == 41 || ch[v - 1] == 123 ||
				ch[v - 1] == 124)
			{
				ch[v] -= 32;
			}
		}
		v++;
	return (ch);
}
