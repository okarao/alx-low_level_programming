#include "lists.h"

/**
 * get_nodeint_at_index - get a node at an index
 * @head: list pointer
 * @index: the index of the node
 *
 * Return: node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;
	
	if (i == index && temp != NULL)
		return (temp);
	else
		return (NULL);
}
