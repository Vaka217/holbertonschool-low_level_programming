#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: The head node of the list.
  *
  * Return: The number of nodes.
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
