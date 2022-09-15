#include "main.h"

/**
 *main - checks if input is lower case letter
 *
 *Return: Always 0.
 */

int _isalpha(int val)
{
	if ((val >= 'a' && val <= 'z') || (val >= 'A' && val <= 'Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}

	return (0);	
}
