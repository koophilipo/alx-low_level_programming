#include "main.h"

/**
 *print_square - print a square pattern
 *
 *@val: hold input
 */

void print_square(int val)
{
	int i;
	int j;

	if (val > 0)
	{
		for (j = 1; j <= val; j++)
		{
			for (i = 1; i <= val; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
