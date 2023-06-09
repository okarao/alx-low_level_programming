#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: pointer to list
 * @idx: the index
 * @n: data member
 *
 * Return: address or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	unsigned int i;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = (*head);
		(*head) = node;
		return (node);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
