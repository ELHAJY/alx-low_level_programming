#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds
 *a new node at the end of a listint_t list.
 * @head: double pointer to the beginning of the list
 * @n: int to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne;
	listint_t *curr;

	if (!head)
		return (NULL);
	ne = malloc(sizeof(listint_t));
	if (!ne)
		return (NULL);
	ne->n = n;
	ne->next = NULL;
	if (*head == NULL)
	{
		*head = ne;
		return (ne);
	}
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = ne;
	return (ne);
}
