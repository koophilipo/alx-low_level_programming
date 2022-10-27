#include "lists.h"

/**
 * free_list - frees list memory
 * @head: pointer to first node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *traverse;

	traverse = head;
	while (traverse != NULL)
	{
		list_t *temp = traverse;

		free(traverse->str);
		traverse = traverse->next;
		free(temp);
	}

}
