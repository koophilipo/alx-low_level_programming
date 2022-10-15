#include "function_pointers.h"

/**
 * array_iterator - function that executes a given parameter
 * @array: integer array
 * @size: array length
 * @action: function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*func)(int);
	unsigned int i;

	if (size > 0 && array != NULL && action != NULL)
	{
		i = 0;
		func = action;
		while (i < size)
		{
			func(array[i]);
			i++;
		}
	}
}
