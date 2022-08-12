#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: head pointer
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
	free(head);
}
