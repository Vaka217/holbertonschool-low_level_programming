#include "hash_tables.h"
#include <stdio.h>

/**
  * hash_table_print -  prints a hash table.
  * @ht: The hash table to print.
  *
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int first = 0;

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			while (ht->array[index])
			{
				if (first == 0)
				{
					printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
					first = 1;
				}
				else
					printf(", '%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				ht->array[index] = ht->array[index]->next;
			}
			index++;
		}
		printf("}\n");
	}
}
