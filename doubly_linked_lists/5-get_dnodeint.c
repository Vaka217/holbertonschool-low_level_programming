#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: The head node in the linked list.
  * @index: Index of the node.
  *
  * Return:Returns the nth node of a listint_t linked list or NULL if the node
  * does not exist.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	for ( ; head; head = head->next)
	{
		if (index == n)
			return (head);
		n++;
	}
	return (NULL);
}
