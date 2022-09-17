#include "main.h"

/**
 *_isupper - returns an integer value based on input
 *
 *@val: holds input receive from function invocation
 *Return: 0 if input is lowercase letter
 *	  1 if input is uppercase letter
 */

int _isupper(char val)
{
	if (val >= 'A' && val <= 'Z')
	{
		return (1);
	}
	else if (val >= 'a' && val <= 'z')
	{
		return (0);
	}

	return (-1);
}
