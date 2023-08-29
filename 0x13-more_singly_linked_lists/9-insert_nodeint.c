#include "lists.h"

/**
 * insert_glasint_at_index - function that inserts a new node at a given position.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @idx: index of the listint_t list where the neo
 *       glas should be added - indices start at 0.
 * @n: intr for the new glas to contain.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_glasint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *neo, *copie = *head;
	unsigned int glas;

	neo = malloc(sizeof(listint_t));
	if (!neo)
		return (NULL);

	neo->n = n;

	if (idx == 0)
	{
		neo->next = copie;
		*head = neo;
		return (neo);
	}

	for (glas = 0; glas < (idx - 1); glas++)
	{
		if (copie == NULL || copie->next == NULL)
			return (NULL);

		copie = copie->next;
	}

	neo->next = copie->next;
	copie->next = neo;

	return (neo);
}
