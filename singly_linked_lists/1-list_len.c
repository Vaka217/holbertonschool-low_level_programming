#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list.
  * @h: Pointer to head of linked list.
  *
  * Return: Number of elements in a linked list.
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	for (; h; h = h->next)
		count++;
	return (count);
}
