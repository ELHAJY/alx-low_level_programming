#include <sdtio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: argc
 * @argv: argv
 *
 * return: 0
 *
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int v = 0, w;

	while (v < argc)
	{
		w = v;
		v++;
	}
	printf("%d\n", w);
	return (0);
}
