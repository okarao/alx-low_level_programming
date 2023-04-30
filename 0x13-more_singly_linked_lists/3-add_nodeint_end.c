#include "lists.h"

/**
 * add_nodeint_end - add a node to the end if the list
 * @head: pointer to the list
 * @n: input integer
 *
 * Return: pointer to the added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	*temp = (*head);

	node = malloc(sizeof(listint_t));
	
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		(*head) = node;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	(*head) = temp;
	return (*head);
}

