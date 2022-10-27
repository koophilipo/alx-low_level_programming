#include "lists.h"

/**
 * free_listint2 - frees the memory of a linked list
 * @head: points to first node
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *new;

	if (head != NULL)
	{
		new = *head;

		while (new != NULL)
		{
			temp = new;
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}
