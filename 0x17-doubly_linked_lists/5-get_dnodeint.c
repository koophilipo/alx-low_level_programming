#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: the position of the node to remove
 *
 * Return: node removed (success), NULL (fail)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *traverse;

	if (head == NULL)
	{
		return (NULL);
	}

	traverse = head;
	for (i = 0; i <= index && traverse != NULL; i++)
	{
		if (i == index)
		{
			return (traverse);
		}
		traverse = traverse->next;
	}
	return (NULL);
}
