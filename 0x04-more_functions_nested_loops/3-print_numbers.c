#include "main.h"

/**
 *print_numbers - return natural numbers
 *
 *Return: Always 0
 */

void print_numbers(void)
{

	int count = 0;
	char val;

	while (count < 10)
	{
		val = count + '0';
		_putchar(val);
		count++;
	}

	_putchar('\n');

}
