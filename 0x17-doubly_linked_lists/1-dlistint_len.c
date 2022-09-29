#include "lists.h"

/**
 * dlistint_len - counts the number of elemets in a dlistint_t list
 * @h: head pointer
 * Return: len (length of list)
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len;

	temp = h;
	for (len = 0; temp != NULL; len++)
		temp = temp->next;
	return (len);
}
