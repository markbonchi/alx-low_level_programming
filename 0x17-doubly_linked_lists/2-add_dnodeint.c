#include "lists.h"

/**
 * add_dnodeint - adds node to beginning of dlistint_t list
 * @head: pointer to head
 * @n: struct element
 * Return: head || NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}

/**
 * add_dnodeint2 - inserts node to complete broken list in a dlistint_t list
 * @head: pointer to head
 * @node: pointer to node
 * Return: head
 */

dlistint_t *add_dnodeint2(dlistint_t **head, dlistint_t **node)
{
	dlistint_t *temp;

	if (!*head || !*node)
		return (NULL);

	temp = *head;
	(*head)->prev = *node;
	(*node)->next = temp;
	*head = *node;
	return (*head);
}
