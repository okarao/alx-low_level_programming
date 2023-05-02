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
	listint_t *nextnode, *headnode = *head;

	while (*head != NULL)
	{
		nextnode = headnode->next;
		free(headnode);

		*head = nextnode;
	}
	*head = NULL;
}

