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
	dlistint_t *new_node;
	dlistint_t *tail;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	tail = *head;

	if (tail == NULL)
	{
		tail = new_node;
		return (new_node);
	}
	else
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}

	new_node->prev = tail;

	return (new_node);
}

