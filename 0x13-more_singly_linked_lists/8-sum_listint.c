#include "lists.h"

/**
 * som_listint -  function that returns the sum of all the data (n) of a listint_t linked list.
 * @head: listint_t list.
 *
 * Return: if the list is empty, return 0
 */
int som_listint(listint_t *head)
{
	int som = 0;

	while (head)
	{
		som += head->n;
		head = head->next;
	}

	return (som);
}
