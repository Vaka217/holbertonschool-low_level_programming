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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);
	return (ht->array[index]->value);
}
