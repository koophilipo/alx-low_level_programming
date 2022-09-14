#include <stdio.h>

/**
 *main - Function prints alpha
 *
 *description: main function prints lower alphabets minus q and e
 *Return: always 0 (Success)
 */

int main(void)
{
	char alpha[24] = "a";
	char incr = 'b';
	int arrLen;

	for (int i = 1; i < 4; i++)
	{
		alpha[i] += incr;
		incr++;
	}

	if (incr < 'f')
	{
		incr++;
		for (int i = 4; i < 15; i++)
		{
			alpha[i] += incr;
			incr++;
		}
	}

	if (incr < 'r')
	{
		incr++;
		for (int i = 15; i < 24; i++)
		{
			alpha[i] = incr;
			incr++;
		}
	}

	arrLen = sizeof(alpha) / sizeof(*alpha);
	for (int i = 0; i < fore + 1; i++)
	{
		putchar(alpha[i]);
	}

	putchar('\n');
	return (0);
}

