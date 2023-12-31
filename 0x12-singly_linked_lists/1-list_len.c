#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in
 * a linked list_t list.
 *
 * @h: input
 *
 * Return: number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t v;

	v = 0;

	while (h)
	{
		h = h->next;
		v++;
	}

	return (v);
}
