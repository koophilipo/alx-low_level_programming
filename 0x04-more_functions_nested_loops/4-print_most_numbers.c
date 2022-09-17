#include "main.h"

/**
 *print_most_numbers - return natural numbers.
 *
 *Return: Always 0.
 */

void print_most_numbers(void)
{

	int lpctr = 0;

	while (lpctr < 10)
	{

		if (lpctr != 2 && lpctr != 4)
		{
			char result;

			result = lpctr + '0';
			_putchar(result);
		}

		lpctr++;
	}

	_putchar('\n');
}
