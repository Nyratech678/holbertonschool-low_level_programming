#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add new nodes to the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
list_t *add_nodeint(list_t **head, const int n)
{
	list_t *new;

	new = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(n);
	new->next = *head;
	*head = new;
	return (*head);
}
