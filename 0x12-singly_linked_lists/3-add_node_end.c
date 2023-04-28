#include "lists.h"
/**
 * add_node_end - add a node to the end of the lists
 * @head: the point to the first node
 * @str: array of characters
 *
 * Return: to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len;
	list_t *temp, *node;

	*temp = *head;

	while (str[len])
		len++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	
	if (*head == NULL)
	{
		*head = *node;
		return (*head);
	}
	while (temp->next)
		temp->next;
	temp->next = *node;
	return (node);
}
