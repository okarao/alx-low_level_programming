#include "lists.h"
/**
 * reverse_listint - reverse the nodes in a list
 * @head: pointer to list
 *
 * Return: A pointer to the first node of reversed list
 */

listint_t *reverse_listint(listin_t **head)
{
	listint_t *prev, *curr, *temp;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		curr = (*head)->next;
		temp = curr->next;
		prev->next = temp;
	}
	*head->next = prev;

	return (*head);
}
