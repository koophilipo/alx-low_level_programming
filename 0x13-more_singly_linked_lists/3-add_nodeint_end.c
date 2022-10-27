#include "lists.h"

/**
 * addint_first - adds a node to the beginning of a list
 * @head: pointer to first node
 * @n: integer
 * Return: pointer to head
 */
listint_t *addint_first(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * addint_next - adds a new node to the end of list
 * @head: points to first node
 * @n: integer
 * Return: pointer to head
 */
listint_t *addint_next(listint_t **head, const int n)
{
	listint_t *new, *traverse, *temp;

	traverse = *head;
	temp = *head;

	new  = (listint_t *)malloc(sizeof(listint_t));
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
	*head = temp;
	return (*head);
}

/**
 * add_nodeint_end - adds a node to the end of a singly list
 * @head: points to first node
 * @n: integer
 * Return: pointer to head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (head == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		addint_first(head, n);
	}
	else
	{
		addint_next(head, n);
	}
	return (*head);
}
