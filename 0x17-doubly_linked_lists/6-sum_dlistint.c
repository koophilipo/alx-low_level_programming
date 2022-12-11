#include "lists.h"


/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: pointer to first node
 *
 * Return: sum of list values (success), 0 (fail)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, i;
	dlistint_t *traverse;

	if (head == NULL)
	{
		return (sum);
	}

	traverse = head;
	for (i = 0; traverse != NULL; i++)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
	return (sum);
}
