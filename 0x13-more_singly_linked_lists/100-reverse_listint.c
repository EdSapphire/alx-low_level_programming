#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t list
 * @head: Pointer to address of head of list
 *
 * Return: Pointer to node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *dev, *rev;

	if (*head == NULL || head == NULL)
		return (NULL);

	rev = NULL;

	while ((*head)->next != NULL)
	{
		dev = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = dev;
	}
	(*head)->next = rev;

	return (*head);
}
