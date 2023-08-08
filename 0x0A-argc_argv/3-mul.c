#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0-succes, 1 if error
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atio(argv[2]) * atio(argv[1]);
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}