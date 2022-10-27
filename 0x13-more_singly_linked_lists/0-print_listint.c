#include "lists.h"

/**
 * print_listint - prints a sinlgy linked list
 * @h: points to first list node
 * Return: unsigned int
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *new, *temp;

	if (h == NULL)
	{
		return (0);
	}

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return(0);
	}

	new->n = h->n;
	new->next = h->next;
	temp = new;

	while (new->next != NULL)
	{
		count++;
		printf("%d\n", (new->n));
		new = new->next;
	}
	printf("%d\n", (new->n));
	count++;
	free(temp);
	return (count);
}
