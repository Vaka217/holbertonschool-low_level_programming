#include "hash_tables.h"

/**
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
			if (ht->array[index])
			{
				if (first == 0)
				{
					printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
					first = 1;
				}
				printf(", '%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			}
			index++;
		}
		printf("}");
	}
	printf("\n");
}
