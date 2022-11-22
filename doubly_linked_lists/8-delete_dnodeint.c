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
	dlistint_t *tmp = *head, *delete;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; tmp; tmp = tmp->next)
		i++;
	if (index > i)
		return (-1);
	tmp = *head;
	for (i = 1; i < index; i++)
		tmp = tmp->next;
	delete = tmp->next;
	tmp->next = tmp->next->next;
	delete->next = NULL;
	delete->prev = NULL;
	tmp->next->prev = tmp;
	free(delete);
	return (1);
}
