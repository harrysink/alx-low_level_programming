#include "lists.h"

/**
 * dlistint_len - this functions returns the number of elements in a linked
 * list
 * @h: pointer to the doubly linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
