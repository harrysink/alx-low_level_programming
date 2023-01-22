#include "lists.h"

/**
 * *add_dnodeint - this function adds a new node at the beginning of a
 * dlistint_t list
 * @head: pointer to the pointer to the doubly linked list
 * @n: new node to be added to the beginning of the list
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
