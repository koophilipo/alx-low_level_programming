#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: points to first node
 * @index: integer
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *retrv;

	if (head == NULL)
	{
		return (NULL);
	}

	retrv = head;
	temp = head;

	if (index == 0)
	{
		return (head);
	}

	for (i = 0; i < index; i++)
	{
		if (i != index && retrv->next == NULL)
		{
			return (NULL);
		}
		retrv = retrv->next;
	}
	head = temp;
	return (retrv);
}
