#include "lists.h"

/**
 * free_list - frees list memory
 * @head: pointer to first node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *nhead;
	list_t *traverse;
	list_t *temp;

	nhead = head;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			traverse = nhead;
			while ((traverse->next)->next != NULL)
			{
				traverse = traverse->next;
			}
			temp = traverse->next;
			traverse->next = NULL;
			free(temp);
		}
		free(head);
	}
}
