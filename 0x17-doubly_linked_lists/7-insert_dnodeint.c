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
	dlistint_t *new_node, *temp, *temp1;

	if (!(*h))
		new_node = make_node(n);

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		temp = *h;
		if (temp->next == NULL)
			while (temp->prev != NULL)
				temp = temp->prev;

		for (count = 0; temp != NULL; count++)
		{
			if (count == idx)
			{
				if (temp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = make_node(n);
					if (new_node != NULL)
					{
						temp1 = temp->prev;
						add_dnodeint2(&temp, &new_node);
						add_dnodeint_end2(&temp1, &new_node);
					}
				}
				break;
			}
			temp = temp->next;
		}
		if (temp == NULL && count != idx)
			return (NULL);
	}

	return (new_node);
}
