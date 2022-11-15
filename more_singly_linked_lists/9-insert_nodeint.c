#include "lists.h"

/**
  *
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *end = *head;
	unsigned int i = 0;

	new->n = n;
	for ( ; end; end = end->next)
	{
		if (idx == i + 1)
		{
			new->next = end->next;
			end->next = new;
		}
		i++;
	}
	return (new);
}
