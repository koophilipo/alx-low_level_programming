#include "main.h"

/**
 * cap_string - capitalizes the first letter after set of delimiters
 *
 * @val: string pointer
 * Return: string pointer
 */

char *cap_string(char *val)
{
	int i;
	int a;
	int j;

	char *delimiter = " ,.;!?\"\n\t(){}";

	for (i = 0; val[i]; i++)
	{
		if (i == 0 && (val[i] >= 'a' && val[i] <= 'z'))
		{
			val[i] -= 32;
		}

		a = 0;

		for (; delimiter[a]; a++)
		{
			if (val[i] == delimiter[a])
			{
				i++;

				for (j = 0; delimiter[j]; j++)
				{
					if (val[i] == delimiter[j])
					{
						i++;
					}
				}
				if (val[i] >= 'a' && val[i] <= 'z')
				{
					val[i] -= 32;
				}
			}
		}
	}
	return (val);
}
