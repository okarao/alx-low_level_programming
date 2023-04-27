#include "lists.h"
/**
 * list_len - counts the number of elements in  list
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count =0;
	while (h->str)
	{
		count++;
		h->str++;
	}

	return (count);
}
