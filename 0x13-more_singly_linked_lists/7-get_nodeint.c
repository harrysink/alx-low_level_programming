#include "lists.h"

/**
 * get_nodeint_at_index -  this function returns the node at a certain index
 * in a link
 * @head: first node in the linkde list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NLL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

