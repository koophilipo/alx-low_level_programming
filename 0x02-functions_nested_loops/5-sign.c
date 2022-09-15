#include "main.h"

/**
 *print_sign - returns the sign of an integer
 *
 *@val: holds input
 *Return: Always 0.
 */

int print_sign(int val)
{
	if (val > 0)
	{
		_putchar('+');
		return (1);
	} else if (val < 0)
	{
		_putchar('-');
		return (-1);
	} else if (val == 0)
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
