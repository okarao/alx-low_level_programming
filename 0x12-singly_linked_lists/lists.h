#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);

/**
 * struct list_s - structure for linked list
 * @str: string data member of the struct
 * @len: length of the string
 * @next: a pointer to the next node
 */
typedef struct linked_list
{
	char *str;
	int len;
	struct linked_list *next;
} list_t;
size_t print_list(const list_t *h);
#endif /*LISTS_H*/
