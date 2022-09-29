#include "lists.h"

/**
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return i;

}
