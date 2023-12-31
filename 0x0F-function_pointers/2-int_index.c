#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - that searches for an integer.
 * @array: int array
 * @size: size of @array
 * @cmp:  is a pointer to the function to be used to compare values.
 *
 * Return: int_index returns the index of the first element for which the cmp
 * function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array && size > 0 && cmp)
	{
		for (ind = 0; ind < size; ind++)
		{
			if (cmp(array[ind]))
				return (ind);
		}
	}
	return (-1);
}
