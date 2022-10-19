#include "variadic_functions.h"

#define END_ARRAY (format[i + 1])
#define FLAGS (format[i] == 'c' || format[i] == 'i' \
		|| format[i] == 'f' || format[i] == 's')

/**
 * print_s - print to std output
 * @s: string
 * Return: Always 0 (success), -1 (fail)
 */
int print_s(char *s)
{
	while (s != NULL)
	{
		printf("%s", s);
		return (0);
	}
	printf("(nil)");
	return (-1);
}


/**
 * print_c - print char to std output
 * @c: integer
 */
void print_c(int c)
{
	printf("%c", c);
}

/**
 * print_i - print int to std output
 * @i: integer
 */
void print_i(int i)
{
	printf("%d", i);
}

/**
 * print_f - print string to std output
 * @f: double
 */
void print_f(double f)
{
	printf("%f", f);
}

/**
 * print_all - prints arguments to std output
 * @format: constant string constant
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	if (format != NULL)
	{
		va_list val;

		va_start(val, format);
		while (format[i] != '\0' && format != NULL)
		{
			switch (format[i])
			{
				case 'c':
					print_c(va_arg(val, int));
					break;
				case 'i':
					print_i(va_arg(val, int));
					break;
				case 'f':
					print_f(va_arg(val, double));
					break;
				case 's':
					print_s(va_arg(val, char*));
					break;
			}
			if (END_ARRAY && FLAGS)
			{
				printf(", ");
			}
			i++;
		}
		va_end(val);
	}
	printf("\n");
}
