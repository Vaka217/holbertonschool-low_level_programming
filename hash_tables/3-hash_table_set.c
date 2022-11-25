#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 */

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key.
 * @value: Value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *actual;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		actual = ht->array[index];
		if (strcmp(actual->key, key) == 0)
		{
			new->next = actual->next, ht->array[index] = new;
			free_node(actual);
			return (1);
		}
		while (actual->next != NULL && strcmp(actual->next->key, key) != 0)
			actual = actual->next;
		if (strcmp(actual->key, key) == 0)
		{
			new->next = actual->next->next;
			free_node(actual->next);
			actual->next = new;
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}
	return (1);
}
