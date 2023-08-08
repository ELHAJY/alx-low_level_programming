#include <sdtio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argc
 * @argv: argv
 *
 * return: 0
 *
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
