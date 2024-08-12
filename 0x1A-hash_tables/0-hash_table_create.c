#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - create a hash table
 *
 * @size - long int for size of table
 *
 * Return: pointer to new table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* 
	 * Creates a new Hash table
	 */
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return NULL;

	table->size = size;

	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		
		return NULL;
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}
