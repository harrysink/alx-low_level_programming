#include "lists.h"

/**
 * list_len - this program returns the number of elements in a linked list_t
 * list
 * @h: pointer to a linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
