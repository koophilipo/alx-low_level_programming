#include "lists.h"

/**
 * add_firstint - adds new node at index 0
 * @head: points to head of list
 * @n: value for new node
 * Return: pointer to new node
 */
listint_t *add_firstint(listint_t **head, int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	*head = new;
	return (new);
}



/**
 * insert_nodeint_at_index - adds new node at index of list
 * @head: points to head pointer
 * @idx: integer
 * @n: integer
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp, *temp2, *traverse;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		temp = add_firstint(head, n);
		return (temp);
	}

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	temp = *head;
	traverse = *head;

	for (i = 0; i < idx; i++)
	{
		if (i != idx && traverse->next == NULL)
		{
			free(new);
			return (NULL);
		}
		temp2 = traverse;
		traverse = traverse->next;
	}
	new->n = n;
	new->next = traverse;
	temp2->next = new;
	*head = temp;
	return (new);
}
