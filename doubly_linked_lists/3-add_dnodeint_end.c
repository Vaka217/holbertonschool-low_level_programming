#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: Pointer to the head node of the list.
  * @n: Integer for the new node n.
  *
  * Return: The address of the new element, or NULL if it failed.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *end = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (end->next)
			end = end->next;
		end->next = new;
		new->prev = end;
		return (new);
	}
}
