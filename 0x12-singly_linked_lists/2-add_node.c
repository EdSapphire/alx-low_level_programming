#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a new node at the
 * beginning of a list_t list
 * @head: Address of elment
 * @str: The list
 *
 * Return: The address of element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *begin;
	unsigned int len = 0;
	
	while (str[len])
		len++;
	
	begin = malloc(sizeof(list_t));
	if (!begin)
		return (NULL);
	
	begin->str = strdup(str);
	begin->len = len;
	begin->next = (*head);
	(*head) = begin;
	
	return (*head);
}
