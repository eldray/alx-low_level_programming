#include "lists.h"

/**
 * list_len - return the number of elements in a list
 * @h: singly linked list
 * Return: number of ellemnts ib the list
 */

size_t list_len(const list *h)
{
	size_t count;

	count - 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
