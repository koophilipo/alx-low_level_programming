#include "lists.h"


/**
 * add_dnodeint - adds a new node to the beginning of a linked list
 * @head: pointer to first node
 * @n: value for first node
 *
 * Return: pointer to new node (success), NULL (fail)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *dhead, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = (dlistint_t *)calloc(1, sizeof(dlistint_t));
	new_node->n = n;
	dhead = *head;

	if (dhead == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = dhead;
		new_node->prev = NULL;
		dhead->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
