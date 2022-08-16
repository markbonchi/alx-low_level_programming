#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to head pointer
 *
 * Return: pop
 */

int pop_listint(listint_t **head)
{
	int pop;
	listint_t *ptr = NULL;

	if (*head == NULL)
		return (0);
	ptr = *head;
	pop = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (pop);
}
