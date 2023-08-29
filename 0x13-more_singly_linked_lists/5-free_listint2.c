#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: input.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *TMP;

	if (!head)
		return;

	while (*head)
	{
		TMP = (*head)->next;
		free(*head);
		*head = TMP;
	}

	head = NULL;
}
