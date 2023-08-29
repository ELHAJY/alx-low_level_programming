#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head of the listint_t to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *TMP;

	while (head)
	{
		TMP = head->next;
		free(head);
		head = TMP;
	}
}
