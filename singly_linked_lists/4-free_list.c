#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees a list_t linked list
  * @head: pointer to the head of the list to be freed
  */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}