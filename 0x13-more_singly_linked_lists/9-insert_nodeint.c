#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: Pointer to address to head of list
 * @idx: Index of the listint_t list
 * @n: Integer of the node
 *
 * Return: Address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add, *bg = *head;
	unsigned int pt;

	add = (listint_t *)malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;

	if (idx == 0)
	{
		add->next = bg;
		*head = add;
		return (add);
	}

	for (pt = 0; pt < (idx - 1); pt++)
	{
		if (bg == NULL || bg->next == NULL)
			return (NULL);

		bg = bg->next;
	}
	add->next = bg->next;
	bg->next = add;

	return (add);
}
