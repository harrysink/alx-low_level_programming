#include "lists.h"

/**
 * free_list - this function frees a list_t list
 * @head: pointer to the list-t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
