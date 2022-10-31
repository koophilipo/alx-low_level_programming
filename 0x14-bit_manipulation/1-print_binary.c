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

	if (n == 0 || n > 4294967295)
	{
		printf("0");
	}
	else
	{
		for (j = 0; j <= 31; j++)
		{
			if (!(n & bin_mask) && c == 0)
			{
				bin_mask >>= 1;
				continue;
			}
			c = 1;
			if (n & bin_mask)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			bin_mask >>= 1;
		}
	}
}
