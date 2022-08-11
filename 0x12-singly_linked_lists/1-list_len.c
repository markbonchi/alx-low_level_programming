#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns number of elements of a list_t list
 * @h: pointer to node
 *
 * Return: size of linked list i
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
