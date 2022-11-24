#include "hash_tables.h"

/**
  * hash_table_print -  prints a hash table.
  * @ht: The hash table to print.
  *
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;

	while (index < ht->size)
	{
		while (ht->array[index])
		{
			node = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = node;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
