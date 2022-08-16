#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of the data (n) in a listint_t linked list
 * @head: head pointer
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (!head)
		return (sum);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
