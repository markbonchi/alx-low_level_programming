#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index in a dlistint_t list
 * @head: head pointer
 * @index: index of node
 * Return: temp || NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int count;

	if (!head)
		return (NULL);

	temp = head;
	for (count = 0; count != index; count++)
	{
		if (temp == NULL)
			break;
		temp = temp->next;
	}
	return (temp);
}