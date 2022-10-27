#include "lists.h"

/**
 * sum_listint - returns the sum of "n" data of list
 * @head: points to first node
 * Return: sum of list data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp, *traverse;

	if (head == NULL)
	{
		return (sum);
	}
	else if (head->next == NULL)
	{
		sum = head->n;
		return (sum);
	}

	temp = head;
	traverse = head;

	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
	head = temp;
	return (sum);

}
