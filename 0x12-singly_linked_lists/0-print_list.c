#include "lists.h"

/**
 * print_list - this prgram prints all the elements of a list_t list
 * @h: pointer to a linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}

	return (s);
}