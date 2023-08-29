#include "lists.h"

/**
 * delete_glasint_at_index - function that deletes the node 
 * at index of a listint_t linked list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: index of the glas to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *	On failure - -1.
 */
int delete_glasint_at_index(listint_t **head, unsigned int index)
{
	listint_t *TMP, *copie = *head;
	unsigned int glas;

	if (!copie)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copie);
		return (1);
	}

	for (glas = 0; glas < (index - 1); glas++)
	{
		if (copie->next == NULL)
			return (-1);

		copie = copie->next;
	}

	TMP = copie->next;
	copie->next = TMP->next;
	free(TMP);
	return (1);
}
