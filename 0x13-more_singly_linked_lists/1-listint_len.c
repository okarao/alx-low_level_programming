#include "lists.h"
/**
 * listint_len - print the number of elements in a list
 * @h: pointer to list
 *
 * Return: the number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	int len;
	while (h->n)
	{
		len++;
		h = h->next;
	}
	return (len);
}
