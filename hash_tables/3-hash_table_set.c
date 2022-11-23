#include "hash_tables.h"
#include <string.h>
/**
  *
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{ 
	hash_node_t *new = malloc(sizeof(hash_node_t));
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);
	new->key = strdup(key);
	new->value = strdup(value);
	ht->array[index] = new;
	return (1);
}
