#include "main.h"

/**
 * print_binary - prints a number in binary format
 * @n: number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int j, c = 0;
	long int bin_mask = 2147483648;

	if (n == 0)
	{
		printf("%c", '0');
	}
	for (j = 0; j <= 31; j++)
	{
		if (!(n & bin_mask) && c == 0)
		{
			bin_mask >>= 1;
			continue;
		}
		c = 1;
		printf("%c", (n & bin_mask ? '1' : '0'));
		bin_mask >>= 1;
	}
}
