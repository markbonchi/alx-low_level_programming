#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	if (!*head)
		*head = NULL;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
