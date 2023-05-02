#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index of
 * a listint_t linked list
 * @head: Pointer to address of the head of list
 * @index: index of the node
 *
 * Return: 1 - if succeeded or -1 - if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *bg = *head;
	unsigned int pt;

	if (bg == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(bg);
		return (1);
	}

	for (pt = 0; pt < (index - 1); pt++)
	{
		if (bg->next == NULL)
			return (-1);
		bg = bg->next;
	}
	del = bg->next;
	bg->next = del->next;
	free(del);

	return (1);
}
