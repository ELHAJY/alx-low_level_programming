#include <sdtio.h>

/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: argc
 * @argv: argv
 *
 * return: 0
 *
 */

int main(int argc, char *argv[])
{
	print("%d\n", argc - 1);
	(void)*argv[];
	return (0);
}
