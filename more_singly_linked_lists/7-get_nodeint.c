#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: The head node in the linked list.
  * @index: Index of the node.
  *
  * Return:Returns the nth node of a listint_t linked list or NULL if the node
  * does not exist.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
