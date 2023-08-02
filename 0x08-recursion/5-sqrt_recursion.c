#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: input
 *
 *  return: square root of n,
 *  If n does not have a natural square root, the function should return -1
 */

int sqrt(int i);
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	int sqrt(i)
	{
		int v = i * i;

		if (n == v)
			return (i);
		else if (n < v)
		{
			i++;
			return (sqrt(i));
		}
		else
			return (-1);
	}
}
