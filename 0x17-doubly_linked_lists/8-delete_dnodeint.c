#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to first node
 * @index: position to delete
 *
 * Return: 1 (success), -1 (fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *traverse;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	traverse = *head;

	for (i = 0; traverse != NULL; i++)
	{
		if (i == index)
		{
			if (traverse->prev == NULL && traverse->next != NULL)
			{
				traverse->next->prev = NULL;
				*head = traverse->next, free(traverse);
			}
			else if (traverse->next == NULL && traverse->prev == NULL)
			{
				*head = NULL, free(traverse);
			}
			else if (traverse->next == NULL)
			{
				traverse->prev->next = NULL, free(traverse);
			}
			else
			{
				traverse->prev->next = traverse->next;
				traverse->next->prev = traverse->prev;
				free(traverse);
			}
			return (1);
		}
		traverse = traverse->next;
	}
	return (-1);
}
