#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a listint_t linked list
 * @head: Pointer to head of listint_t list
 * @index: Index of the node starts at 0.
 *
 * Return: NULL - if Node doesn't exit otherwise - the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pt;

	for (pt = 0; pt < index; pt++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
