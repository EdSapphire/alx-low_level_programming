#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: Address to list head
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
