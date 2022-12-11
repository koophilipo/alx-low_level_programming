#include "lists.h"

/**
 * dlistint_len - returns number of elements of a linked list
 * @h: pointer to first node
 *
 * Return: number of elements, 0 if none
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0, i;
	const dlistint_t *traverse;

	if (h != NULL)
	{
		traverse = h;

		for (i = 0; ; i++)
		{
			len += 1;
			if (traverse->next == NULL)
			{
				return (len);
			}
			traverse = traverse->next;
		}
	}

	return (len);
}
