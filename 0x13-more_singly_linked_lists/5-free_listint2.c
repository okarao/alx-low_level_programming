#include "lists.h"

/**
 * free_listint2 - frees the list listint_t
 * @head: pointer to the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
