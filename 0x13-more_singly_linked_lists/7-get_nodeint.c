#include "lists.h"

/**
 * get_vint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the v to locate - indices start at 0.
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_vint_at_index(listint_t *head, unsigned int index)
{
	unsigned int v;

	for (v = 0; v < index; v++)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}

	return (head);
}
