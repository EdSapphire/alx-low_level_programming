#include "lists.h"
#include <stdio.h>

size_t type_listint(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * type_listint - Function that counts number of node
 * @head: Pointer to head of list
 *
 * Return: Number of nodes or 0.
 */
size_t type_listint(const listint_t *head)
{
	const listint_t *num, *len;
	size_t pt = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	num = head->next;
	len = (head->next)->next;

	while (len)
	{
		if (num == len)
		{
			num = head;
			while (num != len)
			{
				pt++;
				num = num->next;
				len = len->next;
			}

			num = num->next;
			while (num != len)
			{
				pt++;
				num = num->next;
			}

			return (pt);
		}

		num = num->next;
		len = (len->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: Pointer to head of the listint_t list
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t pt, tmp = 0;

	pt = type_listint(head);

	if (pt == 0)
	{
		for (; head != NULL; pt++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (tmp = 0; tmp < pt; tmp++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (pt);
}
