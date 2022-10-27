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
 * add_nodeint - adds a node to the end of a singly list
 * @head: points to first node
 * @n: integer
 * Return: pointer to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head == NULL)
	{
		return (NULL);
	}

	addint_first(head, n);
	return (*head);
}
