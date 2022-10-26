#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	list_t *newl;
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}

	newl = (list_t *)malloc(sizeof(list_t));
	newl->str = h->str;
	newl->len = h->len;
	newl->next = h->next;

	while (h)
	{
		count++;
		if (newl->next == NULL)
		{
			break;
		}
		newl = newl->next;
	}
	return (count);
}
