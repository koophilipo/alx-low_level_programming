#include "main.h"

/**
 * _pow1 - calculates power of a number
 * @z: base number
 * @p: power
 * Return: integer
 */
int _pow1(unsigned int z, unsigned int p)
{
	int i = 0;
	int b = z;
	unsigned int comp = p;

	if (p == 0)
	{
		return (1);
	}
	else if (p == 1)
	{
		return (b);
	}
	while (p > 1)
	{
		if (p == comp)
		{
			i = b * b;
		}
		else
		{
			i *= b;
		}
		--p;
	}
	return (i);
}


/**
 * set_bit - sets the bit at index to 1
 * @p: pointer to integer
 * @index: index to set bit
 * Return: 1 (success), -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 39)
	{
		return (-1);
	}
	j = _pow1(2, index);
	*n = *n ^ j;
	return (j);
}
