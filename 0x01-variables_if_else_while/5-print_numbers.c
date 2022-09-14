#include <stdio.h>

/**
 *
 *
 *
 *
 */

int main(void)
{
	char baseTen = '0';

	do {
		putchar(baseTen);
		baseTen++;
	} while (baseTen <= '9');

	putchar('\n');
	return (0);
}
