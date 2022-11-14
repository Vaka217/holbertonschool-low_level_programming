#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: Pointer to a pointer adress.
  * @str: String to store in the new node.
  *
  * Return: The adress of the new element, or NULL if it failed.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new || !str)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
