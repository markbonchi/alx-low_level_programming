#include "lists.h"

/**
 * free_dlistint - free dlistint_t list
 * @head: head pointer to node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
	free(head);
}
