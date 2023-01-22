#include "lists.h"

/**
 * *get_dnodeint_at_index - this function returns the nth node of a dlistint_t
 * linked list
 * @head: pointer to the doubly linked list
 * @index: index of the node to be returned
 *
 * Return: the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head ? head : NULL);
}
