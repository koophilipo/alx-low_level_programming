#include "main.h"

/**
 * index_range - determines the maximum bit range
 * @n: long integer
 * Return: the bit range
 */
int index_range(unsigned long int n)
{
	unsigned int j, c = 0, range = 0;
	unsigned long int bin_mask = 549755813888;

	for (j = 0; j <= 39; j++)
	{
		if (!(n & bin_mask) && c == 0)
		{
			bin_mask >>= 1;
			continue;
		}
		c = 1;
		range++;
		bin_mask >>= 1;
	}
	return (range);
}


/**
 * get_bit - returns the bit set at an index
 * @n: long integer
 * @index: index to retrieve bit
 * Return: 1 or 0 (success), -1 (fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j, c = 0;
	unsigned int idx = index_range(n);
	unsigned long int bin_mask = 549755813888;

	if (n == 0 || index > idx - 1)
	{
		return (-1);
	}
	else
	{
		for (j = 0; j <= 39; j++)
		{
			if (c != 39 - index)
			{
				bin_mask >>= 1;
				c++;
				continue;
			}
			else if (c == 39 - index)
			{
				return (n & bin_mask ? 1 : 0);
			}
		}
	}
	return (-1);
}
