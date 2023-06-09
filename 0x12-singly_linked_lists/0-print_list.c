#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - A function that prints all the elements
 * of a list_s list
 * @h: List pointer
 * @list_t: Node list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t new = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		
		new++;
		h = h->next;
	}
	return (new);
}
