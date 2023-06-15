#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the list
 *
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *newnode = h;
	size_t count = 0;

	while (newnode)
	{
		printf("%i\n", newnode->n);
		count++;
		newnode = newnode->next;
	}

	return (count);
}
