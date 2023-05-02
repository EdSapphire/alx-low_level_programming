#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of list
 * @head: Pointer to header address of list
 * @n: Integer of new nodes
 *
 * Return: Address of new node or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new;
	add_new = (listint_t *)malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);
	add_new->n = n;
	add_new->next = *head;	
	*head = add_new;
	return (add_new);
}
