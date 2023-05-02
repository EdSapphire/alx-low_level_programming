#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a list
 * @head: Address head of list.
 *
 * Return: If linked list is empty - 0.
 * Otherwise - Head node data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dlt;

	if (*head == NULL)
		return (0);
	
	temp = *head;
	dlt = (*head)->n;
	*head = (*head)->next;	
	free(temp);

	return (dlt);
}
