#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t linked list
 * @head: double pointer to the node
 * @str: string
 *
 * Return: head (dereferenced)
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
		exit(EXIT_FAILURE);
	while (str[i] != '\0')
		i++;

	temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (*head);
}
