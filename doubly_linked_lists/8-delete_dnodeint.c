#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes node at certain index of a linked list.
  * @head: Pointer to the header node of the linked list.
  * @index: Index of the list where the node should be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *sig, *delete = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(delete);
		return (1);
	}
	for(i = 0; delete; delete = delete->next)
		i++;
	if (index > i)
		return (-1);
	delete = *head;
	for (i = 0; i < index; i++)
		delete = delete->next;
	if (!delete->prev && !delete->next)
	{
		free(delete);
		return (1);
	}
	if (!delete->prev && delete->next)
	{
		sig = delete->next;
		sig->prev = NULL;
		delete->next = NULL;
		free(delete);
		return (1);
	}
	if (!delete->next && delete->prev)
	{
		prev = delete->prev;
		prev->next = NULL;
		delete->prev = NULL;
		free(delete);
		return (1);
	}
	prev = delete->prev;
	sig = delete->next;
	sig->prev = prev;
	prev->next = sig;
	delete->next = NULL;
	delete->prev = NULL;
	free(delete);
	return (1);
}
