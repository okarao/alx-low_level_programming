#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_get - it returns a value associated with a key
 *
 * @ht: the hash table to look into
 * @key: the key being looked for
 *
 * Return: the value associated the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index	= key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];


	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
