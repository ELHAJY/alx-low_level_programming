#include "3-calc.h"

/**
 * main - should contain your main function only.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int ar1, ar2, res;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(ar1, ar2);

	printf("%d\n", res);

	return (0);
}
