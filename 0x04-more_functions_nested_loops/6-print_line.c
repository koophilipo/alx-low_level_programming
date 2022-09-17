#include "main.h"

/**
 *print_line - prints n number of lines
 *
 *@val: hold input value
 */

void print_line(int val)
{
	int count = 1;

	while (count <= val)
	{
		_putchar('_');
		count++;
	}

	_putchar('\n');
}
