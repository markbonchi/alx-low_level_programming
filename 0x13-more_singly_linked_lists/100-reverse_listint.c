#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1 = NULL, *ptr2 = NULL;

	if (!*head)
		return (NULL);

	ptr1 = *head;
	*head = (*head)->next;
	ptr2 = (*head)->next;
	ptr1->next = NULL;

	while (*head != NULL)
	{
		(*head)->next = ptr1;
		ptr1 = *head;
		*head = ptr2;
		if (ptr2 != NULL)
			ptr2 = ptr2->next;
	}
	*head = ptr1;
	return (*head);
}
