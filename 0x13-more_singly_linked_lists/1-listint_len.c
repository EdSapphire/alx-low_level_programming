#include "lists.h"

/**
 * listint_len - A function that returns number of elements in
 * a linked listint_t list
 * @h: Pointer to the address of Listint_t list head
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
