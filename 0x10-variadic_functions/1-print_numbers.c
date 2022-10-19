#include "variadic_functions.h"

/**
 * print_sep - prints string to std out
 * @btwn: string
 */
void print_sep(const char *btwn)
{
	if (btwn != NULL)
	{
		while (*btwn != '\0')
		{
			printf("%c", *btwn);
			btwn++;
		}
	}
}

/**
 * print_numbers - prints numbers to std output
 * @separator: string pointer
 * @n: number
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list val;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
			j = va_arg(val, int);
			printf("%d", j);
			if (i != (n - 1))
			{
				print_sep(separator);
			}
	}
	putchar('\n');
}
