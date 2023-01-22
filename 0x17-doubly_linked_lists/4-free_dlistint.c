#include "lists.h"

/**
 * free_dlistint - this function frees a dlistint_t list
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
