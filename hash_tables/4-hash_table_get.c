#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: The hash table to look into.
  * @key: The key looking for.
  *
  * Return: the value associated with the element, or NULL if key couldn’t be
  * found.
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
