#include "main.h"

/**
 *print_diagonal - make a diagonal pattern n times
 *
 *@val: holds the input integer
 */

void print_diagonal(int val)
{
	int i;
	int j;

	if (val > 0)
	{
		for (i = 1; i <= val; i++)
		{
			for (j = 1; j <= val; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}

			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
