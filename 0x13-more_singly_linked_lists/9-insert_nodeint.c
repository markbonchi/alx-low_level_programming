#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head pointer
 * @idx: node index
 * @n: new node element
 *
 * Return: temp
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *ptr = *head;

	if (!*head || !idx)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	while (*head)
	{
		if (ptr == NULL)
			return (NULL);
		if (count == idx - 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
		}
		ptr = ptr->next;
		count++;
	}
	return (temp);
}
