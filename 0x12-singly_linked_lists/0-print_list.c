#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to node
 *
 * Return: size of linked list i
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = malloc(sizeof(list_t));

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
