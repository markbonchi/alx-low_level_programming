#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (!head)
		return (sum);

	ptr = head;
	while(ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
