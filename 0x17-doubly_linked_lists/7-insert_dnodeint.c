#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index of a dlistint)t list
 * @h: pointer to head
 * @idx: index of element to insert
 * @n: element in node
 * Return: new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node, *temp = NULL, *temp1 = NULL;

	if (!(*h))
		return (NULL);

	new_node = make_node(n);
	if (new_node == NULL)
		return (NULL);
	temp = *h;
	for (count = 0; count != idx; count++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	temp1 = temp->prev;
	temp->prev = NULL;
	temp1->next = NULL;
	add_dnodeint2(&temp, &new_node);
	add_dnodeint_end2(&temp1, &new_node);
	return (new_node);
}
