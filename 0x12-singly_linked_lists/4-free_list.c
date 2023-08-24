#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: input
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *cu_;

	while ((cu_ = head) != NULL)
	{
		head = head->next;
		free(cu_->str);
		free(cu_);
	}
}
