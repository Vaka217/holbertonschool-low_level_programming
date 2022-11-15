#include "lists.h"

/**
  * sum_listint - Sum all the data (n) of a listint_t linked list.
  * @head: Head node of the linked list.
  *
  * Return: The sum of all the data(n) of the given listint_t linked list.
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for ( ; head; head = head->next)
		sum += head->n;
	return (sum);
}
