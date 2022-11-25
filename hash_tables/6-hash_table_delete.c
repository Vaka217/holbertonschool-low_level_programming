#include "hash_tables.h"

/**
  * hash_table_delete -  deletes a hash table.
  * @ht: The hash table to delete.
  *
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *prev;

	while (index < ht->size)
	{
		while (ht->array[index])
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			prev = ht->array[index];
			ht->array[index] = ht->array[index]->next;
			free(prev);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
