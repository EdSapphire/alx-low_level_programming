#include "lists.h"

/**
 * sum_listint - Returns the sum of all data of listint_t linked list
 * @head: Pointer to listint_t list head
 *
 * Return: Sum of data or 0 - if list is empty
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
