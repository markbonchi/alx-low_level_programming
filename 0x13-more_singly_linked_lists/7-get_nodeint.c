#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr = NULL;

	if (!head)
		return (NULL);

	ptr = head;
	if (index)
	{
		while (head)
		{
			if (count == index)
				break;
			ptr = ptr->next;
			count++;
		}
	}
	return (ptr);
}
