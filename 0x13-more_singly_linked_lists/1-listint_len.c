#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: points to first node
 * Return: unsigned int
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	listint_t *new, *temp;

	if (h == NULL)
	{
		return (0);
	}

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = h->n;
	new->next = h->next;
	temp = new;
	while (new->next != NULL)
	{
		count++;
		new = new->next;
	}
	count++;
	free(temp);
	return (count);
}
