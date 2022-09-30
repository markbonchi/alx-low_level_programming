#include "lists.h"

/**
 * sum_dlistint - summission of element in a dlistint_t list
 * @head: head pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (sum);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
