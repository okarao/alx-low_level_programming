#include "lists.h"

/**
 * free_list - frees the memory
 * @head: pointer to the nodes to be freed
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->next);
		free(head);
	}
}
