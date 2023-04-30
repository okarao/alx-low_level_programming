#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: pointer to linked lists
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
