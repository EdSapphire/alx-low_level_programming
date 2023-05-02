#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a list
 * @head: Address head of list
 *
 * Return: 0 - if linked list is empty otherwise head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop;
	
	if (*head == NULL)
		return (0);
	
	temp = *head;
	pop = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (pop);
}
