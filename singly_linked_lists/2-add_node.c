#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: double pointer to the head node of the list
 * @str: string to duplicate and store in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;

	new->next = *head;
	*head = new;

	return (new);
}
