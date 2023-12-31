#include "3-calc.h"

/**
 * op_add - calculates the sum of 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: result of the / of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
