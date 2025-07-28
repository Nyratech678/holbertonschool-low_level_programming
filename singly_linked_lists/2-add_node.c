#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - ajoute un nouveau noeud au début d'une list_t
* @head: adresse du pointeur vers la tête de la liste
* @str: chaîne à dupliquer et à ajouter à la liste
*
* Return: adresse du nouveau noeud ou NULL en cas d'échec
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = *head;
	*head = new;

	return (new);
}

