#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: Pointer to the header node of the linked list.
  * @idx: Index of the list where the new node should be added.
  * @n: Data(n) for the new node.
  *
  * Return: The address of the new node, or NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *end = *head;
	unsigned int i = 0;

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for ( ; end; end = end->next)
	{
		if (idx == i + 1)
		{
			new->next = end->next;
			end->next = new;
		}
		i++;
	}
	if (idx > i)
		return (NULL);
	return (new);
}
