#include "lists.h"

/**
 * free_list - frees list memory
 * @head: pointer to first node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *traverse;
	list_t *temp;

	traverse = head;
	while (traverse != NULL)
	{
		temp = traverse;
		traverse = traverse->next;
		free(temp);
	}

}
