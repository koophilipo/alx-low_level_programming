#include "main.h"

/**
 *more_numbers - return a set of integers 10x.
 *
 *Return: Always 0.
 */

void more_numbers(void)
{

	int lpctr = 0;

	while (lpctr < 10)
	{
		int count = 0;

		while (count < 15)
		{
			if (count <= 9)
			{
				_putchar(count + '0');
			}
			else
			{
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}

			count++;
		}

		_putchar('\n');
		lpctr++;
	}

}
