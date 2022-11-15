#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: Pointer to the head node of a linked list.
  *
  * Return: The head node’s data (n).
  */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp = *head;

	if (*head)
	{
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
