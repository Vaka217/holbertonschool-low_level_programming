#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: Pointer to the header node of the linked list.
  * @idx: Index of the list where the new node should be added.
  * @n: Data(n) for the new node.
  *
  * Return: The address of the new node, or NULL if it failed.
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *end = *h;
	dlistint_t *post, *sig;
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	for ( ; end; end = end->next)
	{
		if (idx == i)
		{
			post = end->prev;
			sig = post->next;
			post->next = new;
			new->prev = post;
			new->next = sig;
			sig->prev = new;
			return (new);
		}
		i++;
	}
	return (NULL);
}
