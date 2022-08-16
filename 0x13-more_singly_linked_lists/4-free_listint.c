#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
