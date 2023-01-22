#include "lists.h"

/**
 * *add_dnodeint_end - this function adds a new node at the end of a dlistint_t
 * list
 * @head: pointer to the pointer to the doubly linked list
 * @n: new node to be added to the end of the list
 *
 * Return: the address of the nee element, of NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
