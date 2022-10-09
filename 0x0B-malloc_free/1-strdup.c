#include "main.h"

/**
 * _strdup - duplicates the content of a string pointer
 *
 * @str: string pointer
 * Return: pointer to duplicate string (success), NULL (fail)
 */

char *_strdup(char *str)
{
	int k = 0;
	int j = 0;
	int i = 0;
	char *arrSet;
	static char *dup;

	if (str == NULL)
	{
		return ( (char *)NULL);
	}

	while (str[j] != '\0')
	{
		k++;
		j++;
	}

	dup = (char *)malloc((k + 1) * sizeof(char));
	if (dup == NULL)
	{
		return ((char *)NULL);
	}
	arrSet = dup;

	while (i <= k)
	{
		arrSet[i] = str[i];
		i++;
	}
	return (dup);
}
