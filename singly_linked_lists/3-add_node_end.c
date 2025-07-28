#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - ajoute un noeud à la fin d'une liste list_t
* @head: adresse du pointeur vers la tête de la liste
* @str: chaîne à dupliquer et ajouter
*
* Return: adresse du nouveau noeud, ou NULL en cas d'échec
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
