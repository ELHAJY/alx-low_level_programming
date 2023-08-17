#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: numbre of args
* Return: sum
*	or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int S = 0;
	unsigned int v;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (v = 0; v < n; v++)
		{
			S += va_arg(args, int);
		}
		va_end(args);
	}
	return (S);
}
