#include "lists.h"

/**
  *
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->next = *head;
	*head = new;
	if (new)
		return (new);
	else
		return (NULL);
}
