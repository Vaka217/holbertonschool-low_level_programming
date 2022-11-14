#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: Pointer to a pointer adress.
  * @str: String to store in the new node.
  *
  * Return: The adress of the new element, or NULL if it failed.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *end = *head;
	char *strcp = strdup(str);

	if (!new)
		return (NULL);
	strcp = strdup(str);
	if (!strcp)
	{
		free(new);
		return (NULL);
	}
	new->str = strcp;
	new->len = strlen(strcp);
	new->next = NULL;
	if (*head == NULL)
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
