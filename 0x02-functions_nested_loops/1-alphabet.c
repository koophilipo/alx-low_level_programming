#include "main.h"

/**
 *print_alphabet - prints all lower case alphabets
 *
 *Return: always 0
 *error return 1
 */

int print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
	return (0);
}
