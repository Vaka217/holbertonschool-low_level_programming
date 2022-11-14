#include "lists.h"

/**
  *
  */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	printf("[%d] %s\n", h->next->len, h->next->str);
	return (2);
}
