#include "main.h"
#include <limits.h>

/**
 *print_last_digit - returns last value of integer
 *
 *@val: holds input
 *Return: Always 0.
 */

int print_last_digit(int val)
{
	if (val < 0 && val > INT_MAX)
	{
		int chg = val * -1;
		int nlast = chg % 10;

		_putchar(nlast + '0');
		return (nlast);
	} else if (val == INT_MAX)
	{
		int ovlas = (val * - 1) - 1;
		int nlast = (ovlas % 10) + 1;

		_putchar(nlast + '0');
		return (nlast);

	} else if (val == 0)
	{
		_putchar('0');
		return (0);
	} else if (val > 0)
	{
		int plast = val % 10;

		_putchar(plast + '0');
		return (plast);
	}

	return (0);
}
