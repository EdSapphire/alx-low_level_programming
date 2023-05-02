#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: Address to list head
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
