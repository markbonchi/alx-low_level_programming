#include "lists.h"

/**
 * add_dnodeint_end - Adds new node to dlistiint_t list
 * @head: pointer to head
 * @n: struct element
 * Return: new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = NULL;

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
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}

/**
 * make_node - makes new node of a dlistint_t list
 * @n: element of new node
 * Return: new_node
 */

dlistint_t *make_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

/**
 * add_dnodeint_end2 - inserts new node to end of split dlistint_t list
 * @head: pointer to head
 * @node: pointer to node
 * Return: head
 */

dlistint_t *add_dnodeint_end2(dlistint_t **head, dlistint_t **node)
{
	dlistint_t *temp = NULL;

	if (!*head || !*node)
		return (NULL);
	temp = *head;
	(*head)->next = *node;
	(*node)->prev = temp;
	*head = *node;
	return (*head);
}
