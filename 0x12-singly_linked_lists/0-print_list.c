#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: input
 *
 * Return: the number of nodes
 *	If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t v;

	v = 0;

	while (h)
	{
		if (!h->str)
		printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		v++;
	}

	return (v);
}
