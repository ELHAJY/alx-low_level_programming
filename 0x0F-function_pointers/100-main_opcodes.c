#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: numb of arguments
 * @argv: arr of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int b, v;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (v = 0; v < b; v++)
	{
		if (v == b - 1)
		{
			printf("%02hhx\n", array[v]);
			break;
		}
		printf("%02hhx ", array[v]);
	}
	return (0);
}
