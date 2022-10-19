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
	va_list val, chk;

	if (n == 0)
	{
		exit(0);
	}

	va_start(val, n);
	va_start(chk, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(chk, int) != '\0')
		{
			j = va_arg(val, int);
			printf("%d", j);
			print_sep(separator);
		}
	}
	j = va_arg(val, int);
	printf("%d\n", j);
}
