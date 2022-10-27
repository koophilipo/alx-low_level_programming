#include "lists.h"

/**
 * free_listint - frees the memory of a linked list
 * @head: points to first node
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
