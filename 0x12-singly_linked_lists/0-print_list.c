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
	
	list_t current = h;
	if (current == NULL)
	{
		printf("[0] (nill)\n");
	}
	while (current != NULL)
	{
		printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
