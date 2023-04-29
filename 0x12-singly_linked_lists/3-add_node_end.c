#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - A function that adds a new node at the end of a list_t list
 * @head: Address of the elements
 * @str: The list_t list
 *
 * Return: Address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *begin = *head;
	list_t *temp;
	unsigned int len = 0;

	temp = (list_t*)malloc(sizeof(list_t));

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	while (begin->next != NULL)
	{
		begin = begin->next;
	}
	begin->next = temp;

	return (*head);
}
