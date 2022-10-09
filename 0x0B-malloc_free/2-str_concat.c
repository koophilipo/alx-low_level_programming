#include "main.h"

/**
 * str_concat - concatenates two strings into a new string
 *
 * @s1: first string passed
 * @s2: second string passed
 * Return: string pointer (success), NULL (fail)
 */

char *str_concat(char *s1, char *s2)
{
	int k = 0;
	int h = 0;
	int j = 0;
	int i;
	int z;
	static char *dup;

	while (s1[j] != '\0')
	{
		k++;
		j++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		h++;
		j++;
	}

	dup = (char *)malloc(sizeof(char) * (k + h + 1));

	if (dup == NULL)
	{
		return ((char *)NULL);
	}

	if (k == 0 && h == 0)
	{
		dup[k] = '\0';
	}
	else
	{
		if (k == 0)
		{
			i = 0;

			while (i <= h)
			{
				dup[i] = s2[i];
				i++;
			}
		}
		else if (h == 0)
		{
			i = 0;

			while (i <= k)
			{
				dup[i] = s1[i];
				i++;
			}
		}
		else
		{
			i = 0;
			z = 0;

			while (i < k)
			{
				dup[i] = s1[i];
				i++;
			}
			while (z < h)
			{
				dup[i] = s2[z];
				z++;
				i++;
			}
			dup[i] = '\0';
		}
	}

	return (dup);
}
