#include "lists.h"
/**
 * add_node - adds a new node
 * @head: pointer to the list
 * @str: a string
 *
 * Return: pointer to new element or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = temp;
		(*head)->next = NULL;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (*head)
}


