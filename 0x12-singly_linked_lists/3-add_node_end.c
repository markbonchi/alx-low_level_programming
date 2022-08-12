#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new nodes at the end of a list_t list
 * @head: pointer to a pointer to first node
 * @str: string
 *
 * Return: temp node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *ptr, *temp;

	while (str[i] != '\0')
		i++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		exit(EXIT_FAILURE);

	temp->str = strdup(str);
	temp->len = i;

	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	} else
	{
		temp->next = NULL;
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
