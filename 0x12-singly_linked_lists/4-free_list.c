#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: head pointer
 */

void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
