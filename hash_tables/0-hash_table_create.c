#include "hash_tables.h"

/**
  *
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	array = malloc(sizeof(size));
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = array;
	return (table);
}
