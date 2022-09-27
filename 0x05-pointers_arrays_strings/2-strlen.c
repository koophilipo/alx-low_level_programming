#include "main.h"

/**
 *_strlen - determines the length of a given string
 *
 *@*val: pointer passed to function
 * Return: Always value of a
 */

int _strlen(const char *val)
{
	int a;

	a = 0;

	while (*val != '\0')
	{
		a++;
		val++;
	}

	return (a);
}
