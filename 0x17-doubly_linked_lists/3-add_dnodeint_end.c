#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	tail = *head;

	if (tail == NULL)
	{
		tail = new;
		return (new);
	}
	else
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}

	new->prev = tail;

	return (new);
}

