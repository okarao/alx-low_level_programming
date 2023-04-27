#include "lists.h"
/**
 * print_list - print all the elements in a lists
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	
	if (h->str == NULL)
	{
		printf("[0] (nill)\n");
	}
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
