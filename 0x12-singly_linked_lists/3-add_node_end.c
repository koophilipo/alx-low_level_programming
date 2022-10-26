#include "lists.h"

/**
 * add_first - add first node to a NULL list
 * @head: pointer to start of list
 * @str: char pointer
 * Return: list_t pointer
 */
list_t *add_first(list_t **head, char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(str);
		return (NULL);
	}
	new->str = str;
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * add_next - adds a node to a non-null list
 * @head: pointer to first node
 * @str: string
 * Return: list_t pointer
 */
list_t *add_next(list_t **head, char *str)
{
	list_t *new, *traverse;

	traverse = *head;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(str);
		return (NULL);
	}

	new->str = str;
	new->len = strlen(str);
	new->next = NULL;

	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new;
	return (*head);
}

/**
 * add_node_end - adds a new node to a list
 * @head: pointer to first node
 * @str: string
 * Return: list_t pointer (success), NULL (fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	char *strg;

	if (head == NULL)
	{
		return (NULL);
	}

	strg = (char *)malloc(sizeof(list_t));
	if (strg == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		strg[i] = str[i];
		i++;
	}
	strg[i] = str[i];

	if (*head == NULL)
	{
		add_first(head, strg);
		return (*head);
	}

	add_next(head, strg);
	return (*head);
}
