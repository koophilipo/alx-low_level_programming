#include "lists.h"


/**
 * add_dnodeint_end - adds a new node to end of linked list
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node (success), NULL (fail)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *traverse, *new_node;

	new_node = (dlistint_t *)calloc(1, sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;
	traverse = *head;
	if (traverse == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		for (i = 0; ; i++)
		{
			if (traverse->next == NULL)
			{
				new_node->prev = traverse;
				traverse->next = new_node;
				return (new_node);
			}
			traverse = traverse->next;
		}
	}
	return (NULL);
}
