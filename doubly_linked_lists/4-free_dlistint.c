#include "lists.h"

/**
  * free_dlistint - frees a listint_t list.
  * @head: The head node of the list.
  *
  */

void free_dlistint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
