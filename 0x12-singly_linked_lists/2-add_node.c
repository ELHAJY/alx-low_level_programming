#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: input
 * @str: input
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveau;

	nouveau = malloc(sizeof(list_t));

	if (!nouveau)
		return (NULL);

	nouveau->str = strdup(str);
	nouveau->len = strlen(str);
	nouveau->next = *head;
	*head = nouveau;

	return (*head);
}
