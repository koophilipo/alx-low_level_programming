#include "main.h"

/**
 * create_array - creates array of sixe int and initializes withh char
 *
 * @size: size of array passed to function, integer
 * @c: initialization character
 * Return: Pointer to array(success), NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size < 1)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}
