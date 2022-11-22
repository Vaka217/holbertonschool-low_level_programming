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
	dlistint_t *new, *post, *sig;
	unsigned int i;

	if (!h)
		return (NULL);
	post = *h, sig = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*h = new;
		new->next = sig;
		if (sig)
			sig->prev = new;
		new->prev = NULL;
		return (new);
	}
	if (sig)
		sig = sig->next;
	else
		return (NULL);
	for (i = 1; sig && i < idx; i++)
	{
		post = post->next;
		sig = sig->next;
	}
	if (idx == i)
	{
		post->next = new;
		new->next = sig;
		if (sig)
			sig->prev = new;
		new->prev = post;
		return (new);
	}
	return (NULL);
}
