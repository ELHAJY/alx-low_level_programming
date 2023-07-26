#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * function should work exactly like strcmp
 *
 * @s1: 1 input char
 * @s2: 2 input char
 *
 * Return: deference
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, d = 0;

	while (s1[i])
	{
		d = ((int)*s1[i] - 48) - ((int)*s2[i] - 48);
		i++;
	}
	return (d);
}
