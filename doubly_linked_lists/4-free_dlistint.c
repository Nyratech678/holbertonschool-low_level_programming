#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	for (; head != NULL; head = tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}