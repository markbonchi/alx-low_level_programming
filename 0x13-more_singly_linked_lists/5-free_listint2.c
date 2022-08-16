#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
