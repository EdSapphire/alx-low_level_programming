#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all elements of listint_t list
 * @h: Listint_t list
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t newlist = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		newlist++;
		h = h->next;
	}
	return (newlist);
}
