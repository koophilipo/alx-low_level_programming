#include "main.h"

/**
 * _strcmp - compares the values of 2 strings
 *
 * @s1: string
 * @s2: string
 * Return: 15 if greater or -15 if less or 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		sum1 += s1[i] + 0;
		sum2 += s2[i] + 0;
		if (sum1 != sum2)
		{
			break;
		}

	}

	return (sum1 - sum2);
}
