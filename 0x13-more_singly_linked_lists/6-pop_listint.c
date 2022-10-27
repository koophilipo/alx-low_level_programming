#include "lists.h"

/**
 * pop_listint - deletes the first node in a singly linked list
 * @head: pointer to head pointer
 * Return: node n value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *swap;
	int nVal = 0;

	if (head == NULL || *head == NULL)
	{
		return (nVal);
	}

	swap = *head;

	if (swap->next == NULL)
	{
		nVal = swap->n;
		*head = NULL;
		free(swap);
	}
	else
	{
		nVal = swap->n;
		temp = swap;
		swap = swap->next;
		*head = swap;
		free(temp);
	}
	return (nVal);
}
