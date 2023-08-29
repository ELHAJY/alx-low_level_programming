#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: A pointer to the address of the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ah, *beh;

	if (!head || *head == NULL)
		return (NULL);

	beh = NULL;

	while ((*head)->next != NULL)
	{
		ah = (*head)->next;
		(*head)->next = beh;
		beh = *head;
		*head = ah;
	}

	(*head)->next = beh;

	return (*head);
}
