#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in linked list
 * @head: Pointer to the head of the listint_t list
 *
 * Return: Address of the loop where it start or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *num, *len;

	if (head == NULL || head->next == NULL)
		return (NULL);

	num = head->next;
	len = (head->next)->next;

	while (len)
	{
		if (num == len)
		{
			num = head;
			while (num != len)
			{
				num = num->next;
				len = len->next;
			}
			return (num);
		}
		num = num->next;
		len = (len->next)->next;
	}
	return (NULL);
}
