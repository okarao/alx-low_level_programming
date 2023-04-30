#include "lists.h"

/**
 * free_listint - free the the list
 * @head: pointer to list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
