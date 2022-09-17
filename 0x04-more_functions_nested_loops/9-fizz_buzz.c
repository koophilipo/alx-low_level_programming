#include <stdio.h>

/**
 *main - prints Fizz Buzz pattern
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int count = 100;
	int i;

	for (i = 1; i <= count; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		printf(" ");
	}

	printf("\n");
	return (0);
}
