#include "lists.h"

/**
 * pop_listint - deletes the  node
 * @head: pointer to listint_t
 *
 * Return: data n or 0
 */

int pop_listint(listint_t **head)
{
	int result;
	listint_t *node = *head;

	if (node == NULL)
		return (0);

	head = node->next;
	free(node);

	result = head->n;

	return (result);
}

