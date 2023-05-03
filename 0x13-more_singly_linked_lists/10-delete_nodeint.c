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
	listint_t *temp = *head;

	unsigned int count = 0;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		while (count < index && temp != NULL)
		{
			temp = temp->next;
		}
		node = temp->next;
		free(temp);
		temp->next = node->next;
		return (1);

		*head = temp;
	}
	return (-1);
}
