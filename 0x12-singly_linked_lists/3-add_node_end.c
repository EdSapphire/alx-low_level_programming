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
	list_t *begin;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	begin = malloc(sizeof(list_t));
	if (!begin)
		return (NULL);

	begin->str = strdup(str);
	begin->len = len;
	begin->next = NULL;

	if (*head == NULL)
	{
		*head = begin;
		return (begin);
	}
	while (temp->next)
	{
		temp = temp->next;
		temp->next = begin;
	}
	return (begin);
}
