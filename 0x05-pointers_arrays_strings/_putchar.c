#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes a character to sstandard output
 *
 */

int _putchar(char val)
{
	return (write(1, &val, 1));
}
