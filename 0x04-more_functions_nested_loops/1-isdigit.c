#include "main.h"

/**
 *_isdigit - returns an integer value based on input
 *
 *@val: holds input receive from function invocation
 *Return: 0 if input is ! a digit
 *	  1 if input is a digit
 *	  0 end of function
 */

int _isdigit(char val)
{
	if (val >= '0' && val <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
