#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the beginning of a listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @n: int for the new node to contain.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ne;

	ne = malloc(sizeof(listint_t));
	if (!ne)
		return (NULL);

	ne->n = n;
	ne->next = *head;

	*head = ne;

	return (ne);
}
