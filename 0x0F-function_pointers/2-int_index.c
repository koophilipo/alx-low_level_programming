#include "function_pointers.h"

/**
 * int_index - searches for integer within an array
 * @array: integer array
 * @size: length of array
 * @cmp: pointer to function
 * Return: -1 if size is <= 0
 *	-1 if no result
 *	element found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*func)(int);
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array != NULL && size != '\0' && cmp != NULL)
	{
		func = cmp;
		for (i = 0; i < size; i++)
		{
			if (func(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
