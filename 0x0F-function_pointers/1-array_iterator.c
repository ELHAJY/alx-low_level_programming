#include <stddef.h>

/**
 * array_iterator - that executes a given function as a parameter
 *			on each element of an array.
 *
 * @array: int array
 * @size: array size
 * @action: pointer to function
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ind;

	if (array && size > 0 && action)
		for (ind = 0; ind < size; ind++)
			action(array[ind]);
}
