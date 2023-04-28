#include "lists.h"


void free_list(list_t *head)
{
	list_t *temp;
	
	while (head->next)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
