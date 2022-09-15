#include "main.h"

/**
 *_islower - checks if input is lower case letter
 *
 *@val: The character to print
 *Return: Always 0.
 */

int _islower(int val)
{
	if (val >= 'a' && val <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
