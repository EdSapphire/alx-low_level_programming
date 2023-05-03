#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all elements of listint_t list
 * @h: Pointer to the address of the head of Listint_t list
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
