#include "main.h"

/**
 *_isupper - returns an integer value based on input
 *
 *@val: holds input receive from function invocation
 *Return: 0 if input is lowercase letter
 *	  1 if input is uppercase letter
 */

int _isupper(int val)
{
	if ((val >= 65) && (val <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (-1);
}
