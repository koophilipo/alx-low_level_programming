#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of integer values
 * @n: integer constant
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list val, check;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(check, n);
	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		int j = va_arg(check, int);
		printf("check: %d\n", j); 
		if (j != '\0')
		{
			sum += va_arg(val, int);
		}
	}
	va_end(check);
	va_end(val);
	return (sum);
}
