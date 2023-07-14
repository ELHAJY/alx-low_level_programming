#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: positive or negative
 *
 * Return: 0=success
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n%10;

	if (digit > 5)
		printf("");
	return (0);
}
