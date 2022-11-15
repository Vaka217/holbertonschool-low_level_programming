#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: Pointer to the head node of the list.
  * @n: Integer for the new node n.
  *
  * Return: The address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *end = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
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
		return (new);
	}
}
