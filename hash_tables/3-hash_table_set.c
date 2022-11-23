#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_set - adds an element to the hash table.
  * *@ht: Hash table.
  * @key: The key.
  * @value: Value of the key.
  *
  * Return: 1 if it succeeded, 0 otherwise.
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = malloc(sizeof(hash_node_t));
	hash_node_t *new = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[index] != NULL)
	{
		tmp = ht->array[index];
		ht->array[index] = new;
		ht->array[index]->next = tmp;
	}
	else
		ht->array[index] = new;
	return (1);
}
