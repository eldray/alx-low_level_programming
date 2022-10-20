#include "lists.h"

/**
 * print_list - prints list.
 * @h: param list
 *
 * Return: struct
 */

size_t print_list(const list_t *h)
{
	size_t h;

	for (h = 0; p; h++)
	{
		printf("[%d] &s", p->len, p->str);
		p = p ->next;
	}
	return 1;
}
