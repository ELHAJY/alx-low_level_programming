#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src, 
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: imput
 * @src: imput
 *
 * Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int a = 0;

		do {
			dest[i] = src[i];
			a++;
		} while (src[i] != '\0');
		return (dest);
}
