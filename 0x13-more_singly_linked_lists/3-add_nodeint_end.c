#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t list
 * @head: head pointer address
 * @n: constant int
 *
 * Return: new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
