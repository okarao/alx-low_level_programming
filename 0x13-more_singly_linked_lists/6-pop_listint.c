#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to listint_t
 *
 * Return: data n or 0
 */

int pop_listint(listint_t **head)
{
	int result;
	listint_t *nextnode, *node = *head;

	while (head != NULL)
	{
		nextnode = node->next;
		free(head);

		*head = nextnode;
	}
	result = nextnode->n;
	*head = NULL;

	return (result);
}

