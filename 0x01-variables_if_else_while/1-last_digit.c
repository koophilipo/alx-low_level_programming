#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - function prints last digit
 *
 *description: The function main prints the last digit of an integer value
 *Return: always 0 (Success)
 */

int main(void)
{
	int n;
	int nMod;
	int result = -1;
	int *rePtr = &result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nMod = n % 10;

	printf("Last digit of ");

	if (n > 0)
	{
		if (nMod > 5)
		{
			printf("%d is %d and is greater than 5\n", n, nMod);
		} else if (nMod < 6 && nMod != 0)
		{
			printf("%d is %d and is less than 6 and not 0\n", n, nMod);
		} else if (nMod == 0)
		{
			printf("%d is 0 and is 0\n", n);
		}
	} else if (n < 0)
	{
		int nPos;
	        nPos = n * -1;
	
		*rePtr = (nPos % 10) * -1;

		printf("%d is %d and is less than 6 and not 0\n", n, result);
	}
	return (0);
}
