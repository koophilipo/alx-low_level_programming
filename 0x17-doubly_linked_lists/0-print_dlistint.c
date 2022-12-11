#include "lists.h"

/**
 * print_dlistint - prints all elements of a linked list
 * @h: pointer to first node
 *
 * Return: number of elements, 0 if none
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0, i;
	const dlistint_t *traverse;

	if (h != NULL)
	{
		traverse = h;

		for (i = 0; ; i++)
		{
			len += 1;
			printf("%d\n", traverse->n);
			if (traverse->next == NULL)
			{
				return (len);
			}
			traverse = traverse->next;
		}
	}

	return (len);
}
