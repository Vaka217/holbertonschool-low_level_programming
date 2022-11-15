#include "lists.h"
#include "4-free_listint.c"
/**
  * free_listint2 - frees a listint_t list.
  * @head: Pointer to the head node of the list.
  *
  */

void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint(*head);
		*head = NULL;
	}
}
