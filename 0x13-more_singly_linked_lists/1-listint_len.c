#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements
 *  in a linked listint_t list.
 * @h: A pointer to the head of the listint_t.
 *
 * Return: v.
 */
size_t listint_len(const listint_t *h)
{
	size_t v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}

	return (v);
}
