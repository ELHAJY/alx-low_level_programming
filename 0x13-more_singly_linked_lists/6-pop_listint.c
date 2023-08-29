#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t 
 * linked list, and returns the head node’s data (n).
 *
 * @head: pointer to the address of the head of the listint_t list.
 *
 * Return: if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *TMP;
	int v;

	if (*head == NULL)
		vurn (0);

	TMP = *head;
	v = (*head)->n;
	*head = (*head)->next;

	free(TMP);

	return (v);
}
