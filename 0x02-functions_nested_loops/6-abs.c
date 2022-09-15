#include "main.h"

/**
 *_abs - checks if input is lower case letter
 *
 *@inpt: The character to inpint
 *Return: Always 0.
 */

int _abs(int inpt)
{
	int absVal;

	if (inpt < 0)
	{
		absVal = inpt * -1;
		return (absVal);
	} else if (inpt > 0)
	{
		return (inpt);
	} else if (inpt == 0)
	{
		return (0);
	}

	return (0);
}
