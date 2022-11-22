#include "lists.h"

/**
  * sum_dlistint - Sum all the data (n) of a dlistint_t linked list.
  * @head: Head node of the linked list.
  *
  * Return: The sum of all the data(n) of the given dlistint_t linked list.
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for ( ; head; head = head->next)
		sum += head->n;
	return (sum);
}
