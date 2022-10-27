#include "lists.h"

/**
 * list_lenint - returns the number of nodes of list
 * @h: points to first node
 * Return: length of list
 */
size_t list_lenint(const listint_t *h)
{
	listint_t *newl;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	newl = (listint_t *)malloc(sizeof(listint_t));
	if (newl == NULL)
	{
		return (count);
	}
	newl->n = h->n;
	newl->next = h->next;

	while (newl != NULL)
	{
		count++;
		newl = newl->next;
	}
	free(newl);
	return (count);
}

/**
 * add_end - adds new node at end of list
 * @head: points to head of list
 * @n: value of new node
 * Return: pointer to new node
 */
listint_t *add_end(listint_t **head, const int n)
{
	listint_t *new, *traverse;

	traverse = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new;
	return (*head);
}


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
	if (*head != NULL)
	{
		new->next = *head;
	}
	else
	{
		new->next = NULL;
	}
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
	unsigned int i, j;
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
	j = list_lenint(*head);
	if (idx > j && idx < j + 2)
	{
		temp = add_end(head, n);
		return (temp);
	}
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
	return (new);
}
