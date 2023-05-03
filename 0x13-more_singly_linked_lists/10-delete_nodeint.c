#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at index
 * @head: link pointer
 * @index: the index to delete
 *
 * Return: 1 if success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *temp;

	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		temp = *head;
		free(temp);
		return (1);
	}
	temp = *head;

	while (count < index - 1 && temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);

	node = temp->next;
	temp->next = node->next;
	free(node);

	return (1);
}
