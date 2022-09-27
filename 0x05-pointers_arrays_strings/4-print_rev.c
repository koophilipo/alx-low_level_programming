#include "main.h"

/**
 *print_rev - writes a string to standard output in reverse
 *
 */

void print_rev(char *str)
{
	int strCount;

	strCount = 0;
	while (*str++)
	{
		strCount++;
	}

	while (strCount >= -1)
	{
		_putchar(*str--);
		--strCount;
	}

	_putchar('\n');
}
