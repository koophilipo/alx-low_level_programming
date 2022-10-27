#include "lists.h"

/**
 * print_list - prints the elements of a singly list
 * @h: first node pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *newt, *temp;

	if (h == NULL)
	{
		return (0);
	}

	newt = (list_t *)malloc(sizeof(list_t));
	newt->str = h->str;
	newt->len = h->len;
	newt->next = h->next;
	temp = newt;

	while (h)
	{
		count++;
		printf("[%u] ", (newt->str) ? newt->len : 0);
		printf("%s\n", ((newt->str) ? newt->str : "(nil)"));

		if (newt->next == NULL)
		{
			break;
		}
		newt = newt->next;
	}
	free(temp);
	return (count);
}
