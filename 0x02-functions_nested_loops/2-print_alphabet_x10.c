#include "main.h"

/**
 *print_alphabet_x10 - print all alphabets 10x
 *
 *Return: Always 0.
 */

int print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		count++;
	}

	return (0);
}
