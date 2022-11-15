#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: The head node of the list.
  *
  */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
