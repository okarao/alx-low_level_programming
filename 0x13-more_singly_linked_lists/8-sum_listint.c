#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t
 * @head: pointer to list
 *
 * Return: the sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
