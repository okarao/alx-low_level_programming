#include "lists.h"
/**
 * reverse_listint - reverse the nodes in a list
 * @head: pointer to list
 *
 * Return: A pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = NULL, *temp = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	curr = *head;

	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	*head = prev;

	return (*head);
}
