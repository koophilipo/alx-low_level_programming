#include "main.h"

/**
 *more_numbers - return a set of integers 10x.
 *
 *Return: Always 0.
 */

void more_numbers(void)
{

	int lpctr;
	int val;

	for (lpctr = 0; lpctr < 10; lpctr++)
	{
		val = 0;

		for (val = 0; val < 15; val++)
		{
			if (count > 9)
			{
				_putchar((val / 10) + '0');
			}

			_putchar((val % 10) + '0');
		}

		_putchar('\n');
	}

}
