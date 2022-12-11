#include "lists.h"


/**
 * free_dlintint - frees a dlistint_t list
 * @head: pointer to the first node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	int i;
	dlistint_t *traverse;

	if (head != NULL)
	{
		traverse = head;

		for (i = 0; ; i++)
		{
			if (traverse->prev != NULL)
			{
				free(traverse->prev);
			}
			if (traverse->next == NULL)
			{
				free(traverse);
				return;
			}
			traverse = traverse->next;
		}
	}
}
