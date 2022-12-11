#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to first node
 * @idx: position to insert node
 * @n: value to insert new node
 *
 * Return: new node pointer (success), NULL (fail)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *traverse, *new_node;

	new_node = (dlistint_t *)calloc(1, sizeof(dlistint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}

	traverse = *h, new_node->n = n;
	if (traverse == NULL)
	{
		free(new_node), new_node = add_dnodeint(h, n);
		return (new_node);
	}
	for (i = 0; i <= idx && traverse != NULL; i++)
	{
		if (i == idx)
		{
			if (traverse->prev == NULL)
			{
				free(new_node), new_node = add_dnodeint(h, n);
			}
			else
			{
				new_node->prev = traverse->prev, new_node->next = traverse;
				traverse->prev = new_node, new_node->prev->next = new_node;
			}
			return (new_node);
		}
		traverse = traverse->next;
	}
	return (NULL);
}
