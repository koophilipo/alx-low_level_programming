#include "main.h"

/**
 *_puts - writes a string to standard output
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		*str++;
	}
}
