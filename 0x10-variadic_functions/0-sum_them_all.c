#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of integer values
 * @n: integer constant
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list val;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		if ((va_arg(val, int)) != '\0')
		{
			sum += va_arg(val, int);
		}
	}
	va_end(val);
	return (sum);
}
