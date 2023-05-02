#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that add a node at the end of list
 * @head: Pointer to address of new node
 * @n: Integer for the new node
 *
 * Return: Address of new element or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *bgn, *end;

	bgn = (listint_t *)malloc(sizeof(listint_t));
	if (bgn == NULL)
		return (NULL);

	bgn->n = n;
	bgn->next = NULL;
	if (*head == NULL)
		*head = bgn;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = bgn;
	}
	return (*head);
}
