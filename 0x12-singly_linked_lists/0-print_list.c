#include "lists.h"

/**
 * print_list - prints the elements of a singly list
 * @h: first node pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *new;

	if (h == NULL)
	{
		return (0);
	}

	new = (list_t *)malloc(sizeof(list_t));
	new->str = h->str;
	new->len = h->len;
	new->next = h->next;

	while (h)
	{
		count++;
		printf("[%u] ", (new->str) ? new->len : 0);
		printf("%s\n", (new->str) ? new->str : "(nil)");

		if (new->next == NULL)
		{
			break;
		}
		new = new->next;
	}

	free(new);
	return (count);
}
