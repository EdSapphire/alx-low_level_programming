#include "lists.h"

size_t type_listint_free(const listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * type_listint - Function that counts number of nodes
 * @head: Pointer to address of head of list
 *
 * Return: Number of nodes or 0.
 */
size_t type_listint_free(const listint_t *head)
{
        const listint_t *num, *len;
        size_t pt = 1;

        if (head == NULL || head->next == NULL)
                return (0);

        num = head->next;
        len = (head->next)->next;

        while (len)
        {
                if (num == len)
                {
                        num = head;
                        while (num != len)
                        {
                                pt++;
                                num = num->next;
                                len = len->next;
                        }

                        num = num->next;
                        while (num != len)
                        {
                                pt++;
                                num = num->next;
                        }

                        return (pt);
                }

                num = num->next;
                len = (len->next)->next;
        }

        return (0);
}

/**
 * free_listint_safe - Function that frees a listint_t list
 * @h: Pointer to address of head of list
 *
 * Return: Size of node freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t pt, del;

	pt = type_listint_free(*h);

	if (pt == 0)
	{
		for (; *h != NULL && h != NULL; pt++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (del = 0; del < pt; del++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;

	return (pt);
}
