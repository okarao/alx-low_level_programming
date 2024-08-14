#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - print a hash table
 *
 * @ht: the hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
		return;

	unsigned long int i;
	hash_node_t *current_node;
	int Key_Value = 1;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (!Key_Value)
				printf(", ");
			printf("'%s': '%s' ", current_node->key, current_node->value);
			Key_Value = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
