#include "lists.h"

/**
 * list_len - print the number of elements in a linked list
 * @h: singly linked list
 * Return: The number of elements
 *
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
