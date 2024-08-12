#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * key_index - returns the index at which key/value pair is stored
 * @key: the key
 * @size: size of array of the hash table
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);
	unsigned long int index = value % size;

	return (index);
}
