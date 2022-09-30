#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index in a dlistint_t list
 * @head: pointer to head
 * @index: index of node
 * Return: 1 (Success) || -1 (Failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *temp1;
	dlistint_t *temp2;
	unsigned int count;

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (count = 0; count != index; count++)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	if (count != index)
		return (-1);
	temp1 = temp->prev;
	temp2 = temp->next;
	temp1->next = temp2;
	if (temp2 != NULL)
		temp2->prev = temp1;
	free(temp);
	return (1);
}
