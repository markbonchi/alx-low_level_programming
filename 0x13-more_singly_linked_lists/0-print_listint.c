#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head pointer
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;


	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
